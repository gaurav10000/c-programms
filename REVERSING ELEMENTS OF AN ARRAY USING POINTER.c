
#include <stdio.h>

int main()
{
    int arr[1000] , size , temp;
    printf("Enter size of array: ");
    scanf("%d",&size);
    // printf("Enter elements of array: ");
    for(int i=0;i<size;++i){
        printf("Enter element %d of array: ",i);
        scanf("%d",&arr[i]);
    }
    int *f = &arr[0] , *l = &arr[size-1];
    for(int i=0;i<(size/2);++i){
        int *f = &arr[i] , *l = &arr[size-1-i];
        temp = *f;
        *f = *l;
        *l = temp;
    }
    for(int i=0;i<size;++i){
        printf("%d",arr[i]);
    }

    return 0;
}
