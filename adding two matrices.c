/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    int ar[3][3],arr[3][3];
    printf("Enter matrices 1 values:\n");
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            scanf("%d",&ar[i][j]);
        }
        printf("\n");
    }
    printf("Enter matrices 2 values:\n");
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            scanf("%d",&arr[i][j]);
        }
        printf("\n");
    }
    printf("sum of two matrices is:\n");
    for(int i=0;i<3;++i){
        for(int j=0;j<3;++j){
            printf("%d\t",ar[i][j]+arr[i][j]);
        }
        printf("\n");
    }
    

    return 0;
}
