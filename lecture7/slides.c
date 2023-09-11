...
// Pinnin asetukset
PIN_Config buttonConfig[] = {
   Board_BUTTON0  | PIN_INPUT_EN | PIN_PULLUP | PIN_IRQ_NEGEDGE,
   PIN_TERMINATE 
};
...
// Keskeytyskäsittelijä
void buttonFxn(PIN_Handle handle, PIN_Id pinId) {
   ...
}

Int main() {
   ...
   // Asetetaan käsittelijä buttonFxn pinnille 
   if (PIN_registerIntCb(buttonHandle, &buttonFxn) != 0) {
      System_abort("Error registering button callback function");
   }
   ...
}






uint8_t uartBuffer[30]; // Response buffer

// Handler Function / Callback function
static void uartFxn(UART_Handle handle, void *rxBuf, size_t len) {

   // We have the desired number of characters available
   // In the Rx_buf array, the length is dynamic
   // The len is passed as an argument to a second function.
   tehdaan_jotain_nopeasti(rxBuf,len);

   // Wait for annother interruption
   UART_read(handle, rxBuf, 1);
}

static void uartTask(UArg arg0, UArg arg1) {

   UART_Handle handle;
   UART_Params params;

   UART_Params_init(&params);
   params.baudRate      = 9600;
   params.readMode      = UART_MODE_CALLBACK; // Interrupt based response
   params.readCallback  = &uartFxn; // Callback function (handler function/ISR)
   params.readDataMode  = UART_DATA_TEXT;
   params.writeDataMode = UART_DATA_TEXT;

    // Activate UART in this TASK
   handle = UART_open(Board_UART, &params);
   if (handle == NULL) {
      System_abort("Error opening the UART");
   }

   // Now wait for new data
   UART_read(handle, uartBuffer, 1);

   while(1) {
      //Infinite loop
   }
}

int main() {
   ...
   Board_initUART();	
   ...
}


// RTOS-variables for MPU pins
static PIN_Handle MpuHandle;
static PIN_State MpuState;

// MPU9250 pin settings
static PIN_Config MpuConfig[] = {
    Board_MPU_INT | PIN_INPUT_EN | PIN_PULLDOWN | PIN_IRQ_DIS | PIN_HYSTERESIS,
    PIN_TERMINATE
};

// Handling function
Void MpuFxn(PIN_Handle handle, PIN_Id pinId) {
      ...
}

Void sensorTask(UArg arg0, UArg arg1) {

   // Allow MPU9250 interruption during the rising edge
   PIN_setInterrupt(MpuConfig, PIN_ID(Board_MPU_INT) | PIN_IRQ_POSEDGE); 
   ...
   // Disable MPU9250 interruptions
   PIN_setInterrupt(MpuConfig, PIN_ID(Board_MPU_INT) | PIN_IRQ_DIS);
}

int main(void) {
   ...
   // Take in Use MPU pin.
   MpuHandle = PIN_open(&MpuState, MpuConfig);
   if (MpuHandle == NULL) {
      System_abort("Pin open failed!");
   }

   // Set the interruption handling funtion.
   PIN_registerIntCb(MpuHandle, &MpuFxn);
   ...
}


...
#include <ti/sysbios/knl/Clock.h>
...

// Kellokeskeytyksen käsittelijä
Void clkFxn(UArg arg0) {

   // Esimerkki-tyyliin älä tee näin, koska todella hidas
   sprintf(str,"System time: %.5fs\n", (double)Clock_getTicks() / 100000.0);
   System_printf(str);
   System_flush();
}

int main(void) {

   ...
   Board_initGeneral();

   // RTOS:n kellomuuttujat
   Clock_Handle clkHandle;
   Clock_Params clkParams;

   // Alustetaan kello
   Clock_Params_init(&clkParams);
   clkParams.period = 1000000 / Clock_tickPeriod;
   clkParams.startFlag = TRUE;

   // Otetaan käyttöön ohjelmassa
   clkHandle = Clock_create((Clock_FuncPtr)clkFxn, 1000000 / Clock_tickPeriod, &clkParams, NULL);
   if (clkHandle == NULL) {
      System_abort("Clock create failed");
   }
   ...
}


#include <ti/sysbios/hal/Seconds.h>
...
Void clkFxn(UArg arg0) {

   time_t nyt = time(NULL);
   struct tm *aika = localtime(&nyt);
   System_printf("Kello on %02d:%02d:%02d\n", aika->tm_hour+3, aika->tm_min, aika->tm_sec);
   System_flush();
}

Int main() {
   ...
   // Asetetaan reaaliaikakellon aloitusaika
   Seconds_set(1475578882); // Jännempi argumentti..
   ...
   }
   
   
#include <comm_lib.h>

// Let's send a message when button is pressed
void buttonFxn(PIN_Handle handle, PIN_Id pinId) {
   ...
   char payload[16] = "Hello world!";
   Send6LoWPAN(IEEE80154_SERVER_ADDR, payload, strlen(payload));
   ...
   // IMPORTANT !Radio always back to receive mode with ao. function call
   // ATTENTION! Here is no more checking return value.. check only in initialization.
   StartReceive6LoWPAN();
}

// Data transfer protocol
Void commTask(UArg arg0, UArg arg1) {

   char payload[16]; // message buffer
   uint16_t senderAddr;

   // Radio configured for receive mode
   int32_t result = StartReceive6LoWPAN();
   if(result != true) {
      System_abort("Wireless receive start failed");
   }
   
   // Receiving message within the infinite loop.
   while (true) {

        // ATTENTION !!!! DO NOT SEND MESSAGES IN THIS LOOP
        // It will break the devices' radio and channel will be always 
		// occupied by this device 

        // If true, wait for the messgae. 
        if (GetRXFlag()) {

           // Clear buffer
           memset(payload,0,16);
           // Read the message from the buffer payload
           Receive6LoWPAN(&senderAddr, payload, 16);
           // Print the received message in the console window
           System_printf(payload);
           System_flush();
           }          
      }
}

Int main(void) {
...
   // Data transfer initialized
   Init6LoWPAN();
...
}


#include <ti/drivers/Power.h>
#include <ti/drivers/power/PowerCC26XX.h>

static PIN_Handle powerButtonHandle;
static PIN_State powerButtonState;

// Hox! Two different configurations for the same pin. 
PIN_Config powerButtonConfig[] = {
   Board_BUTTON1 | PIN_INPUT_EN | PIN_PULLUP | PIN_IRQ_NEGEDGE,
   PIN_TERMINATE
};
PIN_Config powerButtonWakeConfig[] = {
   Board_BUTTON1 | PIN_INPUT_EN | PIN_PULLUP | PINCC26XX_WAKEUP_NEGEDGE,
   PIN_TERMINATE
};

// Handling function
Void powerFxn(PIN_Handle handle, PIN_Id pinId) {

   // Display off
   // Display_clear(displayHandle);
   // Display_close(displayHandle);
   
   // Sleep
   Task_sleep(100000 / Clock_tickPeriod);

   // And the magic ...
   PIN_close(powerButtonHandle);
   PINCC26XX_setWakeup(powerButtonWakeConfig);
   Power_shutdown(NULL,0);
}

Int main() {
   ...
   powerButtonHandle = PIN_open(&powerButtonState, powerButtonConfig);
   if(!powerButtonHandle) {
      System_abort("Error initializing power button\n");
   }
   if (PIN_registerIntCb(powerButtonHandle, &powerFxn) != 0) {
      System_abort("Error registering power button callback");
   }
   ...
}

// Careful!! IDLE is a reserved word!!
// Use some other name for this state

// Status definitions
enum state { IDLE=1, READ_SENSOR, UPDATE, NEW_MSG };

// Global variable storing a state
enum state myState = IDLE;

// Timer one per second
Void clkFxn(UArg arg0) {

	//Changing state 
    //Attention! If condition checks that status transfer is possible!!
    //Now only allowed status is from IDLE -> READ_SENSOR
    if (myState == IDLE) {
    
        // State change IDLE -> READ_SENSOR
        myState = READ_SENSOR;
    }
}

// Data transfer task
Void commTask(UArg arg0, UArg arg1) {

    while (1) {
		//Only working if is_message_waiting is activated
        //(that is, if there are messages in the buffer)
        //Only possible transition  IDLE -> NEW_MSG 
        if (is_message_waiting() == TRUE && myState == IDLE) {

            // State change IDLE -> NEW_MSG
            myState = NEW_MSG;
        
            // Status function
            handle_message();
            send_reply();			        
            
            // State change NEW_MSG -> IDLE
            myState = IDLE;
        }
    }
}

// Sensor reading
Void sensorTask(UArg arg0, UArg arg1) {

    while (1) {
    
        if (myState == READ_SENSOR) {
        
            // State function
            read_sensor_values();
            
            // State transition READ_SENSOR -> UPDATE
            myState = UPDATE;				        
        }
    
        Task_sleep(..);
    }
}

// Display usage
Void displayTask(UArg arg0, UArg arg1) {

    while (1) {
    
        if (myState == UPDATE) {
        
            // State function
            update_screen();
            
            // State transition UPDATE -> IDLE
            myState = IDLE;				        
        }
    
        Task_sleep(..);
    }
}