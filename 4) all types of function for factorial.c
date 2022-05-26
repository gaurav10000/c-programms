
#include <stdio.h>
long long int f1(int);
void f2(int );
long long int f3();
void f4();
int main()
{
    int x;
    printf("please enter a number to get its factorial:");
    scanf("%d",&x);
    printf("(Both argument and return)Factorial of %d is %lld\n\n",x,f1(x));
    f2(x);
    printf("Factorial of %d is %lld\n\n",x,f3());// this print is for f2
    f4();
    

    return 0;
}
long long int f1(int a){
    long long int fact = 1;
    for(int i=a;i>0;--i){
        fact*=i;
    }
    return fact;
}
void f2(int a){
    long long int fact = 1;
    for(int i=a;i>0;--i){
        fact*=i;
    }
    printf("(argument but no return type)Factorial of %d is %lld\n\n",a,fact);
}
long long int f3(){
    int x;
    printf("Please give a digit for factorial\n This will be done by no argument but return function.\n\n");
    scanf("%d",&x);
    long long int fact = 1;
    for(int i=x;i>0;--i){
        fact*=i;
    }
    return fact;
}
void f4(){
    int x;
    printf("Please give a digit for factorial\n This will be dine by no argument no return function.\n\n");
    scanf("%d",&x);
    long long int fact = 1;
    for(int i=x;i>0;--i){
        fact*=i;
    }
    printf("Factorial of %d is %lld\n\n",x,fact);
    
}