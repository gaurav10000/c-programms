


#include <stdio.h>
void bill();
int main()
{
    bill();
    return 0;
}
void bill(){
    float charge,tcharge;
    int units;
    printf("Enter Electricity units consumed :");
    scanf("%d",&units);
    if(units<=100){
        charge = units * 2.00;
    }
    else if(units>100&&units<201){
        charge = (units-100) * 3.50 + 100*2.00;
    }
    else if(units>200){
        charge = (units-200) * 4.50 + 100*3.50 + 100*2.00;
    }
    tcharge = charge + 0.1*charge;
    printf("Amount due is %.2f",tcharge);
}
