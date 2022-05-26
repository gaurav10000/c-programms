#include<stdio.h>
void strong(int , int);
void main(){
    int a,z;
    printf("Enter interval between which you want to identify strong numbers seperated by comma:");
    scanf("%d,%d",&a,&z);
    strong(a,z);
    
}
void strong(int a, int z){
    int k=1,sum = 0;
    for(int i=a+1;i<z;++i){
        for(int j=i;j>0;j/=10){
           for(int l=j%10;l>0;--l){
               k = k*l;
           }
           sum = sum + k;
           k=1;
        }
        if(sum==i)
        printf("%d is Strong Number.\n",i);
        sum = 0;
    }
}