#include<stdio.h>
  int main(){

    int rows;
    int columns;
    int sum = 0;

    printf("Rows: \n");
    scanf("%d",&rows);

    printf("Columns: \n");
    scanf("%d",&columns);

    int arr[rows][columns];
   // int arr2[rows][columns];

    printf("Enter your first array matrix: \n");

    for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("First matrixs: \n");

     for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){

            printf("%d  ",arr[i][j]);

        }
        printf("\n");
    }

    printf("Enter your second array matrix: \n");

    for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Second matrix: \n");

     for(int i = 1; i<rows; i++){
        for(int j = 1; j<columns; j++){
            printf("%d  ",arr[i][j]);
        }
        printf("\n");


    }

    printf("Sum of two matrix: \n");


     for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            sum = arr[i][j][i][j];
        }
    }

    printf("Matrixs:  \n");


     for(int i = 0; i<rows; i++){ 

        for(int j = 0; j<columns; j++){
            printf("%d  ",sum);
        }
        printf("\n");
    }




   

    return 0;
  }