/**
  ******************************************************************************
  * @file    stm32fxxx_it.c
  * @author  MCD Application Team
  * @version V2.1.0
  * @date    19-March-2012
  * @brief   This file includes the interrupt handlers for the application
  ******************************************************************************
  * @attention
  *
  * <h2><center>&copy; COPYRIGHT 2012 STMicroelectronics</center></h2>
  *
  * Licensed under MCD-ST Liberty SW License Agreement V2, (the "License");
  * You may not use this file except in compliance with the License.
  * You may obtain a copy of the License at:
  *
  *        http://www.st.com/software_license_agreement_liberty_v2
  *
  * Unless required by applicable law or agreed to in writing, software 
  * distributed under the License is distributed on an "AS IS" BASIS, 
  * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
  * See the License for the specific language governing permissions and
  * limitations under the License.
  *
  ******************************************************************************
  */

/* Includes ------------------------------------------------------------------*/
//#include "usb_bsp.h"
//#include "usb_hcd_int.h"
//#include "usbh_core.h"
#include "stm32fxxx_it.h"
#include "stm32f10x_usart.h"
#include "stm32f10x_gpio.h"
#include "string.h"
#include "new_var.h"

/* Private typedef -----------------------------------------------------------*/
/* Private define ------------------------------------------------------------*/
/* Private macro -------------------------------------------------------------*/
/* Private variables ---------------------------------------------------------*/

//extern USB_OTG_CORE_HANDLE          USB_OTG_Core;
//extern USBH_HOST                    USB_Host;
 
/* Private function prototypes -----------------------------------------------*/
//extern void USB_OTG_BSP_TimerIRQ (void);

/* Private functions ---------------------------------------------------------*/

/******************************************************************************/
/*             Cortex-M Processor Exceptions Handlers                         */
/******************************************************************************/
/**
  * @brief  NMI_Handler
  *         This function handles NMI exception.
  * @param  None
  * @retval None
  */
void NMI_Handler(void)
{
	return;
}

/**
  * @brief  HardFault_Handler
  *         This function handles Hard Fault exception.
  * @param  None
  * @retval None
  */
void HardFault_Handler(void)
{
  /* Go to infinite loop when Hard Fault exception occurs */
  //while (1)
  {
		return;
  }
}

/**
  * @brief  MemManage_Handler
  *         This function handles Memory Manage exception.
  * @param  None
  * @retval None
  */
void MemManage_Handler(void)
{
  /* Go to infinite loop when Memory Manage exception occurs */
  //while (1)
  {
		return;
  }
}

/**
  * @brief  BusFault_Handler
  *         This function handles Bus Fault exception.
  * @param  None
  * @retval None
  */
void BusFault_Handler(void)
{
  /* Go to infinite loop when Bus Fault exception occurs */
   //while (1)
  {
		return;
  }
}

/**
  * @brief  UsageFault_Handler
  *         This function handles Usage Fault exception.
  * @param  None
  * @retval None
  */
void UsageFault_Handler(void)
{
  /* Go to infinite loop when Usage Fault exception occurs */
  //while (1)
  {
		return;
  }
}

/**
  * @brief  SVC_Handler
  *         This function handles SVCall exception.
  * @param  None
  * @retval None
  */
void SVC_Handler(void)
{
	return;
}

/**
  * @brief  DebugMon_Handler
  *         This function handles Debug Monitor exception.
  * @param  None
  * @retval None
  */
void DebugMon_Handler(void)
{
	return;
}


/**
  * @brief  PendSV_Handler
  *         This function handles PendSVC exception.
  * @param  None
  * @retval None
  */
void PendSV_Handler(void)
{
	return;
}

////////////////////////////////
////////////////////////////////////////////////////////    
void uart3_tx(unsigned char *p)
{   
	unsigned int new1;
	//unsigned int int1;
	
	Uart1_rx_buff_index=0;
	long4=strlen(p);
	for(new1=0;new1<=long4;new1++){	
		if(*p==0){
			if(message_flag){USART3->DR=26;message_flag=0;}//26 for TCP/IP
			else{USART3->DR = 13;	}						//13 for SMS and other AT commands 
			while(USART_GetFlagStatus(USART3, USART_FLAG_TXE) == RESET);
			return;
		}
		
		//int1=*p;
		USART3->DR = *p;//(int1 & 0x1FF);
		while(USART_GetFlagStatus(USART3, USART_FLAG_TXE) == RESET)	{
			//implement time out//check
		}
		p++;
	}	
	//delay(200);
}
////////////////////////////////////////////////////
void send_uart3(unsigned char p)//printer
{   
	unsigned int int1;
	USART3->DR =p;
	while(USART_GetFlagStatus(USART3, USART_FLAG_TXE) == RESET);
}

void PRINTER_UART_SEND(unsigned char *p)
{   
	unsigned char new1;
	Uart1_rx_buff_index=0;
	
	for(new1=0;new1<150;new1++){	
		if(*p==0){
			if(message_flag)
			{
				message_flag=0;
				UART4->DR=13;
				while(USART_GetFlagStatus(UART4, USART_FLAG_TXE) == RESET);

				UART4->DR=10;
				while(USART_GetFlagStatus(UART4, USART_FLAG_TXE) == RESET);
				
				return;
			}					
			else
			{
				return;
			}			
		}
		
		UART4->DR = *p;
		while(USART_GetFlagStatus(UART4, USART_FLAG_TXE) == RESET)	{
		}
		p++;
	}	
}
////////////////////////////////////////////////////////    
void uart1_tx(unsigned char* p)
{   
	unsigned char new1;
	unsigned int int1;
	
	
}
///////////////////////////////////////////////////////////////////////////
void uart2_tx(unsigned char* p)
{   
	unsigned char new1;
	unsigned int int1;
	
	
}


void USART2_IRQHandler(void)
{
	if(USART_GetITStatus(USART2, USART_IT_RXNE) != RESET)
	{
		Uart1_rx_data =(USART_ReceiveData(USART2) & 0xFF);

			if(Uart1_rx_data==10 || Uart1_rx_data==13)
			{
				Uart2_flag=1;
				if(Uart1_rx_index!=0)Uart1_rx_buff[Uart1_rx_index]=0;
				Uart1_rx_index=0;
				return;
			}
			if(Uart1_rx_index>=10){Uart1_rx_index=0;}
			Uart1_rx_buff[Uart1_rx_index++]=Uart1_rx_data;	
	}		
		
}




////////////////////////////////USART3 HANDLER////////////////////

void USART3_IRQHandler(void)
{
	unsigned char ii;
	
	if(USART_GetITStatus(USART3, USART_IT_RXNE) != RESET)
	{
		Uart3_rx_data =(USART_ReceiveData(USART3) & 0x7F);
		
			if(Uart3_rx_data==10 || Uart3_rx_data==13)
			{
				Uart3_flag=1;
				if(Uart3_rx_index!=0)Uart3_rx_buff[Uart3_rx_index]=0;
				Uart3_rx_index=0;
				return;
			}
			if(Uart3_rx_index>=17){Uart3_rx_index=0;}
			Uart3_rx_buff[Uart3_rx_index++]=Uart3_rx_data;
	}	
	
}
#if 0
//$GPGGA,015540.000,3150.68378,N,11711.93139,E,1,17,0.6,0051.6,M,0.0,M,,*58<CR><LF>
//$GPRMC,013732.000,A,3150.7238,N,11711.7278,E,0.00,0.00,220413,,,A*68<CR><LF>
///////////////////UART4 HANDLER////////////////////////////////////////
void UART4_IRQHandler(void)
{
	if(USART_GetITStatus(UART4, USART_IT_RXNE) != RESET)
	{
		Uart3_rx_data =(USART_ReceiveData(UART4) & 0xFF);
		
		Uart1_rx_buff[Uart1_rx_buff_index++]=Uart3_rx_data;//check buff size can be reduced
		if(Uart1_rx_buff_index>99){Uart1_rx_buff_index=0;}
	}		
		
	
}


///////////USART5 HANDLER for  ACTIVE RF READER///////////
void UART5_IRQHandler(void)
{
	unsigned char ii;
	
	if(USART_GetITStatus(UART5, USART_IT_RXNE) != RESET)
	{
		Uart3_rx_data =(USART_ReceiveData(UART4) & 0x7F);
		
			if(Uart3_rx_data==10 || Uart3_rx_data==13)
			{
				Uart3_flag=1;
				if(Uart3_rx_index!=0)Uart3_rx_buff[Uart3_rx_index]=0;
				Uart3_rx_index=0;
				return;
			}
			if(Uart3_rx_index>=18){Uart3_rx_index=0;}
			Uart3_rx_buff[Uart3_rx_index++]=Uart3_rx_data;
	}		
	
}
#endif
///////////////////////////////////////////////////////
void SysTick_Handler(void)
{	
	unsigned char i,j;
	delay_timer++;
	mem_timer++;
	
	
	
}

#if 0
/////////////////////////////

/**
  * @brief  EXTI1_IRQHandler
  *         This function handles External line 1 interrupt request.
  * @param  None
  * @retval None
  */
void EXTI9_5_IRQHandler(void)
{
  if(EXTI_GetITStatus(EXTI_Line9) != RESET)
  {
      USB_Host.usr_cb->OverCurrentDetected();
      EXTI_ClearITPendingBit(EXTI_Line9);
  }
}
/**
  * @brief  TIM2_IRQHandler
  *         This function handles Timer2 Handler.
  * @param  None
  * @retval None
  */
void TIM2_IRQHandler(void)
{
  USB_OTG_BSP_TimerIRQ();
}


/**
  * @brief  OTG_FS_IRQHandler
  *          This function handles USB-On-The-Go FS global interrupt request.
  *          requests.
  * @param  None
  * @retval None
  */
#ifdef USE_USB_OTG_FS  
void OTG_FS_IRQHandler(void)
#else
void OTG_HS_IRQHandler(void)
#endif
{
  USBH_OTG_ISR_Handler(&USB_OTG_Core);
}
#endif
/************************ (C) COPYRIGHT STMicroelectronics *****END OF FILE****/
