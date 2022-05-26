/**/
#include <stdio.h>
#include <math.h>
int main()
{
   int n,a,a1,k,r,sum=0;
   scanf("%d",&n);
   for(a=1;a<=n;a++,sum=0){
       k = log10(a) + 1;
       for(a1=a;a1>0;a1=a1/10){
           r = a1%10;
           sum = sum + pow(r,k);
       }
       if(sum==a){
           printf("%d is armstrong number\n",a);
       }
    
   }

    return 0;
}
