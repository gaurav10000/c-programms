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
    if(a>91)
    a=a-32;
    else
    a=a+32;
    printf("%c",a);

    return 0;
}
