#include<stdio.h>
  int main(){
    int rows;
    int columns;
    

    printf("Rows");
    scanf("%d",&rows);

    printf("Columns");
    scanf("%d",&columns);

    int arr[rows] [columns];

    printf("Enter your elements:");

    for(int i = 0; i<rows; i++){    //rows

        for(int j = 0; j<columns; j++){    //columns
            scanf("%d",&arr[rows][columns]);
            
        }

    }
    for(int i = 0; i<rows; i++){    //rows
        for(int j = 0; j<columns; j++){    //columns
          
            printf("%d    ",arr[rows][columns]);
        }
        printf("\n");
    }


    return 0;
  }