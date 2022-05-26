#include<stdio.h>
void prime(int , int);
void main(){
    int a,z;
    printf("Enter interval between which you want to identify prime numbers seperated by comma:");
    scanf("%d,%d",&a,&z);
    prime(a,z);
    
}
void prime(int a, int z){
    int k=1;
    for(int i=a+1;i<z;++i,k=1){
        for(int j=2;j<=i/2;++j){
            if(i%j==0){
                k=0;
                break;
            }
            
        }
        if(k==1)
        printf("%d is Prime.\n",i);
    }
}