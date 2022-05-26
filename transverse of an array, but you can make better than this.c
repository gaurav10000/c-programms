#include <stdio.h>

int main()
{
    int i,j,p,q;
    
    scanf("%d%d",&i,&j);
    int a[i][j],b[j][i];
    for(int x=0;x<i;++x){
        for(int y=0;y<j;++y){
            scanf("%d",&a[x][y]);
        }
        printf("\n");
    }
    for(int x=0;x<i;++x){
        for(int y=0;y<j;++y){
            b[y][x]=a[x][y];
        }
    }
    for(int x=0;x<j;++x){
        for(int y=0;y<i;++y){
            printf("%d  ",b[x][y]);
        }
        printf("\n");
    }

    return 0;
}
