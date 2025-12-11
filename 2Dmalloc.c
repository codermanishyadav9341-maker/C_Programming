#include<stdio.h>
#include<stdlib.h>
    int main(){

        int rows;
        printf("Rows: ");
        scanf("%d",&rows);

        int columns;
        printf("Columns: ");
        scanf("%d",&columns);

        int **arr = (int**) malloc(rows*sizeof(int*));

        for(int i = 0; i<columns; i++){
            arr[i] = (int*) malloc(columns*sizeof(int));
        }

        printf("Enter your matrix elements: \n");

        for(int i = 0; i<rows; i++){
            for(int j = 0; j<columns; j++){
              //  arr[i][j] = i+j+1;
              scanf("%d",&arr[i][j]);
            }
        }

        printf("Matrixs: \n");

        for(int i = 0; i<rows; i++){
            for(int j = 0; j<columns; j++){

                printf("%d  ",arr[i][j]);

            }

            printf("\n");
        }

        
        return 0;
    }