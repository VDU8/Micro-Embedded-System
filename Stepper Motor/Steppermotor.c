#include <reg51.h>
#include <stdio.h>
#define stepper P1
void delay()
{
    unsigned char i,j,k;
    for(i=0;i<6;i++) {
        for(j=0;j<255;j++)
            for(k=0;k<255;k++);
    }
}
 
void main()
{
    while (1) {
        stepper = 0x0C;
        delay();
        stepper = 0x06;
        delay();
        stepper = 0x03;
        delay();
        stepper = 0x09;
        delay();
    }
}
