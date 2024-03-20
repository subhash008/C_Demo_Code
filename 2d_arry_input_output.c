#include<stdio.h>
void main(){

    int row,col, arr[50][50];
    printf("enter the no of rows: \n");
    scanf("%d",&row);
    printf("enter the no of col: \n");
    scanf("%d",&col);
    int i,j;
    for(i=0;i<row;i++){
        printf("enter the %d  row :\n",i+1);
        for(j=0;j<col;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the matrix is :\n\n");
    for(i=0;i<row;i++){
        //printf("enter the %d  row :\n",i+1);
        for(j=0;j<col;j++){
            printf("%d\t",arr[i][j]);
        }
        printf("\n");
    }
}