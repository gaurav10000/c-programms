#include<stdio.h>
#define pi 3.14
float dia(float);
float area(float);
float circum(float);
int main(){
    float a;
    printf("Enter radius :");
    scanf("%f",&a);
    printf("Diameter,Circumference and Area of circle of radius %f are %f , %f , %f",a,dia(a),circum(a),area(a));
    return 0;
}
float dia(float a){
    float d;
    d = 2*a;
    return d;
}
float circum(float a){
    float c;
    c = 2*pi*a;
    return c;
}
float area(float a){
    float area;
    
    area = 2*a*a*pi;
    return area;
}
