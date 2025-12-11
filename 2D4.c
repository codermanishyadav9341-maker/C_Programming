#include<stdio.h>
      
   int main(){

    int rows;
    int columns;

    int equall = 1;

    printf("Rows: \n");
    scanf("%d",&rows);

    printf("Columns: \n");
    scanf("%d",&columns);


    int matrix1[rows][columns];
    int matrix2[rows][columns];

    printf("Enter your matrix: \n");

    
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            scanf("%d",&matrix1[i][j]);
            scanf("%d",&matrix2[i][j]);
        }
    }

     for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){

            if(matrix1[i][j]!=matrix2[i][j] ){

                equall = 0;
                break;

            }
        }
    }

    if(equall){
        printf("matrix are euall: \n");
    }
    else{
        printf("matrix are not equall: \n");
    }




    return 0;
   }