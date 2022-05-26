/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    scanf("%d,%d",&a,&b);
    switch(a>b){
        case 0:printf("%d is largest",b);break;
        case 1:printf("%d is largest",a);
    }
    

    return 0;
}
