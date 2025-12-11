// #include<stdio.h>
//     int main(){

//         int rows;
//         printf("Rows: ");
//         scanf("%d",&rows);

//         int columns;
//         printf("Columns: ");
//         scanf("%d",&columns);

//         int arr[rows][columns];
//         int sum = 0;

//         printf("Enter your Array elements: \n");

//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 scanf("%d",&arr[i][j]);
//             }
//         }

//         printf("Matrixs : \n");

//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 printf("%d ",arr[i][j]);
//             }

//             printf("\n");
//         }




//         return 0;
//     }


// #include<stdio.h>
//     int main(){

//         int rows;
//         printf("Rows: ");
//         scanf("%d",&rows);

//         int columns;
//         printf("Columns: ");
//         scanf("%d",&columns);

//         int arr[rows][columns];
//         int sum = 0;

//         printf("Enter your Array elements: \n");

//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 scanf("%d",&arr[i][j]);
//             }
//         }

//         printf("Matrixs: \n");

//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 printf("%d ",arr[i][j]);
//             }

//             printf("\n");
//         }

//         printf("Sum of all elements: \n");

//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){

//                 sum += arr[i][j];

//             }
//         }

//         printf("Sum = %d",sum);

//         return 0;
//     }



// #include<stdio.h>
//     int main(){

//         int rows;
//         printf("Rows: ");
//         scanf("%d",&rows);

//         int columns;
//         printf("Columns: ");
//         scanf("%d",&columns);

//         int arr[rows][columns];
//            int product = 1;

//         printf("Enter your Array elements: \n");

//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 scanf("%d",&arr[i][j]);
//             }
//         }

//         printf("Matrix: \n");

//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 printf("%d ",arr[i][j]);
//             }

//             printf("\n");

//         }

//         printf("Product:- ");

//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){

//                 product *= arr[i][j];
//             }
//         }

//         printf("%d",product);

//         return 0;
//     }


// #include<stdio.h>
//     int main(){

//         int rows;
//         printf("Rows: ");
//         scanf("%d",&rows);

//         int columns;
//         printf("Columns: ");
//         scanf("%d",&columns);

//         int arr1[rows][columns];
//         int arr2[rows][columns];
//         int flag = 0;

//         printf("Enter your first elements: \n");

//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 scanf("%d",&arr1[i][j]);
//             }
//         }

//         printf("First Matrixs: \n");

//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 printf("%d ",arr1[i][j]);
//             }

//             printf("\n");

//         }

//         printf("Enter your second elements: \n");

//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 scanf("%d",&arr2[i][j]);
//             }
//         }

//         printf("Second Matrixs: \n");

//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 printf("%d ",arr2[i][j]);
//             }

//             printf("\n");

//         }

//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 if(arr1[i][j] == arr2[i][j]){
//                     flag = 1;
//                     break;
//                 }
                
//             }
//         }

//         if(flag == 1){
//             printf("Matrixs are equall: ");
//         }
//         else if(flag != 0){
//             printf("Matrix are not equall: ");
//         }



//         return 0;
//     }


// #include<stdio.h>
//    int main(){

//     int rows;
//     printf("Rows: ");
//     scanf("%d",&rows);

//     int columns;
//     printf("Columns: ");
//     scanf("%d",&columns);

//     int arr[rows][columns];
//     int max;
//     int maxRows;
//     int maxColumns;

//     int min;
//     int minRows;
//     int minColumns;

//     printf("Enter your elements: \n");

//     for(int i = 0; i<rows; i++){
//         for(int j = 0; j<columns; j++){

//         scanf("%d",&arr[i][j]);

//         }
//     }

//     printf("Matrixs: \n");

//     for(int i = 0; i<rows; i++){
//         for(int j = 0; j<columns; j++){
//             printf("%d ",arr[i][j]);
//         }

//         printf("\n");
//     }

//     for(int i = 0; i<rows; i++){
//         for(int j = 0; j<columns; j++){
//             if(arr[i][j] > max){
//                 max = arr[i][j];
//                 maxRows = i;
//                 maxColumns = j;
//             }
//             if(arr[i][j]  < min){
//                 min = arr[i][j];
//                 minRows = i;
//                 minColumns = j;
//             }
//         }
//     }

//     printf("Maximum num =  %d\n",max,maxRows,maxColumns);

//     printf("Minimum num = %d\n",min,minRows,minColumns);

//     return 0;
//    }

//   Q :- elements counts;

// #include<stdio.h>
//     int main(){

//         int rows;
//         printf("Rows: ");
//         scanf("%d",&rows);

//         int columns;
//         printf("Columns: ");
//         scanf("%d",&columns);

//         int arr1[rows][columns];
//         int arr2[rows][columns];
//         int sum = 0;

//         printf("Enter your first elements: \n");

//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 scanf("%d",&arr1[i][j]);
//             }
//         }

//         printf("First matrixs: \n");

//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 printf("%d ",arr1[i][j]);
//             }
//             printf("\n");
//         }


//         printf("Enter your second elements: \n");

//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 scanf("%d",&arr2[i][j]);
//             }
//         }

//         printf("Second Matrixs: \n");

//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 printf("%d ",arr2[i][j]);
//             }
//             printf("\n");
//         }

//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 sum = arr1[i][j] + arr2[i][j];
//             }
//         }

//         printf("%d ",sum);

//         return 0;
//     }

// #include<stdio.h>
//      int main(){

//         int rows;
//         printf("Rows: ");
//         scanf("%d",&rows);

//         int columns;
//         printf("Columns: ");
//         scanf("%d",&columns);

//         int arr1[rows][columns];
//         int arr2[rows][columns];
//         int sum[rows][columns];

//         printf("Enter your first elements: \n");

//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 scanf("%d",&arr1[i][j]);
//             }
//         }

//         printf("first elements: \n");

//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 printf("%d ",arr1[i][j]);
//             }
//             printf("\n");
//         }

//         printf("Enter your second elements: \n");

//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 scanf("%d",&arr2[i][j]);
//             }
//         }

//         printf("Second matrix: \n");

//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 printf("%d ",arr2[i][j]);
//             }
//             printf("\n");
//         }

//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 sum[i][j] = arr1[i][j] + arr2[i][j];
//             }
//         }

//         printf("Sum of two matrixs: \n");

//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 printf("%d ",sum[i][j]);
//             }

//             printf("\n");

//         }

//         return 0;
//      }

//   Questions: - cross adding;


 #include<stdio.h>
   int main(){

    int rows;
    printf("Rows: ");
    scanf("%d",&rows);

    int columns;
    printf("Columns: ");
    scanf("%d",&columns);

    int arr[rows][columns];
    
    int i;

    printf("Enter your elements: \n");

    for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            scanf("%d",&arr[i][j]);
        }
    }

    printf("Matrixs: \n");

    for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }

    int rowsum = 0;
    
    for(int i = 0; i<rows; i++){
        for(int j = 0; j<columns; j++){
            rowsum += arr[i][j];
            i++;
        }
    }

    printf("%d ",rowsum);


     return 0;

   }