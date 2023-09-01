int main() {  
  /*as we are typecasting, the whole thing as a pointer to unsigned integer 
by dereferencing.*/
  
 //should look like  *(ptr);
     *((unsigned int *)0x400FE608U) = 0x00000020U;   //clock gating system register
     *((unsigned int *)0x40025400U) = 0x0000000EU;  // GPIO-F pin direction register
     *((unsigned int *)0x4002551CU) = 0x0000000EU;  //digital function register
   
     while(1)  // to turn on-off those LED, using loop for-ever
     {
     *((unsigned int *)0x400253FCU) = 0x00000020U;  // GPIO-F data register for settingup R,G,B 
     int counter =0;
     while(counter < 1000000)
     {
       ++counter;
     }
     *((unsigned int *)0x400253FCU) = 0x00000000U;  // GPIO-F data register for settingup R,G,B 
     counter =0;
     while(counter < 1000000)
     {
       ++counter;
     }
     }
  return 0;
}
