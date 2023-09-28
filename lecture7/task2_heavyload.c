/*
 * task2_differentsleeps.c
 *
 *  Created on: 25 Sep 2023
 *      Author: ivan
 */


/* XDCtools Header files */
#include <xdc/std.h>
#include <xdc/runtime/System.h>

/* BIOS Header files */
#include <ti/sysbios/BIOS.h>
#include <ti/sysbios/knl/Clock.h>
#include <ti/sysbios/knl/Task.h>

/* TI-RTOS Header files */
#include <ti/drivers/PIN.h>

/* Board Header files */
#include "Board.h"

// Taski tarvitsee oman sisäisen pinomuistin
#define STACKSIZE 512
Char myTaskStack[STACKSIZE];
Char myTask2Stack[STACKSIZE];

// Taskin toteutusfunktio
Void myTaskFxn(UArg arg0, UArg arg1) {

    // Taskin ikuinen elämä
       while (1) {
           uint32_t i, j;
           volatile double result;
           // Simulate heavy computation
           for  (i = 0; i < 1000; i++) {
               for (j = 0; j < 100; j++) {
                   result = (double)i / (j + 1);  // Some arbitrary computation
               }
            }
           System_printf("This is task %ld\n", arg0);
           System_flush();
           // Kohteliaasti nukkumaan hetkeksi
           Task_sleep(500000L / Clock_tickPeriod);
       }
}

int main(void) {

   // Taskeihin liittyviä tietorakenteita
   Task_Params myTaskParams;
   Task_Handle myTaskHandle;
   Task_Params myTask2Params;
   Task_Handle myTask2Handle;

   // Laitteen alustus
   Board_initGeneral();

   // Alustetaan taskin suoritusparametrit
   Task_Params_init(&myTaskParams);
   Task_Params_init(&myTask2Params);
   // Osoitetaan taskille sen pinomuisti
   myTaskParams.stackSize = STACKSIZE;
   myTaskParams.stack = &myTaskStack;
   myTask2Params.stackSize = STACKSIZE;
   myTask2Params.stack = &myTask2Stack;
   // Asetetaan taskin prioriteetti
   myTaskParams.priority = 2;
   myTask2Params.priority = 1;
   myTaskParams.arg0 = 1;
   myTask2Params.arg0 = 2;


   // Luodaan taski
   myTaskHandle = Task_create((Task_FuncPtr)myTaskFxn, &myTaskParams, NULL);
   myTask2Handle = Task_create((Task_FuncPtr)myTaskFxn, &myTask2Params, NULL);
   if (myTaskHandle == NULL || myTask2Handle == NULL) {
      System_abort("Task create failed");
   }

    // Terveisiä konsolille
    System_printf("Hello world!\n");
    System_flush();

   // Ohjelma käynnistyy
   BIOS_start();

   return (0);
}
