#include <reg51.h>

#define Port P2

#define BIT0 0x01
#define BIT1 0x02
#define BIT2 0x04
#define BIT3 0x08
#define BIT4 0x10
#define BIT5 0x20
#define BIT6 0x40
#define BIT7 0x80

void MSDelay(unsigned int);

void main(){

   
	while(1)
	{
		  Port = 0xff;
			Port = Port & ~BIT0;
			MSDelay(500);
		  
			Port = 0xff;
			MSDelay(500);

//		  Port = 0xff;
			Port = Port & ~BIT1;
			MSDelay(500);
		  
			Port = 0xff;
			MSDelay(500);	  

	}
}


void MSDelay(unsigned int itime)
  {
    unsigned int i,j;
	  for(i=0;i<itime;i++)
	    for(j=0;j<114;j++);
  }