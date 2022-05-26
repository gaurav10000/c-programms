#include<stdio.h>
#include<math.h>
int prime(int);
void perfect(int a);
void arm(int a);
int main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    prime(a);
    perfect(a);
    arm(a);
    
    return 0;
}
int prime(int a){
    int k=0;
    for(int i=2;i<=a/2;++i){
        if(a%i==0){
          return printf("%d is not Prime\n",a);
          
        }
    }
    return printf("%d is Prime\n",a);
}
void perfect(int a){
    int sum = 0;
    for(int i=1;i<=a/2;++i){
        if(a%i==0){
          sum = sum + i;
        }
    }
    sum==a?printf("%d is a Perfect number\n",a):printf("%d is not a Perfect number\n",a);
}
void arm(int a){
    int k=log10(a) + 1,temp,sum=0;
    int n=a;
    for(int i=10;n>0;n/=10){
        temp = n%i;
        sum = sum + pow(temp,k);
    }
    a==sum?printf("%d is an Armstrong Number",a):printf("%d is not an Armstrong Number",a);
}

