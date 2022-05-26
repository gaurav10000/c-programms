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
   int n,a,a1,r,sum=0,fact=1;
   scanf("%d",&n);
   for(a=1;a<=n;++a,sum=0){
       for(a1=a;a1>0;a1=a1/10,fact = 1){
           r = a1%10;
           for(r;r>=1;--r){
               fact=fact*r;
           }
           sum = sum + fact ;
       }
       if(sum==a){
           printf("%d is strong number\n",a);
       }
   }

    return 0;
}
