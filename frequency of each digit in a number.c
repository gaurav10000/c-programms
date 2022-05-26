/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
int a1,a2,a3,a4,a5,a6,a7,a8,a9,a0;
void main()
{
   long a,x;
   scanf("%ld",&a);
   while(a>0){
       x = a%10;
       switch(x){
          case 0:++a0;break;
           case 1:++a1;break;
           case 2:++a2;break;
           case 3:++a3;break;
           case 4:++a4;break;
           case 5:++a5;break;
           case 6:++a6;break;
           case 7:++a7;break;
           case 8:++a8;break;
           case 9:++a9;break;
       }
       a/=10;
       
   }
   printf("Frequency of 0 is %d\n",a0);
   printf("Frequency of 1 is %d\n",a1);
   printf("Frequency of 2 is %d\n",a2);
   printf("Frequency of 3 is %d\n",a3);
   printf("Frequency of 4 is %d\n",a4);
   printf("Frequency of 5 is %d\n",a5);
   printf("Frequency of 6 is %d\n",a6);
   printf("Frequency of 7 is %d\n",a7);
   printf("Frequency of 8 is %d\n",a8);
   printf("Frequency of 9 is %d\n",a9);
   

}
