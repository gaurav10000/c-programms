/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, PHP, Ruby, 
C#, VB, Perl, Swift, Prolog, Javascript, Pascal, HTML, CSS, JS
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main()
{
    float b;
    char a;
    printf("Please enter initial of vechile name in small letters followed by a comma and then hours of parking:");
    scanf("%c,%f",&a,&b);
    switch(a){
        case 'b':;
        case 't':printf("charges for parking : %f",b*20);break;
        case 'c':printf("charges for parking : %f",b*10);break;
        case 'm':;
        case 's':printf("charges for parking : %f",b*5);
    }
    

    return 0;
}
