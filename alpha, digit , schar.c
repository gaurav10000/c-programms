
#include <stdio.h>
#define size 10000
int main()
{
    char arr[size];
    int digit = 0 , alphabet = 0 , schar = 0;
    printf("Enter a string :");
    fgets(arr,sizeof(arr),stdin);
    for(int i=0;arr[i];++i){
        if(arr[i]>=48&&arr[i]<=57)
        ++digit;
        if((arr[i]>=65&&arr[i]<=90)||(arr[i]>=97&&arr[i]<=122))
        ++alphabet;
        else
        ++schar;
        }
        printf("Number of alphabet in the string is : %d\n",alphabet);
        printf("Number of digits in the string is : %d\n",digit);
        printf("Number of special character in the string is : %d\n",schar);

    return 0;
}
