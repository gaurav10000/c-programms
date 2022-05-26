
#include <stdio.h>

int main()
{
    int n,arr[15],i=0,j;
    scanf("%d",&n);
    while(n>0){
        arr[i]=n%2;
        n/=2;
        i++;
    }
    printf("Binary number is : ");
    for(j=i-1;j>=0;j--){
        printf("%d",arr[j]);
    }
    printf("\n");
    
    
    

    return 0;
}
