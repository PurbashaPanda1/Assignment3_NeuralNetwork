#include "TM4C123GH6PM.h"
#include <string.h>
void printMsg2p(const int a)
{
	 char Msg[100];
	 char *ptr;
	 sprintf(Msg, "Theta = %d degrees,", a);
	 ptr = Msg ;
   while(*ptr != '\0')
	 {
      ITM_SendChar(*ptr);
      ++ptr;
   }
	 
		 
}

