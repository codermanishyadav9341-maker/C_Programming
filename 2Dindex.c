#include<stdio.h>
  int main(){

    int rows;
    int columns;
    int num;
    int flag = 1;

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

    printf("Array elements: \n");

    scanf("%d",&num);

    for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            if(arr[i][j] == num){
                printf("Index = [%d , %d]\n ",arr[i][j]);
                int flag = 1;
                break;
            }
        }

        if(flag){
        break;
        }
    }
    if(!flag){
        printf("Element are not found: \n");
    }

    return 0;
  }