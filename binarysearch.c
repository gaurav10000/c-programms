#include <stdio.h>
#define size 10000
int main(){
    int arr[size],n,num,a,l,k=0;
    printf("How many elements you want in the array :");
    scanf("%d",&n);
    n = n-1;
    for(int i=0;i<=n;++i){
        printf("Enter element no. %d :",i+1);
        scanf("%d",&arr[i]);
    }
    printf("Which element you want to find out in the array :");
    scanf("%d",&num);
    a = 0;
    l = n;
    for(int i=n/2;5;){

        if(arr[i]==num){
            printf("Yes element is in array at position %d",i+1);
            break;
        }
        else{
            if(num<arr[i]){
                l = i-1;
                i = (a+l)/2;
                if(a==l||a>l){
                    if(arr[i]==num){
                        printf("Yes element is in array at position %d",i+1);
                    }
                    else{
                        printf("Not found!");
                        break;
                    }
                }
                continue;
            }
            else{
                a = i + 1;
                i = (a+l)/2;
                if(a==l||a>l){
                    if(arr[i]==num){
                        printf("Yes element is in array at position %d",i+1);
                    }
                    else{
                        printf("Not found!");
                        break;
                    }
                }
                continue;
            }

        }
        }
    
    return 0;
}
