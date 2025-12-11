#include<stdio.h>
   int main(){

    int rows;
    int columns;
    int num;

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
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){

            if(arr[i][j]==num){
                printf("Index = [%d , %d]",i,j);
            }
        }
        printf("not number found: \n");
    }
    return 0;
   }