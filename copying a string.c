
#include <stdio.h>
#define size 1000
int main()
{
    char a[size] , b[size],k,i;
    printf("Enter string 1 :");
    fgets(a,sizeof(a),stdin);
    for(i=0;a[i];++i){
        b[i]=a[i];
    }
    printf("%s",b);
    
    
    

    return 0;
}
