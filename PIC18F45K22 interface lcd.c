// Lcd module connections
sbit LCD_RS at LATD2_bit;
sbit LCD_EN at LATD3_bit;
sbit LCD_D4 at LATD4_bit;
sbit LCD_D5 at LATD5_bit;
sbit LCD_D6 at LATD6_bit;
sbit LCD_D7 at LATD7_bit;

sbit LCD_RS_Direction at TRISD2_bit;
sbit LCD_EN_Direction at TRISD3_bit;
sbit LCD_D4_Direction at TRISD4_bit;
sbit LCD_D5_Direction at TRISD5_bit;
sbit LCD_D6_Direction at TRISD6_bit;
sbit LCD_D7_Direction at TRISD7_bit;
// End Lcd module connections

char txt1[] = "hello you";

void main() {

  Lcd_Init();  // Initialize LCD
 
  Lcd_Cmd(_LCD_CLEAR);//clear any chacater on the display
  Lcd_Cmd(_LCD_CURSOR_OFF); //disable the cursor
  
  Lcd_Out(1, 4, txt1);//on the line 1 and row 4 write the content of txt1
  Lcd_Cmd(_LCD_CLEAR);
  Lcd_Out(2, 1, "Hello world");//hello world on second line and first row

 
}  //void main end