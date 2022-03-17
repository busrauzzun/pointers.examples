#include <stdio.h>
#include <stdlib.h>

int main(){

    int row,column;
    int i,j;
    int **matrix;

    printf("Enter number of rows\n");
    scanf("%d",&row);
    printf("Enter number of column\n");
    scanf("%d",&column);

    matrix=(int**)calloc(row,sizeof(int));

    for(i=0;i<row;i++){
        matrix[i]=(int*)calloc(column,sizeof(int));
        for(j=0;j<column;j++){
            scanf("%d",&(matrix[i][j]));

        }
    }
    for(i=0;i<row;i++){
        for(j=0;j<column;j++){
            printf("%3d",matrix[i][j]);
        }
        printf("\n");
    }
    return 0;
}