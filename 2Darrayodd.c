#include<stdio.h>
  int main(){

    int rows;
    int columns;
    int ocount = 0;

    printf("Rows");
    scanf("%d",&rows);

    printf("Columns");
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
            if(arr[i][j]%2==1){
                 ocount++;
            }
            
        }
    }
    printf("odd = %d\n",ocount);
  
    return 0;
  }