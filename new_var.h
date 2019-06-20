#define set_buzz			 			GPIOD->BSRR |= 	GPIO_Pin_10
#define reset_buzz 					GPIOD->BRR |= 	GPIO_Pin_10  

///////////////////////////////////////////////////////////

#define set_clk 						GPIOD->BSRR |= 	GPIO_Pin_15  //memory
#define reset_clk				 		GPIOD->BRR |= 	GPIO_Pin_15  

#define set_di 							GPIOD->BSRR |= 	GPIO_Pin_14//memory
#define reset_di				 		GPIOD->BRR |= 	GPIO_Pin_14 

#define set_cs 							GPIOC->BSRR |= 	GPIO_Pin_7  //memory
#define reset_cs				 		GPIOC->BRR |= 	GPIO_Pin_7  


///////////////////////////////////////////////////////////
#define set_bat_full				GPIOC->BSRR |= 	GPIO_Pin_5
#define reset_bat_full			GPIOC->BRR |= 	GPIO_Pin_5  

#define set_reset_GSM 			GPIOD->BSRR |= 	GPIO_Pin_5 
#define reset_reset_GSM 		GPIOD->BRR |= 	GPIO_Pin_5  
//////////////////////////////////////////////////////////////////////////////

#define set_scl 						GPIOB->BSRR |= 	GPIO_Pin_4
#define reset_scl				 		GPIOB->BRR |= 	GPIO_Pin_4  

#define set_sda 						GPIOB->BSRR |= 	GPIO_Pin_5 
#define reset_sda						GPIOB->BRR |= 	GPIO_Pin_5
/////////////////////////////////////////////////////////////////////////////////
#define LED1_SET 			GPIOE->BSRR |= 	GPIO_Pin_7  
#define LED1_RESET				GPIOE->BRR  |= 	GPIO_Pin_7  

#define LED2_SET 			GPIOE->BSRR |= 	GPIO_Pin_8  
#define LED2_RESET 			GPIOE->BRR  |= 	GPIO_Pin_8  

#define LED3_SET				GPIOE->BSRR |= 	GPIO_Pin_9  
#define LED3_RESET 			GPIOE->BRR  |= 	GPIO_Pin_9  

#define LED4_SET 			GPIOE->BSRR |= 	GPIO_Pin_10  
#define LED4_RESET 			GPIOE->BRR  |= 	GPIO_Pin_10  

#define LED5_SET 			GPIOE->BSRR |= 	GPIO_Pin_11  
#define LED5_RESET 			GPIOE->BRR  |= 	GPIO_Pin_11  

#define LED6_SET 			GPIOE->BSRR |= 	GPIO_Pin_12  
#define LED6_RESET 			GPIOE->BRR  |= 	GPIO_Pin_12  

#define LED7_SET 			GPIOE->BSRR |= 	GPIO_Pin_13  
#define LED7_RESET 			GPIOE->BRR  |= 	GPIO_Pin_13

#define LED8_SET 			GPIOE->BSRR |= 	GPIO_Pin_14  
#define LED8_RESET 			GPIOE->BRR  |= 	GPIO_Pin_14  


#define Relay_SET 			GPIOE->BSRR |= 	GPIO_Pin_14  
#define Relay_RESET 			GPIOE->BRR  |= 	GPIO_Pin_14  


#if 0
#define set_RD_lcd 					GPIOE->BSRR |= 	GPIO_Pin_7//ENB 
#define reset_RD_lcd		 		GPIOE->BRR |= 	GPIO_Pin_7  

#define set_a0_lcd					GPIOB->BSRR |= 	GPIO_Pin_2//di
#define reset_a0_lcd		 		GPIOB->BRR |= 	GPIO_Pin_2  


#define set_reset_lcd 			GPIOB->BSRR |= 	GPIO_Pin_1
#define reset_reset_lcd	 		GPIOB->BRR  |= 	GPIO_Pin_1  

#define set_cs_lcd 					GPIOB->BSRR |= 	GPIO_Pin_0
#define reset_cs_lcd		 		GPIOB->BRR |= 	GPIO_Pin_0  

#define set_d0 							GPIOE->BSRR |= 	GPIO_Pin_8
#define reset_d0				 		GPIOE->BRR |= 	GPIO_Pin_8  
#define set_d1 							GPIOE->BSRR |= 	GPIO_Pin_9  
#define reset_d1				 		GPIOE->BRR |= 	GPIO_Pin_9  
#define set_d2 							GPIOE->BSRR |= 	GPIO_Pin_10  
#define reset_d2				 		GPIOE->BRR |= 	GPIO_Pin_10  
#define set_d3 							GPIOE->BSRR |= 	GPIO_Pin_11  
#define reset_d3				 		GPIOE->BRR |= 	GPIO_Pin_11  
#define set_d4 							GPIOE->BSRR |= 	GPIO_Pin_12  
#define reset_d4				 		GPIOE->BRR |= 	GPIO_Pin_12  
#define set_d5 							GPIOE->BSRR |= 	GPIO_Pin_13  
#define reset_d5				 		GPIOE->BRR |= 	GPIO_Pin_13  
#define set_d6 							GPIOE->BSRR |= 	GPIO_Pin_14  
#define reset_d6				 		GPIOE->BRR |= 	GPIO_Pin_14  
#define set_d7 							GPIOE->BSRR |= 	GPIO_Pin_15  
#define reset_d7				 		GPIOE->BRR |= 	GPIO_Pin_15  

///////////////////KEYPAD//////////////////////////////////////
#define set_row1 						GPIOB->BSRR |= 	GPIO_Pin_12  
#define reset_row1 					GPIOB->BRR  |= 	GPIO_Pin_12  

#define set_row2 						GPIOB->BSRR |= 	GPIO_Pin_13  
#define reset_row2 					GPIOB->BRR  |= 	GPIO_Pin_13  

#define set_row3 						GPIOB->BSRR |= 	GPIO_Pin_14  
#define reset_row3 					GPIOB->BRR  |= 	GPIO_Pin_14  

#define set_row4 						GPIOB->BSRR |= 	GPIO_Pin_15  
#define reset_row4 					GPIOB->BRR  |= 	GPIO_Pin_15  



#define set_col1 						GPIOD->BSRR |= 	GPIO_Pin_8  
#define reset_col1 					GPIOD->BRR  |= 	GPIO_Pin_8

#define set_col2 						GPIOD->BSRR |= 	GPIO_Pin_9  
#define reset_col2 					GPIOD->BRR  |= 	GPIO_Pin_9  
#endif

#if 0
#define Set_Load_Display 			GPIOD->BSRR |= 	GPIO_Pin_11  
#define Reset_Load_Display 			GPIOD->BRR  |= 	GPIO_Pin_11  

#define Set_Data_Display				GPIOD->BSRR |= 	GPIO_Pin_12  
#define Reset_Data_Display			GPIOD->BRR  |= 	GPIO_Pin_12  

#define Set_Clock_Display			GPIOD->BSRR |= 	GPIO_Pin_13  
#define Reset_Clock_Display			GPIOD->BRR  |= 	GPIO_Pin_13  



/////////////////////////////////////////////////////////////////////////////////
#define AdS1230_ADC_dout 	(GPIO_ReadInputDataBit(GPIOE,GPIO_Pin_0))

#define Set_ADS_Clock				GPIOE->BSRR |= 	GPIO_Pin_1
#define Reset_ADS_Clock			GPIOE->BRR |= 	GPIO_Pin_1
#endif
#if 0
#define	A1   15
#define	A2   30
#define	A3   50
 
/////////////////////////////////////////////////////////////////////////////////
//#define set_buzz 					GPIOB->BSRR |= 	GPIO_Pin_8  
//#define reset_buzz			 	GPIOB->BRR |= 	GPIO_Pin_8  

//////////////////////////////////////////////////////////////////////////////
extern void Weighing_Data();
extern void cal(void);
extern void show_blank(void);
extern void show_disarr(unsigned char *k);
extern void disp_array(unsigned char temp);
/////////////////////////////////////////////////////////////////////////////
extern void print_log(void);
extern void print_log_veh_no_wise(void);
extern void print_log_slip_no_wise(void);
extern void print_log_materialwise(void);
extern void print_log_supplierwise(void);
extern void print_log_datewise(void);
extern void PrintLog_VehNo_Material_Supp_wise(unsigned char Adrs,unsigned char VF,unsigned char MF,unsigned char SF);
extern void Print_Delete_log_Datewise(unsigned char PF,unsigned char DF);

extern void print_veh_no_wise(void);
extern void print_slip_no_wise(void);

extern void Display_VehNo_Material_Supp_wise(unsigned char Adrs,unsigned char VF,unsigned char MF,unsigned char SF);
extern void disp_datewise(void);
extern void disp_materialwise(void);
extern void disp_supplierwise(void);
extern void disp_slip_no_wise(void); 
extern void disp_veh_no_wise(void);


extern void delete_datewise(void);

extern void SET_OP_Password(void);
extern void Entry_Login(unsigned char LoginFlag);
extern void SET_FIRM_NAME_ADDRESS(void);


extern void vehicle_charge_details(void);
extern void material_details(void);
extern void supplier_details(void);


extern void print_setup(void);
extern void find_text(unsigned char i,unsigned long address);
extern void print(void);
extern void print1(unsigned long);
extern void setting(void);
extern void report(void);



extern void second_entry(void);
extern void first_entry(void);
extern void weight_entry(void); 
extern void disp(void);  
extern void Weight_Hold(void);

extern void Factory_Setting(void);
extern void Menu_Hide_Unhide(void); 
extern void Data_Send_USB_GSM(unsigned char flag2);

extern void Find_length_fill_Space(unsigned char *ptr);
extern void PRINT_DATA(unsigned long Address);
extern void Print_Detail(unsigned char *data,unsigned char add);
extern void Print_And_Delete_Detail(unsigned long address1,unsigned long address2,unsigned char flag);
extern void Send_Command_To_Printer(unsigned char data,unsigned char data1,unsigned char data2);
extern void Page_Erase(unsigned long Address1);
extern void Print_Thermal_Data(unsigned long address);
extern void Printer_Selection(unsigned long Address);
extern void Swap_Function(unsigned long address,unsigned char flag);
extern void Weighing_Message_send(unsigned long address,unsigned char flag);
extern void SET_WEIGH_PARAM(void);

extern void SET_GSM_GPRS(void);

extern void write_data(unsigned char data1);
extern void Factory_Setting(void);
extern void Menu_Hide_Unhide(void);
extern void disp(void);
 
extern void Weight_Hold(void);
extern void Convert_Float_Buff(unsigned char flag1);

#endif
extern void check_tag_open_door(void);
extern void save_nfc_to_memory(void);
extern void Page_Modification(unsigned long Address);
extern void write_data_to_memory(void);
extern void delay(unsigned int);
extern void wait(unsigned char);
extern void sector_erase(unsigned long address);

extern void unlock_mem(void);

 

/*RTC*/
//RTC
extern void write_M41t00(void);
extern void Read_M41t00(void);
extern void delayI2C(void);
extern void I2C_S(void);
extern void I2C_P(void);
extern unsigned char I2C_W(unsigned char);
extern unsigned char I2C_R(void);
extern unsigned char I2C_R_NA(void);
extern void set_rtc(void);
extern void sda_out(void);
extern void sda_in(void);
/////////////////////////////////////////////////
extern void init_gprs(void);
////////////////////////////////////////////////
///////////////////////////////////////////////

extern void Send_TO_Server(unsigned char* data);
extern void send_message(unsigned char *msg);
extern void Send_TO_HTTP_URL(void);
extern unsigned int Find_validity_of_days(unsigned int Date,unsigned int Month,unsigned int Year);



////////////////////////////////////////////////
extern _Bool buzz_flag;
extern _Bool keyboard_flag;
extern _Bool Uart3_rx_flag;
extern _Bool master_flag;
extern _Bool Uart3_flag;
extern _Bool Uart2_flag;
extern _Bool set_flag;
 
extern _Bool message_flag;
extern _Bool data_send;
extern _Bool Server_Flag;

extern _Bool IntCheck;
extern _Bool stable_flag1; /*These two flags are used to check the stability of the machine*/
extern _Bool stable_flag2;
extern _Bool Deleting_done_previously;
extern _Bool DOB_Invalid;
extern _Bool leap_year_flag;
extern _Bool relay_timer_flag;
/////////////////////////////////////////////////

#if 0
extern _Bool release_flag;
extern _Bool Erase_flag;
extern _Bool First_Time;
	
extern _Bool auto_entry_flag;
extern _Bool Total_Flag;
extern _Bool Only_Comlete_Flag;
extern _Bool Only_Pending_Flag;
extern _Bool Firm_Name;
extern _Bool Developed_BY_Flag;
extern _Bool print_flag;
extern _Bool slip_flag;
extern _Bool create_file;
 

extern _Bool Weight_Compare_Equal_Flag; 
extern _Bool key_flag;
extern _Bool key_released_flag;
extern _Bool Key_detect_flag;
extern _Bool Menu_flag;
extern _Bool Gender_flag;
extern _Bool Wt_Entry_flag;

/////////////////////weighing variable/////////////////////////////
extern unsigned char decimal,lc1,lc2,ld,c_a,digit_cnt;//,mdate,ydate;,e9
extern unsigned char  check,name,temp;//flag,symbol,,baud
extern unsigned char add1,cnt,Delay,limit1,limit2,lb_cnt,digit,location,temp_digit,symbol;
extern unsigned long int value2,value,value3,tare_value,value4,cal_value,cal_tare,out,temp1;
extern unsigned char az,ps,e9,speed,cal_active,bd_continous,bd_stable,namest;//,count;
extern unsigned int cal_val,diff,counts,dualcap;
extern unsigned char number,tempdisplay;
extern unsigned long int output;
extern _Bool stable_flag2;
extern _Bool cal_flag1;   /*These two flags are used in Callibration routine */
extern _Bool cal_flag2;
extern _Bool lb_flag;
extern _Bool sign_flag;
extern _Bool bit_setval;
extern _Bool  prn_flag;
extern _Bool leading_flag;
extern _Bool ad;


extern void stable(void);

/////////////////////////////////////////////////////////////////////
extern unsigned char key,Keyad_Counter;
extern unsigned char key_byte,key_bak;


extern unsigned int Age_In_Month;
extern float Weight_kg,Height_cm;



extern unsigned char jj1,File_Format,Hide_Unhide_Menu,Code_Format,Length,Append_Counter,Arrows_flag;
#endif

extern signed int MONTH,YEAR;
extern unsigned int DAYS;

extern unsigned int Age_In_Month;

//extern unsigned char Uart6_timer;
//extern unsigned char Language,key_data;
//extern unsigned char key_count,weight_count;
extern unsigned int delay_timer,relay_timer;
//extern unsigned char dis_arr[7];
//extern unsigned char  disp0_f[11];
//extern unsigned char    goldtech[16];
extern  unsigned char csq_array[8];
extern unsigned char big_buff[4096];
extern unsigned char very_big_buff[5120];
extern unsigned char buff[256];
extern unsigned char buff_p[256];
extern unsigned char Current_Month_day[12];
//extern unsigned char Weight_Buff[20];
//extern unsigned int int1;
extern unsigned char mem_timer;
extern unsigned char second_rtc,minute_rtc,hour_rtc,day_rtc,date_rtc,month_rtc,year_rtc;
extern unsigned char cur_date_rtc[7];
extern unsigned char cur_time_rtc[7];
//extern unsigned char temp_buff[80];
//extern unsigned char buff1[20];
extern unsigned char Buff2[20];
//extern unsigned char Auto_Weight_Buff[20];
extern unsigned long long1,long2,long4;
extern unsigned char Uart1_rx_data;
//extern unsigned char Uart6_rx_data;
extern unsigned char Uart3_rx_data;
extern unsigned char Uart1_rx_buff[100];
//extern unsigned char Uart2_rx_buff[20];
extern unsigned char Uart3_rx_buff[30];
//extern unsigned char USB_PENDRIVE_BUFF[100];
extern unsigned char Uart1_rx_index;
extern unsigned char Uart3_rx_index;
extern unsigned int serial_timer;
extern unsigned char buzz_timer;
//extern unsigned int key_timer;
//extern unsigned char master_pass[10];
//extern unsigned char op_pass[10];
//extern unsigned char Clear[20];
//extern unsigned char Factory_Pass[10];
//extern unsigned char  under_line[];

extern _Bool flag_send;
//GPRS
extern unsigned int  p_timer,Timer_inc;
extern unsigned char gprsi,gprsj;
extern unsigned char process_index;
extern unsigned char GSM_signal;
extern unsigned char sms_timer;
//extern unsigned char	tcp_connecting;
extern unsigned int	process_timer;
//extern unsigned char Uart6_rx_buff_index;
//extern unsigned int Weight_Display_counter;

//extern _Bool qistat_flag;
//extern _Bool	message_flag;
extern _Bool	 connect_flag;
//extern unsigned char intrpt_buff[50];
//extern unsigned char IP_address[20];
//extern unsigned char port_no[10];//="1910";
//extern unsigned char APN[30];//="\"delhivts\"";
//extern unsigned char Language_Code[2];
extern unsigned char ADMIN_NUMBER[12];
//extern unsigned char csq_array[8];
//extern unsigned char MASTER_NO[12];
extern unsigned char gprs_buff[50];

extern unsigned char HTTP_URL[50];
extern unsigned char start_send_to_url_timer;
//
extern unsigned char SIM_NO[21];

//extern unsigned char IMEI_arr[50];

//extern void wait(unsigned char y);
extern void Gpio_Init(void);
//extern unsigned char const bitmap_verybig[][48];
//extern unsigned char const bitmap_big[][16];
//extern unsigned char const bitmap[][8];
//extern unsigned char tab[2];
//extern unsigned char const gprs_bitmap[17];
//extern unsigned char const gps_bitmap[21];
//extern const char Font[][5];

/////////////////////////////////////////////////
//extern unsigned char const lsb_msb[];
extern unsigned char const bit_order[8];
//extern unsigned char const scancode_numerical[];
//extern unsigned char const scancode_numerical1[11];
//extern unsigned char const scancode_alpha[];
//extern unsigned char const scancode_sign[];
//extern unsigned char digit_pos[7];
//under_wt,over_wt,
 
/////////////////////////////////////////////////////////////////////////////////
/////////////////////////////////////////////////////////////////////////////////
#if 0
extern void WriteCommand(unsigned char ucData);
extern void WriteData(unsigned char pucBuffer);
extern void LCD_128x64x1Init(void);
extern void LCD_SET_PAGE(unsigned int page,unsigned int col,unsigned int line);
extern void LCD_CLEAR(void);
extern void write_string_1(unsigned char* ptr,unsigned char line);
extern void disp_line_big_Hindi(unsigned char*ptr,unsigned char add,unsigned char add1);
extern void disp_line_Small_Hindi(unsigned char*ptr,unsigned char add,unsigned char add1);
extern void disp_line_big_Gujarati(unsigned char*ptr,unsigned char add,unsigned char add1);
extern void disp_line_Small_Gujarati(unsigned char*ptr,unsigned char add,unsigned char add1);
extern void disp_line_very_big(unsigned char*ptr,unsigned char add);


//LCD
extern void write_lcd(unsigned char);
extern void write_lcd1(unsigned char data_lcd);
extern void init_lcd(unsigned char,unsigned char);
extern void clr_lcd(void);
extern void clr_line(unsigned char);
extern void disp_line_big(unsigned char*ptr,unsigned char add);
extern void fill_page(unsigned char*,unsigned char,unsigned char);
extern void write_string(unsigned char* ptr);
extern void write_string1(unsigned char* ptr);
extern void manipulate_lcd_data(unsigned char);
extern void LCD_UPDATE(void);

#endif
//UARTs
extern void Uart1_tx(unsigned char*);
extern void Uart1_tx_only(unsigned char*);
extern void Uart3_tx(unsigned char*);
extern void send_uart3(unsigned char);


 //Memory
extern void chip_erase(void);
extern void save_data(void);
extern void save_data1(void);
extern void read_page(unsigned char *m,unsigned long address,unsigned int n);
extern void write_page(unsigned char *m,unsigned long address,unsigned int n);
extern unsigned char receive_spi(void);
extern void send_spi(unsigned char d);
extern void sector_erase(unsigned long address);
extern void unlock_mem(void);

//Uarts
extern unsigned char Uart3_rx_buff_index;
extern unsigned int 	Uart1_rx_buff_index;
extern unsigned char Uart3_rx_data;
extern unsigned char Uart1_rx_data;
//extern unsigned char 	serial_timer;
extern unsigned char 	serial_timer1;

//extern void write_string_1(unsigned char* ptr,unsigned char line);
//extern void LCD_CLEAR(void);
//extern void write_column(unsigned char col_data);


extern void SysTick_Handler(void);
extern void USART2_IRQHandler(void);
extern void UART5_IRQHandler(void);
extern void USART1_IRQHandler(void);
extern void USART3_IRQHandler(void);
extern void uart1_tx(unsigned char* p);
extern void uart2_tx(unsigned char* p);
extern void send_uart3(unsigned char p);
extern void PRINTER_UART_SEND(unsigned char *p);
extern void uart3_tx(unsigned char *p);
extern void UART4_IRQHandler(void);



//extern unsigned char lcd_buff[128][8];

//extern unsigned char row_no;
//extern unsigned char col_no;





