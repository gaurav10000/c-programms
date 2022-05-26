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
   long n,a,i,r,sum=0;
  scanf("%ld",&n);
  for(a=1;a<=n;++a,sum=0){
       for(i=1;i<a;++i){
          if(a%i==0){
              r=i;
              sum = sum + r;
          }
       }
       if(sum==a){
           printf("%ld is a perfect number\n",a);
       }
  }

    return 0;
}
