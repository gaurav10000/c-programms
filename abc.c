
#include <stdio.h>
void check();
int main()
{
    int arr[10];
    for(int i=0;i<10;++i){
        scanf("%d",&arr[i]);
        check(arr[i]);
    }
    return 0;
}
void check(int num){
    if(num%2==0){
        printf("%d is even\n",num);
    }
    else{
        printf("%d is odd\n",num);
    }
}
