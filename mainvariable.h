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
#define set_row1 						GPIOB->BSRR |= 	GPIO_Pin_12  //////RF ACTIVE READER
#define reset_row1 					GPIOB->BRR  |= 	GPIO_Pin_12  

#define set_row2 						GPIOB->BSRR |= 	GPIO_Pin_13  //// GSM_GPRS_MAKING CONNECTION
#define reset_row2 					GPIOB->BRR  |= 	GPIO_Pin_13  

#define set_row3 						GPIOB->BSRR |= 	GPIO_Pin_14  ////URL CONNECTION
#define reset_row3 					GPIOB->BRR  |= 	GPIO_Pin_14  

#define set_row4 						GPIOB->BSRR |= 	GPIO_Pin_15  //// DATA SENDING
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
 

//////////////////////////////////////////////////////////////////////////////
void Weighing_Data();
void stable(void);
void cal(void);
void show_blank(void);
void show_disarr(unsigned char *k);
void disp_array(unsigned char temp);
/////////////////////////////////////////////////////////////////////////////
void print_log(void);
void print_log_veh_no_wise(void);
void print_log_slip_no_wise(void);
void print_log_materialwise(void);
void print_log_supplierwise(void);
void print_log_datewise(void);
void PrintLog_VehNo_Material_Supp_wise(unsigned char Adrs,unsigned char VF,unsigned char MF,unsigned char SF);
void Print_Delete_log_Datewise(unsigned char PF,unsigned char DF);

void print_veh_no_wise(void);
void print_slip_no_wise(void);

void Display_VehNo_Material_Supp_wise(unsigned char Adrs,unsigned char VF,unsigned char MF,unsigned char SF);
void disp_datewise(void);
void disp_materialwise(void);
void disp_supplierwise(void);
void disp_slip_no_wise(void); 
void disp_veh_no_wise(void);


void delete_datewise(void);

void SET_OP_Password(void);
void Entry_Login(unsigned char LoginFlag);
void SET_FIRM_NAME_ADDRESS(void);


void vehicle_charge_details(void);
void material_details(void);
void supplier_details(void);


void print_setup(void);
void find_text(unsigned char i,unsigned long address);
void print(void);
void print1(unsigned long);
void setting(void);
void report(void);



void second_entry(void);
void first_entry(void);
void weight_entry(void); 
void disp(void);  
void Weight_Hold(void);

void Factory_Setting(void);
void Menu_Hide_Unhide(void); 
void Data_Send_USB_GSM(unsigned char flag2);

void SET_GSM_GPRS(void);


void Find_length_fill_Space(unsigned char *ptr);
void PRINT_DATA(unsigned long Address);
void Print_Detail(unsigned char *data,unsigned char add);
void Print_And_Delete_Detail(unsigned long address1,unsigned long address2,unsigned char flag);
void Send_Command_To_Printer(unsigned char data,unsigned char data1,unsigned char data2);

void Print_Thermal_Data(unsigned long address);
void Printer_Selection(unsigned long Address);
void Swap_Function(unsigned long address,unsigned char flag);
void Weighing_Message_send(unsigned long address,unsigned char flag);
void SET_WEIGH_PARAM(void);

void write_data(unsigned char data1);
#endif


unsigned int Find_validity_of_days(unsigned int Date,unsigned int Month,unsigned int Year);

unsigned char Current_Month_day[12]={0x1F,0x1C,0x1F,0x1E,0x1F,0x1E,0x1F,0x1F,0x1E,0x1F,0x1E,0x1F};


void check_tag_open_door(void);
void save_nfc_to_memory(void);
void Page_Modification(unsigned long Address);

void write_data_to_memory(void);
void Page_Erase(unsigned long Address1);

void delay(unsigned int);
void wait(unsigned char); 
void sector_erase(unsigned long address);
void unlock_mem(void);
/*RTC*/
void set_rtc(void);
void disp_rtc(void);
void write_M41t00(void);
void Read_M41t00(void);
void sda_out(void);
void sda_in(void);
////////////////////////////////
void Send_TO_Server(unsigned char* data);
void send_message(unsigned char *msg);


void Send_TO_HTTP_URL(void);
////////////////////////////////////////////////
void read_page(unsigned char *m,unsigned long address,unsigned int n);
void write_page(unsigned char *m,unsigned long address,unsigned int n);
/////////////////////////////////////////////// 
//void Convert_Float_Buff(unsigned char flag1);
//unsigned int Find_Age(unsigned int Date,unsigned int Month,unsigned int Year);

////////////////////////////////////////////////
/////////////////////////////////////////////////
_Bool buzz_flag=0;
_Bool Uart3_rx_flag=0;
_Bool Uart3_flag=0,set_flag=0;
_Bool Uart2_flag=0;
_Bool message_flag=0;
_Bool data_send=0;
_Bool Server_Flag=0;
_Bool Deleting_done_previously=0;
_Bool relay_timer_flag=0;

#if 0
_Bool release_flag=0,Erase_flag=0,First_Time=0;

_Bool keyboard_flag=0;	
_Bool auto_entry_flag=0,Total_Flag=0,Only_Comlete_Flag=0,Only_Pending_Flag=0,Firm_Name=0,Developed_BY_Flag=0,print_flag=0,slip_flag=0;

_Bool master_flag=0;
_Bool op_flag=0;
 

_Bool create_file=0;
 

_Bool Weight_Compare_Equal_Flag=0; 
_Bool key_flag=0;
_Bool key_released_flag=0;
_Bool Key_detect_flag=0;
_Bool Menu_flag=0;
_Bool Gender_flag=0;
_Bool Wt_Entry_flag=0;

#endif

/////////////////////weighing variable/////////////////////////////
//unsigned char decimal,lc1,lc2,ld,c_a,digit_cnt;//,mdate,ydate;,e9
//unsigned char  check,name,temp;//flag,symbol,,baud
//unsigned char add1,cnt,Delay,limit1,limit2,lb_cnt,digit,location,temp_digit,symbol;
//unsigned long int value2,value,value3,tare_value,value4,cal_value,cal_tare,out,temp1;
//unsigned char az,ps,e9,speed,cal_active,bd_continous,bd_stable,namest;//,count;
//unsigned int cal_val=0,diff,counts,dualcap;
//unsigned char number,tempdisplay;
//unsigned long int output;
_Bool IntCheck=0;
//_Bool tare_flag1;  /*This flag is used while Tareing and Callibrating the machine*/
_Bool stable_flag1=0; /*These two flags are used to check the stability of the machine*/
_Bool stable_flag2=0;
_Bool DOB_Invalid=0;
_Bool leap_year_flag=0;
#if 0
_Bool cal_flag1;   /*These two flags are used in Callibration routine */


_Bool cal_flag2;
_Bool lb_flag=0;
_Bool sign_flag;
_Bool bit_setval=0;
_Bool  prn_flag=0;
_Bool leading_flag=0;
_Bool ad;
_Bool Offset_cal_flag=0;
_Bool blink_flag=0;

#endif
 
//float Weight_kg;

//unsigned char jj1,File_Format,Hide_Unhide_Menu,Code_Format,Length,Append_Counter=0,Arrows_flag=0;

unsigned char Uart6_timer=0;
//unsigned char Language, key_data;
unsigned char key_count,weight_count;
unsigned int delay_timer=0,key_detect_counter=0,relay_timer=0;
//unsigned char dis_arr[7];
//unsigned char    goldtech[16];
unsigned char big_buff[4096];
unsigned char very_big_buff[5120];
unsigned char buff[256];
unsigned char buff_p[256];

signed int MONTH,YEAR;
unsigned int DAYS;

unsigned int Age_In_Month;


//unsigned int int1;
unsigned char mem_timer;
unsigned char second_rtc,minute_rtc,hour_rtc,day_rtc,date_rtc,month_rtc,year_rtc;
unsigned char cur_date_rtc[7];
unsigned char cur_time_rtc[7];
//unsigned char temp_buff[80];
//unsigned char buff1[20];
unsigned char Buff2[20];

unsigned long long1,long2,long3,long4;
unsigned char Uart1_rx_data;
unsigned char Uart6_rx_data;
unsigned char Uart3_rx_data;
unsigned char Uart1_rx_buff[100];
//unsigned char Uart2_rx_buff[20];
unsigned char Uart3_rx_buff[30];
unsigned char Uart1_rx_index;
unsigned char Uart3_rx_index;
unsigned int serial_timer;
unsigned char buzz_timer;
//unsigned int key_timer;

#if 0
unsigned char USB_PENDRIVE_BUFF[100];
unsigned char Weight_Buff[20];
unsigned char Auto_Weight_Buff[20];

unsigned char master_pass[10]="1234";
unsigned char op_pass[10]="1234";
unsigned char Clear[20]="                    ";
unsigned char Factory_Pass[10]="2345";
unsigned int Weight_Display_counter=0;
#endif


_Bool flag_send=0;
//GPRS
unsigned int  p_timer,Timer_inc;
unsigned char process_index;
unsigned char GSM_signal;
unsigned char sms_timer;

unsigned char gprsi,gprsj;
//unsigned char	tcp_connecting;
unsigned int	process_timer;

#if 0
unsigned char Uart6_rx_buff_index=0;
_Bool qistat_flag=1;
//_Bool	message_flag;
_Bool	 connect_flag=0;
//_Bool out=0;
unsigned char intrpt_buff[50];

unsigned char IP_address[20]="223.30.47.100";
unsigned char port_no[10]="5007";
unsigned char APN[30]="\"delhivts\"";

unsigned char IMEI_arr[50];


unsigned char CAL_COUNTS_BUFF[20];
unsigned char LC1_BUFF[2];
unsigned char Language_Code[2];
unsigned char tab[2]; 
unsigned char CAPACITY_COUNT_BUFF[12];
#endif

unsigned char csq_array[8];
unsigned char ADMIN_NUMBER[12]="9911710496";

unsigned char HTTP_URL[50]="HTTP://smartplaykids.com/smartplaytest/gprs?";

unsigned char start_send_to_url_timer=0;


#if 0
unsigned char  under_line[]="___________________________________________________________________________";
/////////////////////////////////////////////////
unsigned char const lsb_msb[]={0x01,0x02,0x04,0x08,0x10,0x20,0x40,0x80}; 
unsigned char  const scancode_numerical[]={0x45,0x16,0x1E,0x26,0x25,0x2E,0x36,0x3D,0x3E,0x46,0x4E};
unsigned char const scancode_numerical1[11]={0x70,0x69,0x72,0x7A,0x6B,0x73,0x74,0x6C,0x75,0x7D,0x4E};
unsigned char const scancode_alpha[]={0x1c,0x32,0x21,0x23,0x24,0x2B,0x34,0x33,0x43,0x3b,0x42,0x4b,0x3A,0x31,0x44,0x4D,0x15,0x2d,0x1b,0x2c,0x3c,0x2a,0x1D,0x22,0x35,0x1A,0x29,0x4A,0x41,0x49};
unsigned char const scancode_sign[]={0x4E,0x2D,0x41,0x2C,0x49,0x2E,0x4A,0x2F,0x29,0x20};
unsigned char digit_pos[7] = {0x02,0x04,0x08,0x10,0x20,0x40,0x80};
unsigned char  disp0_f[11]={0x77,0x14,0xb3,0xb6,0xd4,0xe6,0xe7,0x34,0xf7,0xf6,0x00};
//////////////////////////////////////////////////
#endif


/////////////////////////////////////////////////
extern unsigned char const bit_order[8];
//extern unsigned char const bitmap_big[][16];
//extern unsigned char const bitmap_verybig[][48];
//extern unsigned char const bitmap[][8];
//extern unsigned char chakra_array[8][8]; 
//////////////////////////////////////////////////

#if 0
//LCD
void write_lcd(unsigned char);
void write_lcd1(unsigned char data_lcd);
void init_lcd(unsigned char,unsigned char);
extern void clr_lcd(void);
extern void clr_line(unsigned char);
extern void disp_line_big(unsigned char*ptr,unsigned char add);
extern void disp_line_very_big(unsigned char*ptr,unsigned char add);
extern void fill_page(unsigned char*,unsigned char,unsigned char);
extern void disp_line_big_Hindi(unsigned char*ptr,unsigned char add,unsigned char add1);
extern void disp_line_Small_Hindi(unsigned char*ptr,unsigned char add,unsigned char add1);
extern void disp_line_big_Gujarati(unsigned char*ptr,unsigned char add,unsigned char add1);
extern void disp_line_Small_Gujarati(unsigned char*ptr,unsigned char add,unsigned char add1);
extern void write_string(unsigned char* ptr);
extern void write_string1(unsigned char* ptr);
void manipulate_lcd_data(unsigned char);
void LCD_UPDATE(void);
#endif

//UARTs
void Uart1_tx(unsigned char*);
void uart2_tx(unsigned char* p);
void Uart3_tx(unsigned char*);
void send_uart3(unsigned char);
void PRINTER_UART_SEND(unsigned char *p);


//GPS GPRS
void check_GPRS_signal(void);
extern void init_gprs(void);
void check_ok(void);

 //Memory
extern void chip_erase(void);
extern void read_page(unsigned char *m,unsigned long address,unsigned int n);
extern void write_page(unsigned char *m,unsigned long address,unsigned int n);
extern unsigned char receive_spi(void);
extern void send_spi(unsigned char d);
extern void sector_erase(unsigned long address);
extern void unlock_mem(void);

//extern void receive_key(unsigned char* m,unsigned char line);



//RTC
extern void delayI2C(void);
extern void I2C_S(void);
extern void I2C_P(void);
extern unsigned char I2C_W(unsigned char);
extern unsigned char I2C_R(void);
extern unsigned char I2C_R_NA(void);

/////////////////////////////////////////////////
////////////////////////////////////////////////////////
unsigned int int1;
//GPS
unsigned char GPS_timer;
unsigned char process_index_GPS;
unsigned int  p_timer_GPS;
unsigned char valid_status='V';
unsigned char send_speed;
unsigned long store_gps_index;

//GPRS
unsigned char emerg_reset_timer=0;
unsigned int  p_timer;
unsigned char process_index;
unsigned char GSM_signal;
unsigned char sms_timer;
unsigned char	tcp_connecting;
unsigned int	process_timer;

//Uarts
unsigned char Uart3_rx_buff_index;
unsigned int 	Uart1_rx_buff_index;
unsigned char Uart3_rx_data;
unsigned char Uart1_rx_data;
//unsigned char 	serial_timer;
//unsigned char 	serial_timer1;

//RTC
unsigned char second_rtc,minute_rtc,hour_rtc,day_rtc,date_rtc,month_rtc,year_rtc;
unsigned char second_bak;


//Dispatch
//unsigned int 	mes_rx_buff_index;
//unsigned char message_index;

//Timer
unsigned int delay_timer;

#if 0
unsigned int  panic_timer;
unsigned char panic_time=20;
unsigned char PANIC_FREQ=5;
unsigned char HIRED_FREQ=10;
unsigned char IDLE_FREQ=40;
unsigned int  PD_FREQ=120;
unsigned char frequency=10;

//LCD
unsigned char line_len;
unsigned char width;


////////////////////////////////////
void write_string_1(unsigned char* ptr,unsigned char line);
void LCD_CLEAR(void);

void WriteCommand(unsigned char ucData);
void WriteData(unsigned char pucBuffer);
void LCD_128x64x1Init(void);
void LCD_SET_PAGE(unsigned int page,unsigned int col,unsigned int line);
void LCD_CLEAR(void);
//void write_string_1(unsigned char* ptr);

void write_column(unsigned char col_data);
#endif




void SysTick_Handler(void);
//void USART2_IRQHandler(void);
//void UART5_IRQHandler(void);
//void USART1_IRQHandler(void);
void USART3_IRQHandler(void);
void uart1_tx(unsigned char* p);
void send_uart3(unsigned char p);
void uart3_tx(unsigned char *p);
void UART4_IRQHandler(void);

//unsigned char lcd_buff[128][8];

//unsigned char row_no;
//unsigned char col_no;

