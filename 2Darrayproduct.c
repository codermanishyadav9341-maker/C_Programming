#include<stdio.h>
  int main(){

    int rows;
    int columns;
    int product = 1;

    printf("Rows");
    scanf("%d",&rows);

    printf("Columns");
    scanf("%d",&columns);

    int arr[rows][columns];

    printf("Enter your Array elements: \n");

    for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            scanf("%d",&arr[i][j]);
        }

    }
    printf("Array elements");
            for(int i = 0; i<rows; i++){
               for(int j = 0; j<columns; j++){
                product*=arr[i][j];
               }
            }

            printf("product of all elements = %d",product);

    return 0;
  }