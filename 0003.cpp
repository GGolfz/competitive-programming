#include "stdio.h"
int main() {
    int x,y;
    int k,i,j;
    scanf("%d %d",&x,&y);
    int matrix[2][x][y];
    for(k=0;k<2;k++){
        for(i=0;i<x;i++){
            for(j=0;j<y;j++){
                scanf("%d",&matrix[k][i][j]);
            }
        }
    }
    for(i=0;i<x;i++){
        for(j=0;j<y;j++){
            printf("%d ",matrix[0][i][j]+matrix[1][i][j]);
        }
        printf("\n");
    }    
    return 0;
}