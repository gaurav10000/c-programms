/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
   int a,i=2;
   scanf("%d",&a);
   while(i<=a/2){
       a%i==0?printf("%d is a factor of %d\n",i,a),++i:++i;
   }
   
   
   return 0;

}
