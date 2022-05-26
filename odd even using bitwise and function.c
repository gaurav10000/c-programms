/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
void test();
int main()
{
    int num;
    scanf("%d",&num);
    test(num);

    return 0;
}
void test(int num){
    if(num&1)
    printf("%d is odd",num);
    else
    printf("%d is even",num);
}
