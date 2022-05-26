/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    // int size = 10;
    int ar[10]/*={9,8,7,6,5,4,3,2,1,0}*/,b[10]={0};
    for(int i=0;i<10;++i){
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<10;++i){
        ++b[ar[i]];
    }
    
    for(int i=0;i<10;++i){
        printf("%d : %d\n",i,b[i]);
    }

    return 0;
}
