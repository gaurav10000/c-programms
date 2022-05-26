
#include <stdio.h>
#include <math.h>
void palind();
int main()
{
    int num;
    printf("Enter a number:");
    scanf("%d",&num);
    palind(num);

    return 0;
}
void palind(int num){
    int n,reverse = 0;
    n = log10(num) + 1;
    for(int i=1,num1 = num;i<=n;++i,num1 = num1/10){
        reverse = reverse*10 + num1%10;
    }
    if(reverse == num){
        printf("%d is a palindrome number,its reverse is %d",num,reverse);
    }
    else{
        printf("%d is not a palindrome number,its reverse is %d",num,reverse);
    }
    
}
