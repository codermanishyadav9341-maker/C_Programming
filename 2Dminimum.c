#include<stdio.h>
  int main(){

    int rows;
    int columns;
    int max;
    int min;

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

    printf("Matrix: \n");
     for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            printf("%d   ",arr[i][j]);
        }
        printf("\n");
    }
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            if(arr[i][j]>max){
        }
    }
    }
    if(arr[i][j]>max){
        printf("%d ",max);
    }
    else{
        printf("%d ",min);
    }

    return 0;
  }