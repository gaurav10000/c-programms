/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>
#define size 10000
int main()
{
    char str[size];
    int i;
    printf("Enter a string:");
    fgets(str,sizeof(str),stdin);
    for(i=0;str[i];++i){
        
    }
    printf("Lenth of te string is : %d",i-1);

    return 0;
}
