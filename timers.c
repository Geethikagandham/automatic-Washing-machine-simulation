
#include <xc.h>


void init_timer2(void)
{
    //timer2 control register
    
    //selecting post scalar as 1:1
    
    
    PR2 = 250;
    
    TMR2IE = 1;
    // turn on the timer2
    TMR2ON = 0;
    
    
    
}
