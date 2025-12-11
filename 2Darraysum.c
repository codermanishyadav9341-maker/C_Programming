#include<stdio.h>
  int main(){
    int rows;
    int columns;
    int sum = 0;

    printf("Rows");
    scanf("%d",&rows);

    printf("Columns");
    scanf("%d",&columns);

    int arr[rows][columns];

    printf("Enter your array: \n");

    for(int i =0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            scanf("%d",&arr[i][j]);
        }

    }
     for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            sum += arr[i][j];
        }
        
    }
            printf("sum of all elements = %d",sum);

    return 0;
  }