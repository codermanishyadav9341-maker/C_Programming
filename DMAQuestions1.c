// Questions no. 1;

// #include<stdio.h>
// #include<stdlib.h>
//     int main(){

//         int size;
//         printf("Size: ");
//         scanf("%d",&size);

//         int *arr = (int*) malloc(size*sizeof(int));

//         printf("Enter your Array elements: \n");

//         for(int i = 0; i<size; i++){
//             scanf("%d",&arr[i]);
//         }

//         printf("Array contents: ");

//         for(int i = 0; i<size; i++){
//             printf("%d ",arr[i]);
//             if(i != size - 1){
//                 printf(",");
//             }
//         }
//         printf(".\n");

//         return 0;
//     }

//     or


// #include<stdio.h>
// #include<stdlib.h>
//     int main(){

//         int size;
//         printf("Size: ");
//         scanf("%d",&size);

//         int *arr = (int*) malloc(size*sizeof(int));

//         printf("Enter Array: \n");

//         for(int i = 0; i<size; i++){
//             scanf("%d",&arr[i]);
//          //  arr[i] = i+1;
//         }

//         printf("Array elements: ");

//         for(int i = 0; i<size; i++){
//             printf("%d ",arr[i]);

//             if(i != size - 1){
//                 printf(",");
//             }
//         }

//         printf(".\n");

//         return 0;
//     }

//     Questions no.2;
// #include<stdio.h>
// #include<stdlib.h>
//      int main(){

//         int size;
//         printf("Size: ");
//         scanf("%d",&size);

//         int *arr = (int*) malloc(size*sizeof(int));

//         printf("Enter your Array elements: \n");

//         for(int i = 0; i<size; i++){
//             scanf("%d",&arr[i]);
//         }

//         // Reverse elements:

//         for(int i = 0; i<size/2; i++){
//                 int temp;
//                 temp = arr[i];
//                 arr[i] = arr[size-i-1];
//                 arr[size-i-1] = temp;
//         }

//         printf("Array in Reverse: ");
//         for(int i = 0; i<size; i++){
//             printf("%d ",arr[i]);
//         }
//         return 0;
//      }



// #include<stdio.h>
// #include<stdlib.h>
//    int main(){

//     int size;
//     printf("Size: ");
//     scanf("%d",&size);

//     int *arr = (int*) calloc(size,sizeof(int));

//     for(int i = 0; i<size; i++){
//          arr[i] = i*i;
//     }

//     printf("Array contents in squares: \n");

//     for(int i = 0; i<size; i++){
//         printf("%d ",arr[i]);
//     }
//     return 0;
//    }



//  Questions no. 4;

// #include<stdio.h>
// #include<stdlib.h>
//    int main(){

//     int size;
//     printf("Size: ");
//     scanf("%d",&size);

//     int *arr = (int*) calloc(size,sizeof(int));
//     int product = 1;
//     printf("Enter your Array elements: \n");

//     for(int i = 0; i<size; i++){
//         scanf("%d",&arr[i]);
//     }


//     printf("Product Array: ");

//     for(int i = 0; i<size; i++){
//           product *= arr[i];
//     }

//     printf("%d",product);

//     return 0;
//    }


// Questions no.5;

// #include<stdio.h>
// #include<stdlib.h>

//        struct student{

//         char name[20];
//         int id;

//        };

//    int main(){

//     int size;
//     printf("Size: ");
//     scanf("%d",&size);

//     struct student *stu = (struct student*) malloc(size*sizeof(struct student));

//        printf("Enter your student name: ");
//        scanf("%s",&stu->name);

//        printf("Enter your student id: ");
//        scanf("%d",&stu->id);


//        printf("\n");


//        printf("Student name = %s\nStudent id = %d\n",stu->name,stu->id);
    

//     return 0;
//    }

//   Questions no.6;

// #include<stdio.h>
// #include<stdlib.h>

//     struct student{

//         char name[20];
//         int id;

//     };

//    int main(){

//     int size;
//     printf("Size: ");
//     scanf("%d",&size);

//     struct student *srr = (struct student*) malloc(size*sizeof(struct student));
//     // student Details: 

//     for(int i = 0; i<size; i++){

//         printf("Enter your Student name %d: ",i+1);
//         scanf("%s",&srr[i].name);

//         printf("Enter your Student Id %d: ",i+1);
//         scanf("%d",&srr[i].id);

//     }


//     printf("\n");

//     for(int i = 0; i<size; i++){
//         printf("Student %d name = %s\nStudent Id = %d\n",i+1,srr[i].name,srr[i].id);
//     }

//     return 0;
//    }

//   Questions no.7;

// #include<stdio.h>
// #include<stdlib.h>

//      struct student{

//         char name[20];
//         int id;

//      };

//     int main(){

        
//         struct student *stu = (struct student*) calloc(1,sizeof(struct student));

//         printf("Enter your student name: ");
//         scanf("%s",&stu->name);

//         printf("Enter your student id: ");
//         scanf("%d",&stu->id);

//         printf("\n");

//         printf("Student name = %s\nStudent Id = %d\n",stu->name,stu->id);

        
//         return 0;
//     }

//   Questions no.8;

// #include<stdio.h>
// #include<stdlib.h>

//       struct student{

//         char name[20];
//         int id;

//       };

//    int main(){

//     int size;
//     printf("Size: ");
//     scanf("%d",&size);

//     struct student *srr = (struct student*) calloc(size,sizeof(struct student));

//     for(int i = 0; i<size; i++){

//         printf("Enter your student Name %d: ",i+1);
//         scanf("%s",&srr[i].name);

//         printf("Enter your student Id %d: ",i+1);
//         scanf("%d",&srr[i].id);

//     }

//     printf("\n");

//     for(int i = 0; i<size; i++){
//     printf("Student %d Name = %s\nStudent Id = %d\n",i+1,srr[i].name,srr[i].id);
//     }

//     return 0;
//    }



//   Questions no.10;

// #include<stdio.h>
// #include<stdlib.h>
//     int main(){

//         int size;
//         printf("Size: ");
//         scanf("%d",&size);

//         int *arr;

//         arr = (int*) malloc(size*sizeof(int));

//         printf("Enter your Array elements: \n");

//         for(int i = 0; i<size; i++){
//             scanf("%d",&arr[i]);
//         }

//         printf("Original Array: ");

//         for(int i = 0; i<size; i++){
//             printf("%d ",arr[i]);
//         }

//         printf("\n");

//        int resize;

//        printf("Resize: ");
//        scanf("%d",&resize);

//        arr = (int*) realloc(arr,resize*sizeof(int));

//        if(size < resize){
//         for(int i = size; i<resize; i++){
//             scanf("%d",&arr[i]);
//         }
//        }

//        printf("Resize Array: ");
//        for(int i = 0; i<resize; i++){

//         printf("%d ",arr[i]);

//        }

//         return 0;

//     }


// Questions no.11;

// #include<stdio.h>
// #include<stdlib.h>
//      int main(){

//         int size;
//         printf("Size: ");
//         scanf("%d",&size);

//         int *arr;

//         arr = (int*) calloc(size,sizeof(int));

//         printf("Enter your Array elements: \n");

//         for(int i = 0; i<size; i++){
//             scanf("%d",&arr[i]);
//         }

//         printf("Array elements: ");

//         for(int i = 0; i<size; i++){
//             printf("%d ",arr[i]);
//         }


//         printf("\n");

//         int resize;
//         printf("Resize: ");
//         scanf("%d",&resize);

//         arr = (int*) realloc(arr,resize*sizeof(int));

//         if(resize > size){
//             for(int i = size; i<resize; i++){
//               //  scanf("%d",&arr[i]); 
//               arr[i] = 0;
//             }
//         }

//         printf("Resize Array: ");

//         for(int i = 0; i<resize; i++){
//             printf("%d ",arr[i]);
//         }
//         return 0;
//      }


//   Questions no. 11;

// #include<stdio.h>
// #include<stdlib.h>
//      int main(){

//         int size;
//         printf("Size: ");
//         scanf("%d",&size);

//         int *arr;

//         arr = (int*) malloc(size*sizeof(int));

//         printf("Enter your Array elements: \n");

//         for(int i = 0; i<size; i++){
//             scanf("%d",&arr[i]);
//         }

//         printf("Original Array: ");

//         for(int i = 0; i<size; i++){
//             printf("%d ",arr[i]);
//         }

//         printf("\n");

//         int resize;
//         printf("Resize: ");
//         scanf("%d",&resize);

//         arr = (int*) realloc(arr,resize*sizeof(int));

//         if(resize>size){
//             for(int i = size; i<resize; i++){
//                 arr[i] = i+1;
//             }
//         }

//         printf("Resize: ");

//         for(int i = 0; i<resize; i++){
//             printf("%d ",arr[i]);
//         }
//         return 0;
//      }


//      Questions no.13;

// #include<stdio.h>
// #include<stdlib.h>
//     int main(){

//         int rows;
//         printf("Rows: ");
//         scanf("%d",&rows);

//         int columns;
//         printf("Columns: ");
//         scanf("%d",&columns);

//         int **arr = (int**) malloc(rows*sizeof(int*));

//               for(int i = 0; i<columns; i++){
//                 arr[i] = (int*) malloc(columns*sizeof(int));
//               }

//               printf("Enter your Matrixs elements: \n");
//               for(int i = 0; i<rows; i++){
//                 for(int j = 0; j<columns; j++){
//                     scanf("%d",&arr[i][j]);
//                 }
//               }

//               printf("Matrixs: \n");

//               for(int i = 0; i<rows; i++){
//                 for(int j = 0; j<columns; j++){
//                     printf("%d ",arr[i][j]);
//                 }
//                 printf("\n");
//               }


//         return 0;
//     }

//    Questions no.14; Transpose matrixs; is not clears;


// #include<stdio.h>
// #include<stdlib.h>
//    int main(){

//     int rows;
//     printf("Rows: ");
//     scanf("%d",&rows);

//     int columns;
//     printf("Columns: ");
//     scanf("%d",&columns);

//     int **matrix = (int**) malloc(rows*sizeof(int*));

//          for(int i = 0; i<columns; i++){
//             matrix[i] = (int*) malloc(columns*sizeof(int));
//          }

//          printf("Enter your matrixs elements: \n");

//          for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 scanf("%d",&matrix[i][j]);
//             }
//          }

//          int **transpose = (int**) malloc(rows*sizeof(int*));
                
//          for(int i = 0; i<columns; i++){
//             transpose[i] = (int*) malloc(columns*sizeof(int));
//          }

//          for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 transpose[j][i] = matrix[i][j];
//             }
//          }

//          printf("Transpose matrixs: \n");

//          for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 printf("%d ",transpose[i][j]);
//             }
//             printf("\n");
//          }
//     return 0;
//    }


// Questions no.14; transpose matrixs;

// #include<stdio.h>
// #include<stdlib.h>
//      int main(){

//         int rows;
//         printf("Rows: ");
//         scanf("%d",&rows);

//         int columns;
//         printf("Columns: ");
//         scanf("%d",&columns);

//         int **transpose;

        
//             int **arr = (int**) malloc(rows*sizeof(int*));

//            for(int i = 0; i<rows; i++){
//             arr[i] = (int*) malloc(columns*sizeof(int));
//            }

//            printf("Enter your matrixs elements: \n");

//            for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 scanf("%d",&arr[i][j]);
//             }
//            }

//            printf("Original matrixs: \n");

//            for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 printf("%d ",arr[i][j]);
//             }
//             printf("\n");
//            }

//            printf("Transpose matrixs: \n");

//            for(int j = 0; j<columns; j++){
//             for(int i = 0; i<rows; i++){
//                 printf("%d ",arr[i][j]);
//             }
//             printf("\n");
//            }

           
//         return 0;
//      }

// Qusetions no. 15;

// #include<stdio.h>
// #include<stdlib.h>
//    int main(){

//     int rows;
//     printf("Rows: ");
//     scanf("%d",&rows);

//     int columns;
//     printf("Columns: ");
//     scanf("%d",&columns);

//     int **arr1 = (int**) calloc(rows,sizeof(int*));

//         for(int i = 0; i<columns; i++){
//             arr1[i] = (int*) calloc(columns,sizeof(int));
//         }

//         printf("Enter your matrixs elements: \n");
//              for(int i = 0; i<rows; i++){
//                 for(int j = 0; j<columns; j++){
//                     scanf("%d",&arr1[i][j]);
//                 }
//              }

//              printf("Matrixs: \n");

//              for(int i = 0; i<rows; i++){
//                 for(int j = 0; j<columns; j++){
//                     printf("%d ",arr1[i][j]);
//                 }
//                 printf("\n");
//              }

//              // Second matrixs: 

//              int newrows;
//              printf("Rows: ");
//              scanf("%d",&newrows);

//              int newcolumns;
//              printf("Columns: ");
//              scanf("%d",&newcolumns);

//              int **ptr = (int**) calloc(newrows,sizeof(int*));

//                  for(int i = 0; i<newrows; i++){
//                     ptr[i] = (int*) calloc(newcolumns,sizeof(int));
//                  }

//                  printf("Enter your matrixs elements: \n");

//                  for(int i = 0; i<newrows; i++){
//                     for(int j = 0; j<newcolumns; j++){
//                         scanf("%d",&ptr[i][j]);
//                     }
//                  }

//                  printf("Second matrixs: \n");

//                 for(int i = 0; i<newrows; i++){
//                     for(int j = 0; j<newcolumns; j++){
//                         printf("%d ",ptr[i][j]);
//                     }
//                     printf("\n");
//                  }


//                  int **prr = (int**) calloc(rows,sizeof(int*));
//                    for(int i = 0; i<rows; i++){
//                     prr[i] = (int*) calloc(newcolumns,sizeof(int));
//                    }

//                    for(int i = 0; i<rows; i++){
//                     for(int j = 0; j<newcolumns; j++){
//                         for(int k = 0; k<columns; k++){
//                             prr[i][j] += arr1[i][k] * ptr[k][j];
//                         }
//                     }
//                    }

//                    printf("Product of two matrixs: \n");

//                    for(int i = 0; i<rows; i++){
//                     for(int j = 0; j<newcolumns; j++){
//                         printf("%d ",prr[i][j]);
//                     }
//                     printf("\n");
//                    }
                 


//     return 0;
//    }


// #include<stdio.h>
// #include<stdlib.h>
//     int main(){

//         int rows;
//         printf("Rows: ");
//         scanf("%d",&rows);

//         int columns;
//         printf("Columns: ");
//         scanf("%d",&columns);

//         int **matrixs;

//         matrixs = (int**) malloc(rows*sizeof(int*));

//         for(int i = 0; i<columns; i++){
//             matrixs[i] = (int*) malloc(columns*sizeof(int));
//         }

//         printf("Enter your matrixs elements: \n");
//         for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 scanf("%d",&matrixs[i][j]);
//             }
//         }

//            printf("Original matyrixs: \n");

//            for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 printf("%d ",matrixs[i][j]);
//             }
//             printf("\n");
//            }

//            int newrows;
//            printf("Rows: ");
//            scanf("%d",&newrows);

//           matrixs = (int**) realloc(matrixs,newrows*sizeof(int*));

//            for(int i = 0; i<newrows; i++){
//             matrixs[i] = (int*) malloc(columns*sizeof(int));
//            }

//            printf("Enter your Resize matrixs elements: \n");

           
//            for(int i = 0; i<newrows; i++){
//             for(int j = 0; j<columns; j++){
//                 scanf("%d",&matrixs[i][j]);
//             }
//            }
           

//            printf("Resize matrixs: \n");
//            for(int i = 0; i<newrows; i++){
//             for(int j = 0; j<columns; j++){
//                 printf("%d ",matrixs[i][j]);
//             }
//             printf("\n");
//            }
//         return 0;
//     }


// #include<stdio.h>
// #include<stdlib.h>
//    int main(){

//     int rows;
//     printf("Rows: ");
//     scanf("%d",&rows);

//     int columns;
//     printf("Columns: ");
//     scanf("%d",&columns);

//     int **matrixs;

//     matrixs = (int**) calloc(rows,sizeof(int*));

//     for(int i = 0; i<rows; i++){
//         matrixs[i] = (int*) calloc(columns,sizeof(int));
//     }

//     printf("Enter your matrixs elements: \n");
//          for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 scanf("%d",&matrixs[i][j]);
//             }
//          }

//          printf("Matrixs: \n");

//          for(int i = 0; i<rows; i++){
//             for(int j = 0; j<columns; j++){
//                 printf("%d ",matrixs[i][j]);
//             }
//             printf("\n");
//          }

//          int newcolumns;
//          printf("Columns: ");
//          scanf("%d",&newcolumns);

//          matrixs = (int**) malloc(rows*sizeof(int*));

//          for(int i = 0; i<rows; i++){
//             matrixs[i] = (int*) realloc(matrixs,newcolumns*sizeof(int));
            
//          }



//             for(int i = 0; i<rows; i++){
//                for(int j = columns; j<newcolumns; j++){
//                  matrixs[i][j] = 0;
//                }
//             }
              
            

//          printf("Resize matrixs: \n");

//          for(int i = 0; i<rows; i++){
//             for(int j = 0; j<newcolumns; j++){
//                 printf("%d ",matrixs[i][j]);
//             }
//             printf("\n");
//          }
//     return 0;
//    }

// #include<stdio.h>
// #include<stdlib.h>
//       int main(){

//         int rows;
//         printf("Rows: ");
//         scanf("%d",&rows);

//         int columns;
//         printf("Columns: ");
//         scanf("%d",&columns);

       

//         int **matrixs = (int**) malloc(rows*sizeof(int*));

//            for(int i = 0; i<rows; i++){
//             matrixs[i] = (int*) malloc(columns*sizeof(int));
//            }

//            printf("Enter your matrixs elements: \n");

//              for(int i = 0; i<rows; i++){
//                 for(int j = 0; j<columns; j++){
//                     scanf("%d",&matrixs[i][j]);
//                 }
//              }

//              printf("Matrixs: \n");

//              for(int i = 0; i<rows; i++){
//                 for(int j = 0; j<columns; j++){
//                     printf("%d ",matrixs[i][j]);
//                 }
//                 printf("\n");
//              }

           

//              for(int i = 0; i<rows; i++){
//                  int sum = 0;
//                 for(int j = 0; j<columns; j++){
//                     sum += matrixs[i][j];
//                 }
//                 printf("Sum of rows %d = %d\n",i+1,sum);
//              }

//              printf("\n");

//              for(int j = 0; j<columns; j++){
//                 int sum = 0;
//                 for(int i = 0; i<rows; i++){
//                     sum += matrixs[i][j];
//                 }
//                 printf("Sum of columns %d = %d\n",j+1,sum);
//              }
//         return 0;
//       }



#include<stdio.h>
#include<stdlib.h>
   int main(){

    int rows;
    printf("Rows: ");
    scanf("%d",&rows);

    int columns;
    printf("Columns: ");
    scanf("%d",&columns);
    

    int **matrixs = (int**) malloc(rows*sizeof(int*));

        for(int i = 0; i<rows; i++){
            matrixs[i] = (int*) malloc(columns*sizeof(int));
        }

        printf("Enter your matrixs elements: \n");

           for(int i = 0; i<rows; i++){
            for(int j = 0; j<columns; j++){
                scanf("%d",&matrixs[i][j]);
            }
           }

           // Reverse;

           for(int i = 0; i<rows; i++){
              for(int j = 0; j<columns/2;  j++){
                     int temp;
                     temp = matrixs[i][j];
                     matrixs[i][j] = matrixs[i][columns-1-j];
                    matrixs[i][columns-1-j] = temp;
              }
           }

           printf("Reverse matrixs: \n");
           for(int i = 0; i<rows; i++){
              for(int j = 0; j<columns; j++){
                printf("%d ",matrixs[i][j]);
              }
              printf("\n");
           }
    return 0;
   }





// #include<stdio.h>
// #include<stdlib.h>
//     int main(){

//         int rows;
//         printf("Rows: ");
//         scanf("%d",&rows);

//         int columns;
//         printf("Columns: ");
//         scanf("%d",&columns);

//         int  **arr = (int**) malloc(rows*sizeof(int*));

//             for(int i = 0; i<rows; i++){
//                 arr[i] = (int*) malloc(columns*sizeof(int));
//             }

//             printf("Enter your matrixs elements: \n");

//              for(int i = 0; i<rows; i++){
//                 for(int j = 0; j<columns; j++){
//                     scanf("%d",&arr[i][j]);
//                 }
//              }

//              printf("Symatrixs: \n");

//              int Symatrixs = 1;

//              for(int i = 0; i<rows; i++){
//                 for(int j = 0; j<columns; j++){
//                     if(arr[i][j] != arr[j][i]){
//                         Symatrixs = 0;
//                         break;
//                     }
//                 }
//                 if(!Symatrixs)
//                     break;
                
//              }
//              if(Symatrixs){
//                 printf("This matrixs is symatrixs: ");
//              }
//              else{
//                 printf("This matrixs is not symatrixs: ");
//              }
//         return 0;
//     }