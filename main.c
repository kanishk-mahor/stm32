/**
  ******************************************************************************
  * @file    SARAI_PROJECT_NFC_MAGNETIC_DOOR_ACCESS/main.c 
  * @author  AKHILESH TIWARY(SMARTHINK TECHNOLOGY PVT LTD)
  * @version V1.0.1
  * @date    14-April-2018
  * @brief   Main program body.
  ******************************************************************************
  SARAI APPLICATION
  -----------------
  1.	GET THE NFC TAG DATA WITH VALIDITY AND TIMESTAMP IN FORMAT OF "#D4797FCF05140418\n" CONTAINS CARD ID
  	/NO.OF DAAYS F
		OR VALIDITY OF CARD/DATE OF ISSUANCE OF CARD
  2.	SAVE THE NFC DETAILS TO MEMORY LOCATION START FROM 0-2047 MEMORY SECTOR

  NOW IT'S TIME FOR THE READING THE NFC TAG AND DO THE ACTION ON THE MAGNETIC LOCK
  1.	READ THE NFC CARD ID
  2.	CHECK THE CARD IN MEMORY
  3.	CHECK FOR THE VALIDITY OF CARD WITH SAVED DATA OF DATE OF ISSUANCE
  4.	ONCE GET VALIDATED SEND A FRAME TO PC AS #D4797FCF\n I.E NFC TAG ID 
  5.	IF THE CARD IS IN THE VALIDITY PERIOD THEN OPEN THE DOOR LOCK WITH THE RELAY
  6.	OPEN FOR SOME TIME LET SAY 2 SEC AND THEN LOCK THE DOOR USING RELAY



  
  // INFORMATION -(0-2000 SECTOR) with 256 byte 
  // INFORMATION-(2010-2048)
  ******************************************************************************
  */ 

/* Includes ------------------------------------------------------------------*/
#include "stm32f10x.h"


#include "stm32f10x_conf.h"
#include "string.h"
#include "mainvariable.h"
#include "new_var.h"
///////////////////////////////////////

	long n;
	float dis,response;
	unsigned int j,k,l,p,m,t=0;
	unsigned char flag123=1;
	unsigned long int weight=0;
	unsigned int read_len=0;

void Peripheral_Clock_Enable();
void GPIO_INPUT_CONFIG();
void GPIO_OUTPUT_CONFIG();
void USART_UART_INIT();
unsigned long pulseIn(uint16_t gpioPin, GPIO_TypeDef *gpiox, uint8_t state, unsigned long timeout);


#define Time_to_Send     40

NVIC_InitTypeDef NVIC_InitStructure;
USART_InitTypeDef USART_InitStructure;
GPIO_InitTypeDef GPIO_InitStructure;


//unsigned char USB_FOUND=0,USB_NOT_FOUND=0,Usb_Once_Send=0;

///////////PERIPHERAL CLOCK ENABLE////////////////
void Peripheral_Clock_Enable()
{
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA, ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB, ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC, ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD, ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE, ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_TIM1, ENABLE);  

	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOA | RCC_APB2Periph_AFIO, ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOB | RCC_APB2Periph_AFIO, ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOC | RCC_APB2Periph_AFIO, ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOD | RCC_APB2Periph_AFIO, ENABLE);
	RCC_APB2PeriphClockCmd(RCC_APB2Periph_GPIOE | RCC_APB2Periph_AFIO, ENABLE);

	//RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART2, ENABLE);	// FOR NFC TAG READ USING READER
	//RCC_APB1PeriphClockCmd(RCC_APB1Periph_USART3, ENABLE);
	//RCC_APB1PeriphClockCmd(RCC_APB1Periph_UART4, ENABLE);
	//RCC_APB1PeriphClockCmd(RCC_APB1Periph_UART5, ENABLE);	// FOR DOING COMMUNICATION WITH THE PC
}
///////////END PERIPHERAL CLOCK ENABLE////////////////////////


/////////GPIO_INPUT_CONFIG///////////////////////////////
void GPIO_INPUT_CONFIG()
{
	////////GPIOA i/p configuration////////////////////////
	/*GPIO_InitStructure.GPIO_Pin = GPIO_Pin_5|GPIO_Pin_8|GPIO_Pin_11;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_7;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AIN;
	GPIO_Init(GPIOA, &GPIO_InitStructure);
	////////////////////////////////////////////////////
	//////////// GPIOB i/p configuration////////////////// 
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3 |GPIO_Pin_15 ;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_Init(GPIOB, &GPIO_InitStructure);  

	////////////////////////////////////////////////////
	/////////// GPIOC i/p configuration ////////////////
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_6 ;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_Init(GPIOC, &GPIO_InitStructure);
	///////////////////////////////////////////////////                       */
	//////////////////GPIOD i/p configuration /////////
	GPIO_InitStructure.GPIO_Pin =GPIO_Pin_2|GPIO_Pin_4;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_Init(GPIOD, &GPIO_InitStructure);
	//////////////////////////////////////////////////
	/////////////GPIOE i/p configuration////////////
	/*GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0 |GPIO_Pin_3;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IPU;
	GPIO_Init(GPIOE, &GPIO_InitStructure);
	////////////////////////////////////////////////////       */
}
////////////GPIO INPUT END////////////////////////////////////

/////////////GPIO_OUTPUT_CONFIG///////////////////////////////
void GPIO_OUTPUT_CONFIG()
{
	////// GPIOA o/p configuration//////////////////

	/*GPIO_InitStructure.GPIO_Pin = GPIO_Pin_0 | GPIO_Pin_1 | GPIO_Pin_4;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(GPIOA, &GPIO_InitStructure);  


	////////// GPIOB o/p configuration//////////////////
	GPIO_InitStructure.GPIO_Pin =GPIO_Pin_0|GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_4|GPIO_Pin_12|GPIO_Pin_13|GPIO_Pin_14 | GPIO_Pin_8;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(GPIOB, &GPIO_InitStructure);	


	/////////////// GPIOC o/p configuration/////////////
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_1|GPIO_Pin_2|GPIO_Pin_3|GPIO_Pin_7;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(GPIOC, &GPIO_InitStructure);

*/
	////////////// GPIOD o/p configuration////////////////////////
	GPIO_InitStructure.GPIO_Pin =  GPIO_Pin_5|GPIO_Pin_7;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(GPIOD, &GPIO_InitStructure);	

	////////////// GPIOE o/p configuration////////////////////////
/*	GPIO_InitStructure.GPIO_Pin = (GPIO_Pin_1 |GPIO_Pin_7 | GPIO_Pin_2|
																GPIO_Pin_8 | 
																GPIO_Pin_9 | 
																GPIO_Pin_10| 
																GPIO_Pin_11| 
																GPIO_Pin_12|
																GPIO_Pin_13|
																GPIO_Pin_14|
																GPIO_Pin_15);
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_Out_PP;
	GPIO_Init(GPIOE, &GPIO_InitStructure);       */
}
////////GPIO_OUT_CONFIG END//////////////////////////////////                    
////////////USART UART CONFIGURATION///////////////////////

void USART_UART_INIT()
{

	/* Configure USART2 Tx as alternate function push-pull */

	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOA, &GPIO_InitStructure);

	/* Configure USART2 Rx as input floating */

	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_3;
	GPIO_Init(GPIOA, &GPIO_InitStructure);


	//////////////////////////////////////////////////////////////////	
	//////////////////////FOR GSM/GPRS///////////////////////////////
	/* Configure USART3 Tx as alternate function push-pull *///printer

	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOB, &GPIO_InitStructure);

	/* Configure USART3 Rx as input floating *///printer

	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;
	GPIO_Init(GPIOB, &GPIO_InitStructure);
	/////////////////////////////////////////////////////////////////////
	///////////////////////////////////////////////////////////////////////
#if 0
	/* Configure USRT4 Tx as alternate function push-pull */ //GSM/GPRS/GPS

	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_10;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOC, &GPIO_InitStructure);

	/* Configure UART4 Rx as input floating */ //GPS

	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_11;
	GPIO_Init(GPIOC, &GPIO_InitStructure);

	//////////////////////////WEIGHING CARD///////////////////////////////////////////
	/* Configure USRT5 Tx as alternate function push-pull */ 

	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_AF_PP;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_12;
	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_Init(GPIOC, &GPIO_InitStructure);


	/* Configure UART5 Rx as input floating */ //

	GPIO_InitStructure.GPIO_Speed = GPIO_Speed_50MHz;
	GPIO_InitStructure.GPIO_Mode = GPIO_Mode_IN_FLOATING;
	GPIO_InitStructure.GPIO_Pin = GPIO_Pin_2;
	GPIO_Init(GPIOD, &GPIO_InitStructure);

#endif
	////////////////////USART2 FOR RF READER /////////////////////////
	USART_InitStructure.USART_BaudRate = 9600;
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;
	USART_InitStructure.USART_StopBits = USART_StopBits_1;
	USART_InitStructure.USART_Parity = USART_Parity_No;
	USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	USART_InitStructure.USART_Mode = USART_Mode_Rx | USART_Mode_Tx;
	USART_Init(USART2,&USART_InitStructure);

	NVIC_InitStructure.NVIC_IRQChannel = USART2_IRQn;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
	NVIC_Init(&NVIC_InitStructure);

	USART_Cmd(USART2, ENABLE);
	USART_ITConfig(USART2, USART_IT_RXNE, ENABLE);		


	//////////////////////////////////////////////////////////////
	//USART3// Tx only for printer
	USART_InitStructure.USART_BaudRate = 9600;
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;
	USART_InitStructure.USART_StopBits = USART_StopBits_1;
	USART_InitStructure.USART_Parity = USART_Parity_No;
	USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	USART_InitStructure.USART_Mode = USART_Mode_Tx| USART_Mode_Rx;
	USART_Init(USART3,&USART_InitStructure);

	USART_Cmd(USART3, ENABLE);
	USART_ITConfig(USART3, USART_IT_RXNE, ENABLE);		

	NVIC_InitStructure.NVIC_IRQChannel = USART3_IRQn;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
	NVIC_Init(&NVIC_InitStructure);

	//////////////////////////////////////////////////////////////
#if 0
	//UART4// for GSM/GPRS//GPS MAIN UART 

	USART_InitStructure.USART_BaudRate = 115200;
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;
	USART_InitStructure.USART_StopBits = USART_StopBits_1;
	USART_InitStructure.USART_Parity = USART_Parity_No;
	USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	USART_InitStructure.USART_Mode = USART_Mode_Tx| USART_Mode_Rx;
	USART_Init(UART4,&USART_InitStructure);

	USART_Cmd(UART4, ENABLE);
	USART_ITConfig(UART4, USART_IT_RXNE, ENABLE);		

	NVIC_InitStructure.NVIC_IRQChannel = UART4_IRQn;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
	NVIC_Init(&NVIC_InitStructure);

	////UART5 FOR GETTING DATA FROM ACTIVE READER RF/////////////////////////////////

	USART_InitStructure.USART_BaudRate = 9600;
	USART_InitStructure.USART_WordLength = USART_WordLength_8b;
	USART_InitStructure.USART_StopBits = USART_StopBits_1;
	USART_InitStructure.USART_Parity = USART_Parity_No;
	USART_InitStructure.USART_HardwareFlowControl = USART_HardwareFlowControl_None;
	USART_InitStructure.USART_Mode = USART_Mode_Tx| USART_Mode_Rx;
	USART_Init(UART5,&USART_InitStructure);

	USART_Cmd(UART5, ENABLE);
	USART_ITConfig(UART5, USART_IT_RXNE, ENABLE);		

	NVIC_InitStructure.NVIC_IRQChannel = UART5_IRQn;
	NVIC_InitStructure.NVIC_IRQChannelPreemptionPriority = 0;
	NVIC_InitStructure.NVIC_IRQChannelSubPriority = 0;
	NVIC_InitStructure.NVIC_IRQChannelCmd = ENABLE;
	NVIC_Init(&NVIC_InitStructure);
#endif	
}





/**
  * @brief  Main program.
  * @param  None
  * @retval None
  */ 
uint32_t distance(void);

static __IO uint32_t usTicks;
 
// SysTick_Handler function will be called every 1 us
#if 0
void SysTick_Handler()
{
    if (usTicks != 0)
    {
        usTicks--;
    }
}
#endif

int main(void)                                                                                     
{
   __IO uint32_t i = 0;


	Peripheral_Clock_Enable();
	
	AFIO->MAPR &= ~0x07000000;
	AFIO->MAPR |=  0x02000000; //JTAG disabled
	GPIO_INPUT_CONFIG();
	GPIO_OUTPUT_CONFIG();
	USART_UART_INIT();

  SysTick_Config(SystemCoreClock/1000);  

		
		buzz_flag=1;

  while(1)
  {
		
  	GPIOD->BSRR |= GPIO_Pin_7;
		delay(200);
	  
		
		GPIO_SetBits(GPIOD,GPIO_Pin_5);
		delay(10);
		GPIO_ResetBits(GPIOD,GPIO_Pin_5);	
		response = pulseIn(GPIO_Pin_4, GPIOD, 1, 1000);
		
		dis=(response*170)/10000;
		
		if(dis>=5.5&&dis<=6.5)
		{
			GPIOD->BRR |= GPIO_Pin_7;
			delay(200);
		}
	//dis = distance();
	//delay(100);
		
		//distance measurement flow. Send a 10us pulse, wait for 
		//the rising edge of the echo pin then start a timer, wait 
		//for the falling edge of the echo pin and stop the timer. 
	  //The value present when the timer is stopped will be proportional 
		//to the distance of the object from the module.
  }
}




void delay(unsigned int i){
  delay_timer=0;
  
  while(delay_timer<i);
}

void wait(unsigned char i){
   for(;i>0;i--);
}

uint32_t distance(void)
{
	 uint8_t flag=0;
	uint32_t distake=0;
	GPIO_SetBits(GPIOD,GPIO_Pin_5);
	delay(10);
	GPIO_ResetBits(GPIOD,GPIO_Pin_5);

	while(flag==0)
		{
			while((GPIO_ReadInputDataBit(GPIOD, GPIO_Pin_4)==SET))
			{
				distake++;
				flag=1;
			}
		}
	return distake;
}

unsigned long pulseIn(uint16_t gpioPin, GPIO_TypeDef *gpiox, uint8_t state, unsigned long timeout) {

	uint16_t stateMask = (state ? gpioPin : 0);
	unsigned long width = 0;

	unsigned long numloops = 0;
	unsigned maxloops = (72 * timeout)/16;

	while((gpiox->IDR & gpioPin) == stateMask) {
		if (numloops++ == maxloops) {
					return 0;
		}
	}

	while((gpiox->IDR & gpioPin) != stateMask) {
			if (numloops++ == maxloops) {
						return 0;
			}
		}

	while((gpiox->IDR & gpioPin) == stateMask) {
		width++;
	}

	return ((width * 10 + 16)/72);
}

/****** (C) COPYRIGHT SMARTHINK TECHNOLOGY PRIVATE LIMITED**END OF FILE****/