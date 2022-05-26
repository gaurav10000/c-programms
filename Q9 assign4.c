/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int yr;
    scanf("%d",&yr);
    yr%100==0?yr%400==0?printf("Leap year"):printf("Not a leap year"):yr%4==0?printf("Leap year"):printf("Not a leap year");
    // short way is:
    // if(yr%100!=0&&yr%4==0 || yr%400==0)
    // printf("Leap yr");
    // else
    // printf("not leap yr");

    return 0;
}
