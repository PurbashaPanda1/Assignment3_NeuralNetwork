#include "stm32f4xx.h"
void printMsg(const int a,const int b)
{
	 char Msg[100];
	 char *ptr;
	 sprintf(Msg, "\n The value of sigmoid in floating point  %x", a);
	 ptr = Msg ;
   while(*ptr != '\0')
	 {
      ITM_SendChar(*ptr);
      ++ptr;
   }

	sprintf(Msg, "\n Logic used %x", b);
	 ptr = Msg ;
   while(*ptr != '\0')
	 {
      ITM_SendChar(*ptr);
      ++ptr;
   }

}