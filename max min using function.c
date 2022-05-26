#include<stdio.h>
float max(float,float);
float min(float,float);
int main(){
    float a,b;
    printf("Enter two numbers :");
    scanf("%f,%f",&a,&b);
    printf("max is %f\n",max(a,b));
    printf("min is %f\n",min(a,b));
    return 0;
}
float max(float a,float b){
    return a>b?a:b;
}
float min(float a,float b){
    
    return a<b?a:b;
}
