/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
// #define marks 20
int main()
{
    long n,a,b=0,n1;
    scanf("%ld",&n);
    n1=n;
    while(n>0){
        a=n%10;
        b=10*b+a;
        n/=10;
    }
    printf("%ld\n",b);
    n1==b?printf("Nummber is palindorme"):printf("Number is not a palindrome");

    return 0;
}
