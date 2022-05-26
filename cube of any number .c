#include<stdio.h>
float cube(float );
int main(){
    float a;
    printf("Enter number :");
    scanf("%f",&a);
    printf("Cube of %f is %f",a,cube(a));
    return 0;
}
float cube(float a){
    float c;
    c = a*a*a;
    return c;
}