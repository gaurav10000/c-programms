#include <stdio.h>
int main()
{
    int ar[11];// jitne elements ho arry mai to be sorted usse atleast 1 zayada ka space hona chahiye array ka nahi to stack smashing ka error aa jaa raha hai
    // stack smashing ka error ek aur case mai nahi aata jab array already sorted ho even though size of array is equal to number of elements in array. 
    for(int i=0;i<10;++i){
        scanf("%d",&ar[i]);
    }
    for(int i=0;i<10;++i){
        for(int i=0;i<10;++i){
            if(ar[i]>ar[i+1]){
            ar[i]=ar[i]+ar[i+1];
            ar[i+1]=ar[i]-ar[i+1];
            ar[i]=ar[i]-ar[i+1];
            }
        }
    }
    
    for(int i=0;i<10;++i){
        printf("%d ",ar[i]);
    }

    return 0;
}
