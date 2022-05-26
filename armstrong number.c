/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int main()
{
    int a,a1,k,sum = 0,r;
    scanf("%d",&a);
    k = log10(a) +1;
    for(a1 = a ; a1>0 ; a1 = a1/10){
        r = a1%10;
        sum = sum + pow(r,k);
    }
    sum==a?printf("%d is armstrong number",a): printf("not armstrong");

    return 0;
}
