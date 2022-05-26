
#include <stdio.h>
void prime();
int main()
{
    int num;
    scanf("%d",&num);
    prime(num);

    return 0;
}
void prime(int num){
    int i;
    for(i=2;i<=(num/2);++i){
        if(num%i==0){
            printf("%d is not a prime number ",num);
            break;
        }
    }
    if(i>(num/2))
    printf("%d is a prime number",num);
}
