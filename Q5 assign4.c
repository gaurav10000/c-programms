/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    char c;
    scanf("%c",&c);
    int a = c;
    if(a>=48&&a<=57)
    printf("digit");
    else if((a>=65&&a<=90)||(a>=97&&a<=122))
    printf("alphabet");
    else
    printf("Special character");

    return 0;
}
