/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,c;
    scanf("%d,%d,%d",&a,&b,&c);
    if(a>b){
        if(a>c)
        printf("%d is largest",a);
        else
        printf("%d is largest",c);

    }
    else{
        if(b>c)
        printf("%d is largest",b);
        else
        printf("%d is largest",c);
        
    }

    return 0;
}
