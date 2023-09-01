#define RCGCGPIO (*((unsigned int *)0x400FE608U))
#define GPIOF_BASE 0X40025000U
#define GPIOF_DIR (*((unsigned int *)(GPIOF_BASE + 0x400U)))
#define GPIOF_FUN (*((unsigned int *)(GPIOF_BASE + 0x51CU)))
#define GPIO_DATA (*((unsigned int volatile *)(GPIOF_BASE + 0x3FCU)))
int main() {  
  /*improve the readability of the code using MACRO */
  
 //should look like  *(ptr);
     RCGCGPIO = 0x00000020U;   //clock gating system register, enable clock for GPIOF
     GPIOF_DIR = 0x0000000EU;  // GPIO-F pin direction register, set pins 1,2 and 3 as outputs
     GPIOF_FUN = 0x0000000EU;  //digital function register, 
   
     while(1)  // to turn on-off those LED, using loop for-ever
     {
     GPIO_DATA = 0x00000020U;  // GPIO-F data register for settingup R,G,B 
     int volatile counter =0;
     while(counter < 1000000)
     {
       ++counter;
     }
     GPIO_DATA = 0x00000000U;  // GPIO-F data register for settingup R,G,B 
     counter =0;
     while(counter < 1000000)
     {
       ++counter;
     }
     }
  return 0;
}
