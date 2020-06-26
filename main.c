#include <msp430.h> 


/**
 * main.c
 */
int main(void)
{
	WDTCTL = WDTPW | WDTHOLD;	// stop watchdog timer
	PM5CTL0 &= ~LOCKLPM5;
    P5DIR |= BIT2;              // Put P5.2



   for(;;){
       volatile unsigned int i;

       P5OUT ^= BIT2;

       i = 10000;
       do i--;
       while(i != 0);
       //test
   }
}
