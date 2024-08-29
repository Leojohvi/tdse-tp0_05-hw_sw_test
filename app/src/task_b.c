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
 * @file   : task_b.c
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
#define G_TASK_B_CNT_INI	0ul

#define TASK_B_CNT_INI		0ul
#define TASK_B_CNT_MAX		50ul

#define TASK_B_DEL_INI		0ul
#define TASK_B_DEL_MAX		500ul

/********************** internal data declaration ****************************/

/********************** internal functions declaration ***********************/

/********************** internal data definition *****************************/
const char *p_task_b 		= "Task B - Non-Blocking Code";

/********************** external data declaration *****************************/
uint32_t g_task_b_cnt;

/********************** external functions definition ************************/
void task_b_init(void *parameters)
{
	/* Print out: Task Initialized */
	LOGGER_LOG("  %s is running - %s\r\n", GET_NAME(task_b_init), p_task_b);

	g_task_b_cnt = G_TASK_B_CNT_INI;

	/* Print out: Task execution counter */
	LOGGER_LOG("   %s = %d\r\n", GET_NAME(g_task_b_cnt), (int)g_task_b_cnt);
}

void task_b_update(void *parameters)
{
	/* Memory Layout of C Programs (https://www.geeksforgeeks.org/) */
	/* Storage Classes in C (https://www.geeksforgeeks.org/) */
	/* C Variables (https://www.geeksforgeeks.org/) */
	/* Static Variables in C (https://www.geeksforgeeks.org/) */
	/* Initialization of static variables in C
	 * (https://www.geeksforgeeks.org/) */
	/* Internal static variable vs. External static variable with Examples in C
	 * (https://www.geeksforgeeks.org/) */
	/*
	 * Static variables have the property of preserving their value even after
	 * they are out of their scope!
	 * Hence, a static variable preserves its previous value in its previous
	 * scope and is not initialized again in the new scope.
	 */
	#if (TEST_X == TEST_0)

	static uint32_t task_b_cnt = TASK_B_CNT_INI;

	#endif

	#if (TEST_X == TEST_1)

	static uint32_t then = TASK_B_DEL_INI;
	static uint32_t now = TASK_B_DEL_INI;

	#endif

	#if (TEST_X == TEST_2)

	/* Here Chatbot Artificial Intelligence generated code */

	/* Includes ------------------------------------------------------------------*/
	#include "main.h"

	/* Private variables ---------------------------------------------------------*/
	TIM_HandleTypeDef htim2;

	/* Private function prototypes -----------------------------------------------*/
	void SystemClock_Config(void);
	static void MX_GPIO_Init(void);
	static void MX_TIM2_Init(void);

	/* Private user code ---------------------------------------------------------*/
	volatile uint8_t ledState = 0;

	int main(void)
	{
	  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
	  HAL_Init();

	  /* Configure the system clock */
	  SystemClock_Config();

	  /* Initialize all configured peripherals */
	  MX_GPIO_Init();
	  MX_TIM2_Init();

	  /* Start Timer Interrupt */
	  HAL_TIM_Base_Start_IT(&htim2);

	  /* Infinite loop */
	  while (1)
	  {
	    // El código principal puede continuar ejecutando otras tareas sin bloquearse
	  }
	}

	/**
	  * @brief TIM2 Initialization Function
	  * @param None
	  * @retval None
	  */
	static void MX_TIM2_Init(void)
	{
	  /* Configure the TIM2 timer to trigger an interrupt every 500 ms */
	  htim2.Instance = TIM2;
	  htim2.Init.Prescaler = 7999;  // Prescaler para reducir la frecuencia del reloj
	  htim2.Init.CounterMode = TIM_COUNTERMODE_UP;
	  htim2.Init.Period = 4999;     // Cuenta hasta 5000 (500 ms)
	  htim2.Init.ClockDivision = TIM_CLOCKDIVISION_DIV1;
	  htim2.Init.AutoReloadPreload = TIM_AUTORELOAD_PRELOAD_DISABLE;
	  if (HAL_TIM_Base_Init(&htim2) != HAL_OK)
	  {
	    Error_Handler();
	  }
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

	/**
	  * @brief This function handles TIM2 global interrupt.
	  */
	void HAL_TIM_PeriodElapsedCallback(TIM_HandleTypeDef *htim)
	{
	  if (htim->Instance == TIM2)
	  {
	    // Cambia el estado del LED
	    ledState = !ledState;
	    HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, ledState ? GPIO_PIN_SET : GPIO_PIN_RESET);
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
	  * @brief Error Handler
	  * @retval None
	  */
	void Error_Handler(void)
	{
	  while (1)
	  {
	    // Error Handling
	  }
	}


	#endif

	/* Update Task B Counter */
	g_task_b_cnt++;

	/* Print out: Application Update */
	LOGGER_LOG("  %s is running - %s\r\n", GET_NAME(task_b_update), p_task_b);

	/* Print out: Task Updated and execution counter */
	LOGGER_LOG("   %s = %d\r\n", GET_NAME(g_task_b_cnt), (int)g_task_b_cnt);

	/* Blocking and Non-Blocking in Node.js (https://www.geeksforgeeks.org/) */
	/*
	 * Non-Blocking: It refers to the program that does not block the
	 * execution of further operations.
	 * Non-Blocking methods are executed asynchronously.
	 * Asynchronously means that the program may not necessarily execute line
	 * by line.
	 * The program calls the function and move to the next operation and does
	 * not wait for it to return.
	 */
	#if (TEST_X == TEST_0)

	if (task_b_cnt < TASK_B_CNT_MAX)
		task_b_cnt++;
	else
		task_b_cnt = TASK_B_CNT_INI;

	#endif

	#if (TEST_X == TEST_1)

	/* Check the current tick */
	now = HAL_GetTick();
	if ((now - then) >= TASK_B_DEL_MAX)
	{
		/* Only if the current tick is TASK_B_DEL_MAX mS after the last */
		/* Reset then = now */
		then = now;
	}

	#endif

	#if (TEST_X == TEST_2)

	/* Here Chatbot Artificial Intelligence generated code */

	#endif
}

/********************** end of file ******************************************/
