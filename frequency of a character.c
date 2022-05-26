
#include <stdio.h>
#define size 10000
int main()
{
    char arr[size],c;
    int d,f[128]={0};
    printf("Enter a string :");
    fgets(arr,sizeof(arr),stdin);
    printf("Enter the charcter :");
    scanf("%c",&c);
    d = c;
    for(int i=0;arr[i];++i){
        if(arr[i]==c){
            ++f[d];
        }
    }
    printf("Frequency of %c in the string is %d",c,f[d]);

    return 0;
}
