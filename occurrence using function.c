/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#include <math.h>
int occr();
int main()
{
    int num,digit;
    printf("Enter a number:");
    scanf("%d",&num);
    printf("Enter digit whose occuranceces you want:");
    scanf("%d",&digit);
    printf("Occurance of %d is %d",digit,occr(num,digit));
    

    return 0;
}
int occr(int num,int digit){
    int n,k=0;
    n = log10(num) + 1;
    for(int i=1;i<=n;++i,num/=10){
        if(num%10==digit)
        ++k;
    }
    return k;
}
