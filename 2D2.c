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

    printf("Enter your array: \n");

     for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){

            scanf("%d",&arr[i][j]);

        }
    }

    printf("Array elements:  \n");

     for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){

            sum+=arr[i][j];

        }
    }
    printf(" sum = %d\n",sum);

    return 0;
  }