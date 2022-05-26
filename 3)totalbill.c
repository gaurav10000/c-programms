
#include <stdio.h>
float tbill();
int main()
{
    int x;
    printf("Please enter meal cost:");
    scanf("%d",&x);
    printf("Total  bill  is %.2f",tbill(x));
    
    

    return 0;
}
float tbill(int a){
    float c,d;
    c = a + (0.2*a);
    d = c + (0.15*c);
    return d;
}
