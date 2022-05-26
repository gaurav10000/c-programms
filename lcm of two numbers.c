/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int a,b;
    printf("Enter value a and b respectively such that b>a:");
    scanf("%d%d",&a,&b);
    for(int i=1;i<=a;++i){
        if((b*i)%a==0){
            printf("%d is the lcm of %d and %d",(b*i),a,b);
            break;
        }
    }

    return 0;
}
