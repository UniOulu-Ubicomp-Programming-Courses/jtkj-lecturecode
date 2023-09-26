/*
 * task1.c
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

// Taskin toteutusfunktio
Void myTaskFxn(UArg arg0, UArg arg1) {

   // Taskin ikuinen elämä
   while (1) {
      System_printf("My arguments are %ld ja %ld\n", arg0, arg1);
      System_flush();

      // Kohteliaasti nukkumaan hetkeksi
      Task_sleep(1000000L / Clock_tickPeriod);
   }
}

int main(void) {

   // Taskeihin liittyviä tietorakenteita
   Task_Params myTaskParams;
   Task_Handle myTaskHandle;

   // Laitteen alustus
   Board_initGeneral();

   // Alustetaan taskin suoritusparametrit
   Task_Params_init(&myTaskParams);
   // Osoitetaan taskille sen pinomuisti
   myTaskParams.stackSize = STACKSIZE;
   myTaskParams.stack = &myTaskStack;
   // Asetetaan taskin prioriteetti
   myTaskParams.priority = 2;
   // Argumentit taskille (vain esimerkin vuoksi)
   myTaskParams.arg0 = 127; // Argumentti 1
   myTaskParams.arg1 = 0xFFFF; // Argumentti 2

   // Luodaan taski
   myTaskHandle = Task_create((Task_FuncPtr)myTaskFxn, &myTaskParams, NULL);
   if (myTaskHandle == NULL) {
      System_abort("Task create failed");
   }

    // Terveisiä konsolille
    System_printf("Hello world!\n");
    System_flush();

   // Ohjelma käynnistyy
   BIOS_start();

   return (0);
}
