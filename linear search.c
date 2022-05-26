#include <stdio.h>
#define size 10000
int main(){
    int arr[size],n,num,a,l,k=0,i;
    printf("How many elements you want in the array :");
    scanf("%d",&n);
    n = n-1;
    for(int i=0;i<=n;++i){
        printf("Enter element no. %d :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Which element you want to find out in the array :");
    scanf("%d",&num);
    for( i=0;i<=n;++i){
        if(arr[i]==num){
            printf("found");
            break;
        }
    }
    if(i>n){
        printf("Not found");
    }
    return 0;
}