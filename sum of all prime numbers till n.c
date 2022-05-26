/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int n,a,i,sum=0,k=0;
    scanf("%d",&n);
    for(a=2;a<=n;++a,k=0){
        for(i=2;i<=a/2;++i){
            if(a%i==0){
                k=1;
                break;
            }
        }
        if(k==0){
            printf("%d is a prime number\n",a);
            sum = sum + a;
        }
    }
    printf("sum is %d",sum);
    

    return 0;
}
