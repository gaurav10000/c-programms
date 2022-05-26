#include <stdio.h>
#define size 10
int main()
{
    int ar[size];
    int k,small;
    for(int x=0;x<size;++x){
        scanf("%d",&ar[x]);
    }
    
    for(int i=0;i<size;++i){
        small=ar[i];
        k=i;
        for(int j=(i+1);j<size;++j){
            if(small>ar[j]){
                small=ar[j];
                k=j;
            }
        }
        ar[k]=ar[i];
        ar[i]=small;
    }
    for(int x=0;x<size;++x){
        printf("%d ",ar[x]);
    }

    return 0;
}
