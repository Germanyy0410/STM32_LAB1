/* USER CODE BEGIN Header */
/**
  ******************************************************************************
  * @file           : main.c
  * @brief          : Main program body
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; Copyright (c) 2023 STMicroelectronics.
  * All rights reserved.</center></h2>
  *
  * This software component is licensed by ST under BSD 3-Clause license,
  * the "License"; You may not use this file except in compliance with the
  * License. You may obtain a copy of the License at:
  *                        opensource.org/licenses/BSD-3-Clause
  *
  ******************************************************************************
  */
/* USER CODE END Header */
/* Includes ------------------------------------------------------------------*/
#include "main.h"

/* Private includes ----------------------------------------------------------*/
/* USER CODE BEGIN Includes */

/* USER CODE END Includes */

/* Private typedef -----------------------------------------------------------*/
/* USER CODE BEGIN PTD */

/* USER CODE END PTD */

/* Private define ------------------------------------------------------------*/
/* USER CODE BEGIN PD */
/* USER CODE END PD */

/* Private macro -------------------------------------------------------------*/
/* USER CODE BEGIN PM */

/* USER CODE END PM */

/* Private variables ---------------------------------------------------------*/

/* USER CODE BEGIN PV */

/* USER CODE END PV */

/* Private function prototypes -----------------------------------------------*/
void SystemClock_Config(void);
static void MX_GPIO_Init(void);
/* USER CODE BEGIN PFP */

/* USER CODE END PFP */

/* Private user code ---------------------------------------------------------*/
/* USER CODE BEGIN 0 */

/* USER CODE END 0 */

/**
  * @brief  The application entry point.
  * @retval int
  */

void display7SEG_1(int counter)
{
	if (counter == 0)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1);
	}

	if (counter == 1)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1);
	}

	if (counter == 2)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
	}

	if (counter == 3)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
	}

	if (counter == 4)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
	}

	if (counter == 5)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
	}

	if (counter == 6)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
	}

	if (counter == 7)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 1);
	}

	if (counter == 8)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
	}

	if (counter == 9)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_1, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_2, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_3, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_4, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_5, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_6, 0);
	}
}

void display7SEG_2(int counter)
{
	if (counter == 0)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 1);
	}

	if (counter == 1)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 1);
	}

	if (counter == 2)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 0);
	}

	if (counter == 3)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 0);
	}

	if (counter == 4)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 0);
	}

	if (counter == 5)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 0);
	}

	if (counter == 6)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 0);
	}

	if (counter == 7)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 1);
	}

	if (counter == 8)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 0);
	}

	if (counter == 9)
	{
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_7, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_8, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_9, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_10, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_11, 1);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_12, 0);
		HAL_GPIO_WritePin(GPIOB, GPIO_PIN_13, 0);
	}
}

int main(void)
{
  /* USER CODE BEGIN 1 */

  /* USER CODE END 1 */

  /* MCU Configuration--------------------------------------------------------*/

  /* Reset of all peripherals, Initializes the Flash interface and the Systick. */
  HAL_Init();

  /* USER CODE BEGIN Init */

  /* USER CODE END Init */

  /* Configure the system clock */
  SystemClock_Config();

  /* USER CODE BEGIN SysInit */

  /* USER CODE END SysInit */

  /* Initialize all configured peripherals */
  MX_GPIO_Init();
  /* USER CODE BEGIN 2 */

  /* USER CODE END 2 */

  /* Infinite loop */
  /* USER CODE BEGIN WHILE */
	int counter_1 = 0;
	int counter_2 = 0;
	int printout_1 = 6;
	int printout_2 = 3;

	int red_signal_1 = 1;
	int red_signal_2 = 0;
	int red_delay_1 = 8;
	int red_delay_2 = 8;

	int green_signal_1 = 0;
	int green_signal_2 = 1;
	int green_delay_1 = 5;
	int green_delay_2 = 5;

	int yellow_signal_1 = 0;
	int yellow_signal_2 = 0;
	int yellow_delay_1 = 3;
	int yellow_delay_2 = 3;

	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_0, 1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_1, 1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_2, 1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_3, 1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_4, 1);
	HAL_GPIO_WritePin(GPIOA, GPIO_PIN_5, 1);

	while (1)
	{

		if (red_signal_1 == 1) {
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, 1);
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, 0);
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, 0);
			red_delay_1 -= 1;

			if (red_delay_1 == 0) {
				red_signal_1 = 0;
				green_signal_1 = 1;
				red_delay_1 = 8;
			}
		}

		if (green_signal_1 == 1) {
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, 0);
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, 1);
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, 0);
			green_delay_1 -= 1;

			if (green_delay_1 == 0) {
				green_signal_1 = 0;
				yellow_signal_1 = 1;
				green_delay_1 = 5;
			}
		}

		if (yellow_signal_1 == 1) {
			HAL_GPIO_WritePin(LED_RED_1_GPIO_Port, LED_RED_1_Pin, 0);
			HAL_GPIO_WritePin(LED_GREEN_1_GPIO_Port, LED_GREEN_1_Pin, 0);
			HAL_GPIO_WritePin(LED_YELLOW_1_GPIO_Port, LED_YELLOW_1_Pin, 1);
			yellow_delay_1 -= 1;

			if (yellow_delay_1 == 0) {
				yellow_signal_1 = 0;
				red_signal_1 = 1;
				yellow_delay_1 = 3;
			}
		}

		//z

		if (red_signal_2 == 1) {
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, 1);
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, 0);
			HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, 0);
			red_delay_2 -= 1;

			if (red_delay_2 == 0) {
				red_signal_2 = 0;
				green_signal_2 = 1;
				red_delay_2 = 8;
			}
		}

		if (green_signal_2 == 1) {
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, 0);
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, 1);
			HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, 0);
			green_delay_2 -= 1;

			if (green_delay_2 == 0) {
				green_signal_2 = 0;
				yellow_signal_2 = 1;
				green_delay_2 = 5;
			}
		}

		if (yellow_signal_2 == 1) {
			HAL_GPIO_WritePin(LED_RED_2_GPIO_Port, LED_RED_2_Pin, 0);
			HAL_GPIO_WritePin(LED_GREEN_2_GPIO_Port, LED_GREEN_2_Pin, 0);
			HAL_GPIO_WritePin(LED_YELLOW_2_GPIO_Port, LED_YELLOW_2_Pin, 1);
			yellow_delay_2 -= 1;

			if (yellow_delay_2 == 0) {
				yellow_signal_2 = 0;
				red_signal_2 = 1;
				yellow_delay_2 = 3;
			}
		}

		display7SEG_1(printout_1);
		printout_1--;
		if (counter_1 == 6) {
			printout_1 = 3;
		} else if (counter_1 == 10) {
			printout_1 = 2;
		} else if (counter_1 == 13) {
			printout_1 = 6;
		}
		counter_1++;
		if (counter_1 >= 14) {
			counter_1 = 0;
		}

		display7SEG_2(printout_2);
		printout_2--;
		if (counter_2 == 3) {
			printout_2 = 2;
		} else if (counter_2 == 6) {
			printout_2 = 6;
		} else if (counter_2 == 13) {
			printout_2 = 3;
		}
		counter_2++;
		if (counter_2 >= 14) {
			counter_2 = 0;
		}

		HAL_Delay(1000);
	}
  /* USER CODE END 3 */
}

/**
  * @brief System Clock Configuration
  * @retval None
  */
void SystemClock_Config(void)
{
  RCC_OscInitTypeDef RCC_OscInitStruct = {0};
  RCC_ClkInitTypeDef RCC_ClkInitStruct = {0};

  /** Initializes the RCC Oscillators according to the specified parameters
  * in the RCC_OscInitTypeDef structure.
  */
  RCC_OscInitStruct.OscillatorType = RCC_OSCILLATORTYPE_HSI;
  RCC_OscInitStruct.HSIState = RCC_HSI_ON;
  RCC_OscInitStruct.HSICalibrationValue = RCC_HSICALIBRATION_DEFAULT;
  RCC_OscInitStruct.PLL.PLLState = RCC_PLL_NONE;
  if (HAL_RCC_OscConfig(&RCC_OscInitStruct) != HAL_OK)
  {
    Error_Handler();
  }
  /** Initializes the CPU, AHB and APB buses clocks
  */
  RCC_ClkInitStruct.ClockType = RCC_CLOCKTYPE_HCLK|RCC_CLOCKTYPE_SYSCLK
                              |RCC_CLOCKTYPE_PCLK1|RCC_CLOCKTYPE_PCLK2;
  RCC_ClkInitStruct.SYSCLKSource = RCC_SYSCLKSOURCE_HSI;
  RCC_ClkInitStruct.AHBCLKDivider = RCC_SYSCLK_DIV1;
  RCC_ClkInitStruct.APB1CLKDivider = RCC_HCLK_DIV1;
  RCC_ClkInitStruct.APB2CLKDivider = RCC_HCLK_DIV1;

  if (HAL_RCC_ClockConfig(&RCC_ClkInitStruct, FLASH_LATENCY_0) != HAL_OK)
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
  __HAL_RCC_GPIOB_CLK_ENABLE();

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOA, LED_RED_1_Pin|LED_YELLOW_1_Pin|LED_GREEN_1_Pin|LED_RED_2_Pin
                          |LED_YELLOW_2_Pin|LED_GREEN_2_Pin, GPIO_PIN_RESET);

  /*Configure GPIO pin Output Level */
  HAL_GPIO_WritePin(GPIOB, GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_10
                          |GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_3
                          |GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7
                          |GPIO_PIN_8|GPIO_PIN_9, GPIO_PIN_RESET);

  /*Configure GPIO pins : LED_RED_1_Pin LED_YELLOW_1_Pin LED_GREEN_1_Pin LED_RED_2_Pin
                           LED_YELLOW_2_Pin LED_GREEN_2_Pin */
  GPIO_InitStruct.Pin = LED_RED_1_Pin|LED_YELLOW_1_Pin|LED_GREEN_1_Pin|LED_RED_2_Pin
                          |LED_YELLOW_2_Pin|LED_GREEN_2_Pin;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOA, &GPIO_InitStruct);

  /*Configure GPIO pins : PB0 PB1 PB2 PB10
                           PB11 PB12 PB13 PB3
                           PB4 PB5 PB6 PB7
                           PB8 PB9 */
  GPIO_InitStruct.Pin = GPIO_PIN_0|GPIO_PIN_1|GPIO_PIN_2|GPIO_PIN_10
                          |GPIO_PIN_11|GPIO_PIN_12|GPIO_PIN_13|GPIO_PIN_3
                          |GPIO_PIN_4|GPIO_PIN_5|GPIO_PIN_6|GPIO_PIN_7
                          |GPIO_PIN_8|GPIO_PIN_9;
  GPIO_InitStruct.Mode = GPIO_MODE_OUTPUT_PP;
  GPIO_InitStruct.Pull = GPIO_NOPULL;
  GPIO_InitStruct.Speed = GPIO_SPEED_FREQ_LOW;
  HAL_GPIO_Init(GPIOB, &GPIO_InitStruct);

}

/* USER CODE BEGIN 4 */

/* USER CODE END 4 */

/**
  * @brief  This function is executed in case of error occurrence.
  * @retval None
  */
void Error_Handler(void)
{
  /* USER CODE BEGIN Error_Handler_Debug */
  /* User can add his own implementation to report the HAL error return state */
  __disable_irq();
  while (1)
  {
  }
  /* USER CODE END Error_Handler_Debug */
}

#ifdef  USE_FULL_ASSERT
/**
  * @brief  Reports the name of the source file and the source line number
  *         where the assert_param error has occurred.
  * @param  file: pointer to the source file name
  * @param  line: assert_param error line source number
  * @retval None
  */
void assert_failed(uint8_t *file, uint32_t line)
{
  /* USER CODE BEGIN 6 */
  /* User can add his own implementation to report the file name and line number,
     ex: printf("Wrong parameters value: file %s on line %d\r\n", file, line) */
  /* USER CODE END 6 */
}
#endif /* USE_FULL_ASSERT */

/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
