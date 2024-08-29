/*
 * Copyright (c) 2023 Juan Manuel Cruz <jcruz@fi.uba.ar> <jcruz@frba.utn.edu.ar>.
 * All rights reserved.
 *
 * Redistribution and use in source and binary forms, with or without
 * modification, are permitted provided that the following conditions are met:
 *
 * 1. Redistributions of source code must retain the above copyright
 *    notice, this list of conditions and the following disclaimer.
 *
 * 2. Redistributions in binary form must reproduce the above copyright
 *    notice, this list of conditions and the following disclaimer in the
 *    documentation and/or other materials provided with the distribution.
 *
 * 3. Neither the name of the copyright holder nor the names of its
 *    contributors may be used to endorse or promote products derived from
 *    this software without specific prior written permission.
 *
 * THIS SOFTWARE IS PROVIDED BY THE COPYRIGHT HOLDERS AND CONTRIBUTORS
 * "AS IS" AND ANY EXPRESS OR IMPLIED WARRANTIES, INCLUDING, BUT NOT
 * LIMITED TO, THE IMPLIED WARRANTIES OF MERCHANTABILITY AND FITNESS
 * FOR A PARTICULAR PURPOSE ARE DISCLAIMED. IN NO EVENT SHALL THE
 * COPYRIGHT HOLDER OR CONTRIBUTORS BE LIABLE FOR ANY DIRECT, INDIRECT,
 * INCIDENTAL, SPECIAL, EXEMPLARY, OR CONSEQUENTIAL DAMAGES
 * (INCLUDING, BUT NOT LIMITED TO, PROCUREMENT OF SUBSTITUTE GOODS OR
 * SERVICES; LOSS OF USE, DATA, OR PROFITS; OR BUSINESS INTERRUPTION)
 * HOWEVER CAUSED AND ON ANY THEORY OF LIABILITY, WHETHER IN CONTRACT,
 * STRICT LIABILITY, OR TORT (INCLUDING NEGLIGENCE OR OTHERWISE) ARISING
 * IN ANY WAY OUT OF THE USE OF THIS SOFTWARE, EVEN IF ADVISED OF THE
 * POSSIBILITY OF SUCH DAMAGE.
 *
 * @file   : task_a.c
 * @date   : Set 26, 2023
 * @author : Juan Manuel Cruz <jcruz@fi.uba.ar> <jcruz@frba.utn.edu.ar>
 * @version	v1.0.0
 */

/********************** inclusions *******************************************/
/* Project includes. */
#include "main.h"

/* Demo includes. */
#include "logger.h"
#include "dwt.h"

/* Application & Tasks includes. */
#include "board.h"
#include "app.h"

/********************** macros and definitions *******************************/
#define G_TASK_A_CNT_INI	0ul

#define TASK_A_CNT_INI		0ul
#define TASK_A_CNT_MAX		100000ul

#define TASK_A_DEL_INI		0ul
#define TASK_A_DEL_MAX		20ul

/********************** internal data declaration ****************************/

/********************** internal functions declaration ***********************/

/********************** internal data definition *****************************/
const char *p_task_a 		= "Task A - Blocking Code";

/********************** external data declaration *****************************/
uint32_t g_task_a_cnt;

/********************** external functions definition ************************/
void task_a_init(void *parameters)
{
	/* Print out: Task Initialized */
	LOGGER_LOG("  %s is running - %s\r\n", GET_NAME(task_a_init), p_task_a);

	g_task_a_cnt = G_TASK_A_CNT_INI;

	/* Print out: Task execution counter */
	LOGGER_LOG("   %s = %d\r\n", GET_NAME(g_task_a_cnt), (int)g_task_a_cnt);
}

void task_a_update(void *parameters)
{
	/* Memory Layout of C Programs (https://www.geeksforgeeks.org/) */
	/* Storage Classes in C (https://www.geeksforgeeks.org/) */
	/* C Variables (https://www.geeksforgeeks.org/) */
	/* Local Variable in C (https://www.geeksforgeeks.org/) */
	/*
	 * A variable declared within a function or a block of code is called a
	 * local variable. Local variables are frequently used to temporarily
	 * store data in a defined scope where they can be accessed and
	 * manipulated.
	 */
	#if (TEST_X == TEST_0)

	uint32_t task_a_cnt = TASK_A_CNT_INI;

	#endif

	#if (TEST_X == TEST_1)

	#endif

	#if (TEST_X == TEST_2)

	/* Here Chatbot Artificial Intelligence generated code */

	#endif

	/* Update Task A Counter */
	g_task_a_cnt++;

	/* Print out: Application Update */
	LOGGER_LOG("  %s is running - %s\r\n", GET_NAME(task_a_update), p_task_a);

	/* Print out: Task execution counter */
	LOGGER_LOG("   %s = %d\r\n", GET_NAME(g_task_a_cnt), (int)g_task_a_cnt);

	/* Blocking and Non-Blocking in Node.js (https://www.geeksforgeeks.org/) */
	/*
	 * Blocking: It refers to the blocking of further operation until the
	 * current operation finishes.
	 * Blocking methods are executed synchronously.
	 * Synchronously means that the program is executed line by line.
	 * The program waits until the called function or the operation
	 * returns.
	 * */
	#if (TEST_X == TEST_0)

	for (task_a_cnt = TASK_A_CNT_INI; task_a_cnt < TASK_A_CNT_MAX; task_a_cnt++);

	#endif

	#if (TEST_X == TEST_1)

	/* Wait for TASK_A_DEL_MAX mS */
	HAL_Delay(TASK_A_DEL_MAX);

	#endif

	#if (TEST_X == TEST_2)

	/* Here Chatbot Artificial Intelligence generated code */
	/* Includes ------------------------------------------------------------------*/
	#include "main.h"

	/* Private function prototypes -----------------------------------------------*/
	void SystemClock_Config(void);
	static void MX_GPIO_Init(void);

	int main(void)
	{
	  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
	  HAL_Init();

	  /* Configure the system clock */
	  SystemClock_Config();

	  /* Initialize all configured peripherals */
	  MX_GPIO_Init();

	  /* Infinite loop */
	  while (1)
	  {
	    // Encender el LED
	    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_SET);
	    // Retardo bloqueante de 500ms
	    HAL_Delay(500);

	    // Apagar el LED
	    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);
	    // Retardo bloqueante de 500ms
	    HAL_Delay(500);
	  }
	}

	/**
	  * @brief System Clock Configuration
	  * @retval None
	  */
	void SystemClock_Config(void)
	{
	  // Configuración del reloj del sistema, puede ser ajustada según tu necesidad
	}

	/**
	  * @brief GPIO Initialization Function
	  * @param None
	  * @retval None
	  */
	static void MX_GPIO_Init(void)
	{
	  GPIO_InitTypeDef GPIO_InitStruct = {0};

	  /* GPIO Ports Clock Enable */
	  __HAL_RCC_GPIOA_CLK_ENABLE();

	  /*Configure GPIO pin Output Level */
	  HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, GPIO_PIN_RESET);

	  /*Configure GPIO pin : PA5 */
	  GPIO_InitStruct.Pin = GPIO_PIN_5;
	  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
	  GPIO_InitStruct.Pull = GPIO_NOPULL;
	  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
	  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);
	}


	#endif
}

/********************** end of file ******************************************/
