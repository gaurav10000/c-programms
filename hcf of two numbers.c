/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b,i;
    printf("Enter two values seperated by a comma:");
    scanf("%d,%d",&a,&b);
    for(i=a;i>=1;--i){
        if(b%i==0&&a%i==0){
            printf("%d is the hcf of %d and %d",i,a,b);
            break;
        }
    }

    return 0;
}
