


#include <stdio.h>
#include <math.h>
void hamming();
int main()
{
    hamming();
    return 0;
}
void hamming(){
    int m,n,k;
    
    printf("Enter two numbers :");
    scanf("%d %d",&m,&n);
    int x=m , y=n;
    for(k=0;m>0||n>0;m/=2,n/=2){
        // printf("%d %d %.0lf\n",m%2,n%2,pow((m%2)-(n%2),2));
        if(m%2!=n%2){
        k++;
        }
    }
    printf("Hamming distance between %d and %d is %d",x,y,k);
}
