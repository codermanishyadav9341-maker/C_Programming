// #include<stdio.h>
//     int main(){

//         int size;
//         printf("Size: ");
//         scanf("%d",&size);

//         int arr[size];
//         int product = 1;

//         printf("Enter your Array elements: \n");
           
//             for(int i = 0; i<size; i++){
//                 scanf("%d",&arr[i]);
//             }

//             printf("Array elements:- ");
//             for(int i = 0; i<size; i++){
//                 printf("%d ",arr[i]);
//             }

//             printf("\n");

//             printf("Product:- ");
//             for(int i = 0; i<size; i++){ 
//                product *= arr[i];
//             }
//             printf("%d ",product);

//         return 0;
//     }


// #include<stdio.h>
//      int main(){

//         int size;
//         printf("Size: ");
//         scanf("%d",&size);

//         int arr[size];

//         printf("Enter your Array elements: ");

//             for(int i = 0; i<size; i++){
//                 scanf("%d",&arr[i]);
//             }

//            int sumEven = 0;
//            int sumOdd = 0;
//            int countEven = 0;
//            int countOdd = 0;

//            for(int i = 0; i<size; i++){
//             if(arr[i]%2==0){
//                 sumEven += arr[i];
//                 countEven++;

//             }
//             else{
//                 sumOdd += arr[i];
//                 countEven++;

//             }

//             printf("Even = %d",sumEven);

//            }
//         return 0;
//      }


// #include<stdio.h>
//    int main(){

//     int rows;
//     int columns;

//     printf("Rows: ");
//     scanf("%d",&rows);

//     printf("Columns: ");
//     scanf("%d",&columns);

//     int matrixs[rows][columns];

//     printf("Enter your matrixs elements: \n");

//       for(int i = 0; i<rows; i++){
//         for(int j = 0; j<columns; j++){
//             scanf("%d",&matrixs[i][j]);
//         }
//       }

//       printf("Matrixs:- \n");

//       for(int i = 0; i<rows; i++){
//         for(int j = 0; j<columns; j++){
//             printf("%d ",matrixs[i][j]);
//         }
//         printf("\n");
//       }
//     return 0;
//    }


// #include<stdio.h>
//     int main(){

//         int rows;
//         int columns;

//         printf("Rows: ");
//         scanf("%d",&rows);

//         printf("Columns: ");
//         scanf("%d",&columns);

//         int matrixs[rows][columns];
//         int sum = 0;

//         printf("Enter your matrixs elements: \n");

//            for(int i = 0; i<rows; i++){
//                 for(int j = 0; j<columns; j++){
//                     scanf("%d",&matrixs[i][j]);
//                 }
//            }

//            printf("Matrixs:- \n");

//            for(int i = 0; i<rows; i++){
//               for(int j = 0; j<columns; j++){
//                 printf("%d ",matrixs[i][j]);
//               }
//               printf("\n");
//            }

//            printf("Sum of matrixs:- ");
//            for(int i = 0; i<rows; i++){
//                for(int j = 0; j<columns; j++){
//                 sum += matrixs[i][j];
//                }
//            }

//            printf("%d",sum);

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

//         int matrixs[rows][columns];
//         int product = 1;

//         printf("Enter your matrixs elements: \n");

//           for(int i = 0; i<rows; i++){
//               for(int j = 0; j<columns; j++){
//                 scanf("%d",&matrixs[i][j]);
//               }
//           }

//           printf("Matrixs:- \n");

//           for(int i = 0; i<rows; i++){
//              for(int j = 0; j<columns; j++){
//                 printf("%d ",matrixs[i][j]);
//              }
//              printf("\n");
//           }

//           printf("Products:- ");

//           for(int i = 0; i<rows; i++){
//               for(int j = 0; j<columns; j++){
//                 product *= matrixs[i][j];
//               }
//           }

//           printf("%d",product);

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

//     int matrixs1[rows][columns];
//     int flag = 1;

//     printf("Enter your first matrixs elements: \n");
       
//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 scanf("%d",&matrixs1[i][j]);
//             }
//         }

//         printf("First matrixs elements: \n");

//            for(int i = 0; i<rows; i++){
//               for(int j = 0; j<columns; j++){
//                 printf("%d ",matrixs1[i][j]);
//               }
//               printf("\n");
//            }

//            int matrixs2[rows][columns];

//            printf("Enter your second matrixs elements: \n");

//              for(int i = 0; i<rows; i++){
//                 for(int j = 0; j<columns; j++){
//                     scanf("%d",&matrixs2[i][j]);
//                 }
//              }

//              printf("Second matrixs: \n");

//                for(int i = 0; i<rows; i++){
//                   for(int j = 0; j<columns; j++){
//                     printf("%d ",matrixs2[i][j]);
//                   }
//                   printf("\n");
//                }

//                for(int i = 0; i<rows; i++){
//                  for(int j = 0; j<columns; j++){
//                     if(matrixs1[i][j] != matrixs2[i][j]){
//                        flag = 0;
//                         break;
//                     }
                   
//                  }
//                }

//                if(flag == 1){
//                 printf("Both matrixs are equall");
//                }
//                 else{
//                     printf("Both Matrixs are not equall");
//                 }
//     return 0;
//    }



#include<stdio.h>
    int main(){

        int rows;
        printf("Rows: ");
        scanf("%d",&rows);

        int columns;
        printf("Columns: ");
        scanf("%d",&columns);

        int matrixs1[rows][columns];
        int flag = 1;

        printf("Enter your first matrixs elements: \n");

         for(int i = 0; i<rows; i++){
             for(int j = 0; j<columns; j++){
                scanf("%d",&matrixs1[i][j]);
             }
         }

         printf("First matrixs: \n");

         for(int i = 0; i<rows; i++){
             for(int j = 0; j<columns; j++){
                printf("%d ",matrixs1[i][j]);
             }
             printf("\n");
         }

         int matrixs2[rows][columns];

         printf("Enter your second matrixs elements: \n");

            for(int i = 0; i<rows; i++){
                for(int j = 0; j<columns; j++){
                    scanf("%d",&matrixs2[i][j]);
                }
            }

            printf("Second matrixs: \n");

            for(int i = 0; i<rows; i++){
                for(int j = 0; j<columns; j++){
                    printf("%d ",matrixs2[i][j]);
                }
                printf("\n");
            }

            for(int i = 0; i<rows; i++){
                for(int j = 0; j<columns; j++){
                    if(matrixs1[i][j] != matrixs2[i][j]){
                        flag = 0;
                        break;
                    }
                }
            }

            if(flag == 1){
                printf("Both matrixs are equall");
            }
             else{
                printf("Both matrixs are not equall");
             }


        return 0;
    }