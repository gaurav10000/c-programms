#include <stdio.h>
int main()
{
   int a=0,b=1,sum=0,n,i=1;
   scanf("%d",&n);
   printf("%d%d",a,b);
   while(i<=n-2){
       sum = a+b;
       a=b;
       printf("%d",sum);
       b=sum;
       ++i;
   }
   return 0;
}
