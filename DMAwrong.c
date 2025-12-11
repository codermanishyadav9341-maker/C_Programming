#include<stdio.h>
#include<stdlib.h>
   int main(){

    int rows;
    printf("Rows: ");
    scanf("%d",&rows);

    int columns;
    printf("Columns: ");
    scanf("%d",&columns);

    int **arr;

    arr = (int**) calloc(rows,sizeof(int*));

    for(int i = 0; i<rows; i++){
        arr[i] = (int*) calloc(columns,sizeof(int));
    }

    printf("Enter your matrixs elements: \n");
         for(int i = 0; i<rows; i++){
            for(int j = 0; j<columns; j++){
                scanf("%d",&arr[i][j]);
            }
         }

         printf("Matrixs: \n");

         for(int i = 0; i<rows; i++){
            for(int j = 0; j<columns; j++){
                printf("%d ",arr[i][j]);
            }
            printf("\n");
         }

         int newcolumns;
         printf("Columns: ");
         scanf("%d",&newcolumns);

        arr = (int**) realloc(arr,newcolumns*sizeof(int*));

         for(int i = columns; i<newcolumns; i++){
            arr[i] = (int*) malloc(rows*sizeof(int));
            
         }

            for(int i = 0; i<rows; i++){
               for(int j = columns; j<newcolumns; j++){
                 scanf("%d",&arr[i][j]);
               }
            }
              
            

         printf("Resize matrixs: \n");

         for(int i = 0; i<rows; i++){
            for(int j = 0; j<newcolumns; j++){
                printf("%d  ",arr[i][j]);
            }
            printf("\n");
         }
    return 0;
        }