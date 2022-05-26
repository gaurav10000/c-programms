
#include <stdio.h>
#define size 1000
int main()
{
    char a[size] , b[size],k;
    printf("Enter string 1 :");
    fgets(a,sizeof(a),stdin);
    printf("Enter string 2 :");
    fgets(b,sizeof(b),stdin);
    for(int i=0;a[i];++i){
        if(a[i]!=b[i]){
            k=1;
            printf("strings are not same!");
            break;
        }
    }
    if(k!=1)
    printf("both strings are same!");
    
    
    

    return 0;
}
