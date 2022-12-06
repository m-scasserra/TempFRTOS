/* Copyright 2022, Juan Manuel Cruz.
 * All rights reserved.
 *
 * This file is part of Project => freertos_app_Example001
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright notice,
 *    this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright notice,
 *    this list of conditions and the following disclaimer in the documentation
 *    and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from this
 *    software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS "AS IS"
 * AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT LIMITED TO, THE
 * IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS FOR A PARTICULAR PURPOSE
 * ARE DISCLAIMED. IN NO EVENT SHALL THE COPYRIGHT HOLDER OR CONTRIBUTORS BE
 * LIABLE FOR ANY DIRECT, INDIRECT, INCIDENTAL, SPECIAL, EXEMPLARY, OR
 * CONSEQUENTIAL DAMAGES (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF
 * SUBSTITUTE GOODS OR SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS
 * INTERRUPTION) HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN
 * CONTRACT, STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE)
 * ARISING IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 */

/*--------------------------------------------------------------------*-

    app_Resources.h (Released 2022-06)

  --------------------------------------------------------------------

    This is the Tasks Header file.

-*--------------------------------------------------------------------*/


#ifndef __APP_RESOURCES_H
#define __APP_RESOURCES_H

#ifdef __cplusplus
 extern "C" {
#endif

// ------ inclusions ---------------------------------------------------

// ------ macros -------------------------------------------------------

// ------ typedef ------------------------------------------------------

// ------ external data declaration ------------------------------------
/* Declare a variable of type xSemaphoreHandle.  This is used to reference the
 * semaphore that is used to synchronize a task with other task. */
extern xSemaphoreHandle xBinarySemaphoreEntry;
extern xSemaphoreHandle xBinarySemaphoreExit;
extern xSemaphoreHandle xBinarySemaphoreContinue;
extern xSemaphoreHandle xCountingSemaphoreEntry;
extern xSemaphoreHandle xCountingSemaphoreExit;
extern xSemaphoreHandle xBinarySemaphoreStop;

extern xQueueHandle colaEntrada;

/* Declare a variable of type xSemaphoreHandle.  This is used to reference the
 * mutex type semaphore that is used to ensure mutual exclusive access to...*/
extern xSemaphoreHandle xMutexCola;
extern xSemaphoreHandle xMutexContador;

/* Used to hold the handle of TaskTest. */
extern xTaskHandle vTaskAHandle;
extern xTaskHandle vTaskBHandle;
extern xTaskHandle vTaskTestHandle;

/* Task A & B Counter	*/
#define lTasksCntMAX	3
extern uint32_t	lTasksCnt;

// ------ external functions declaration -------------------------------

#ifdef __cplusplus
}
#endif

#endif /* __APP_RESOURCES_H */

/*------------------------------------------------------------------*-
  ---- END OF FILE -------------------------------------------------
-*------------------------------------------------------------------*/
