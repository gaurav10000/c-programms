#include <stdio.h>
int main()
{
    int i,j,p,q,sum = 0;
    for(int a=1;a>0;++a){
        printf("Enter row and column of 1st and 2nd matrix:");
        scanf("%d%d%d%d",&i,&j,&p,&q);
        if(j!=p){
            printf("Since column of 1st matrice is not equal to row of 2nd matrice, you can't multiply them. Try again!\n");
            continue;
        }
        else
        break;
    }
    int a[i][j],b[p][q],c[i][q];
    printf("Enter elements of 1st matrix :\n");
    for(int x=0;x<i;++x){
        for(int y=0;y<j;++y){
            printf("Enter value of a[%d][%d] element:",x,y);
            scanf("%d",&a[x][y]);
        }
        printf("\n");
    }
    printf("Enter elements of 2nd matrix :\n");
    for(int x=0;x<p;++x){
        for(int y=0;y<q;++y){
            printf("Enter value of b[%d][%d] element:",x,y);
            scanf("%d",&b[x][y]);
        }
        printf("\n");
    }
    
    for(int z=0;z<i;++z){
        for(int x=0;x<q;++x){
            for(int y=0;y<p;++y){
                sum = sum + a[z][y]*b[y][x];
            }
            c[z][x] = sum;
            sum = 0;
        }
    }
    for(int a=0;a<i;++a){
        for(int b=0;b<q;++b){
            printf("%d  ",c[a][b]);
        }
        printf("\n");
    }
    return 0;
}
