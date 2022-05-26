#include<stdio.h>
int evenodd(int);
int main(){
    int a;
    printf("Enter a number :");
    scanf("%d",&a);
    evenodd(a);
    
    return 0;
}
int evenodd(int a){
    return a%2==0?printf("Even"):printf("Odd");
}

