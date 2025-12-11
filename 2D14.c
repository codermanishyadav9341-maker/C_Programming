#include<stdio.h>
    int main(){

        int rows;
        int columns;

        printf("Rows: \n");
        scanf("%d",&rows);

        printf("Columns: \n");
        scanf("%d",&columns);

        int arr[rows][columns];

        printf("Enter your Array(i*j): \n");

        for(int i = 0; i<rows; i++){
            for(int j = 0; j<columns; j++){
                scanf("%d",&arr[i][j]);
            }
        }

                for(int i = 0; i<rows; i++){
            for(int j = 0; j<columns; j++){
        printf("Index = %d\n",arr[i][j]);

            }
        }
        return 0;
    }