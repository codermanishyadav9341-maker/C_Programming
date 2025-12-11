// Questions 1;

//  #include<stdio.h>
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

//         printf("Array elements: ");

//         for(int i = 0; i<size; i++){
//             printf("%d ",arr[i]);
//             if(i != size - 1){
//                 printf(",");
//             }
//         }
//         return 0;
//      }


// Quetions 2;

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

//        for(int i = 0; i<size/2; i++){
//               int temp;
//               temp = arr[i];
//               arr[i] = arr[size-i-1];
//               arr[size-i-1] = temp;
//        }

//        printf("Array elements: ");

//        for(int i = 0; i<size; i++){
//         printf("%d ",arr[i]);
//        }

//         return 0;
//     }

// Questions :- 4;

// #include<stdio.h>
// #include<stdlib.h>
//      int main(){
        
//         int size;
//         printf("Size: ");
//         scanf("%d",&size);

//         int *arr = (int*) calloc(size,sizeof(int));

//         printf("Enter your Array elements: \n");

//         for(int i = 0; i<size; i++){
//             arr[i] = i*i;
//         }

//         printf("Array suares: ");
//         for(int i = 0; i<size; i++){
//             printf("%d ",arr[i]);
//         }
//         return 0;
//      }


// Questions: 3;

// #include<stdio.h>
// #include<stdlib.h>
//      int main(){

//         int size;
//         printf("Size: ");
//         scanf("%d",&size);

//        int *arr = (int*) calloc(size,sizeof(int));
       
//        int product = 1;

//        printf("Enter your Array elements: \n");

//        for(int i = 0; i<size; i++){
//         scanf("%d",&arr[i]);
//        }

//        printf("Product Array elements: ");

//        for(int i = 0; i<size; i++){
//         product *= arr[i];
//        }

//           printf("%d ",product);

//         return 0;
//      }

// Questions :- 5;

// #include<stdio.h>
// #include<stdlib.h>

//     struct student{

//         char name[20];
//         int id;

//     };

//     int main(){

//         struct student *stu = (struct student*) malloc(sizeof(struct student));

//         printf("Enter your name: ");
//         scanf("%s",&stu->name);

//         printf("Enter your id: ");
//         scanf("%d",&stu->id);

//         printf("\n");

//         printf("Name = %s\nID = %d\n",stu->name,stu->id);

//         return 0;
//     }


// Questions : - 6;
// #include<stdio.h>
// #include<stdlib.h>
// #include<string.h>
      
//       struct student{

//         char name[20];
//         int id;

//       };

//      int main(){

//         int size;
//         printf("Size: ");
//         scanf("%d",&size);

//         struct student *srr = (struct student*) malloc(size*sizeof(struct student));

//         for(int i = 0; i<size; i++){

//             printf("Enter your student name %d: ",i+1);
//             scanf("%s",&srr[i].name);

//             printf("Enter your student id %d: ",i+1);
//             scanf("%d",&srr[i].id);

//             getchar();

//         }

//         printf("\n");

//         for(int i = 0; i<size; i++){
//             printf("Student %d name = %s\nStudent id = %d\n",i+1,srr[i].name,srr[i].id);
//         }
//         return 0;
//      }



// Questions : - 7;


// #include<stdio.h>
// #include<stdlib.h>

//       struct student{

//         char name[20];
//         int id;

//       };

//     int main(){

//         int size;
//         printf("Size: ");
//         scanf("%d",&size);

//         struct student *srr = (struct student*) calloc(size,sizeof(struct student));

//         for(int i = 0; i<size; i++){

//             printf("Enter your student name %d: ",i+1);
//             scanf("%s",&srr[i].name);

//             printf("Enter your student id %d: ",i+1);
//             scanf("%d",&srr[i].id);


//         }

//         printf("\n");

//         for(int i = 0; i<size; i++){
//             printf("Student %d name = %s\nStudent id = %d\n",i+1,srr[i].name,srr[i].id);
//         }
//         return 0;
//     }


// #include<stdio.h>
// #include<stdlib.h>

//     struct student{

//         char name[20];
//         int id;

//     };
//     int main(){

//         int size;
//         printf("Size: ");
//         scanf("%d",&size);

//         struct student *stu = (struct student*) calloc(size,sizeof(struct student));


//         printf("Enter your Student Name: ");
//         scanf("%s",&stu->name);

//         printf("Enter your student id: ");
//         scanf("%d",&stu->id);

//         printf("\n");
        
//         printf("Student name = %s\nStudent Id = %d\n",stu->name,stu->id);

//         return 0;
//     }

//   Questions = 9;

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

//         printf("Enter your New Array: \n");

//         if(resize>size){
//         for(int i = size; i<resize; i++){
//             scanf("%d",&arr[i]);
//         }
//     }

//         printf("Resize Array elements: ");

//         for(int i = 0; i<resize; i++){
//             printf("%d ",arr[i]);
//         }

//         return 0;
//      }


// Questions = 10;

// #include<stdio.h>
// #include<stdlib.h>
//       int main(){

//         int size;
//         printf("Size: ");
//         scanf("%d",&size);

//         int *arr;
//         arr = (int*) calloc(size,sizeof(int));

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

//         printf("Enter your Resizes: \n");

//         for(int i = size; i<resize; i++){
//             arr[i] = 0;
//         }

//         printf("Resize Array: ");

//         for(int i = 0; i<resize; i++){
//             printf("%d ",arr[i]);
//         }


//         return 0;
//       }




// #include<stdio.h>
// #include<stdlib.h>
//    int main(){
      
//     int rows;
//     printf("Rows: ");
//     scanf("%d",&rows);

//     int columns;
//     printf("Columns: ");
//     scanf("%d",&columns);

//     int **arr = (int**) malloc(rows*sizeof(int*));

//     for(int i = 0; i<columns; i++){
//         arr[i] = (int*) malloc(columns*sizeof(int));
//     }

//     for(int i = 0; i<rows; i++){
//         for(int j = 0; j<columns; j++){
//             scanf("%d",&arr[i][j]);
//         }
//     }

//     for(int i = 0; i<rows; i++){
//         for(int j = 0; j<columns; j++){
//             printf("%d ",arr[i][j]);
//         }
//         printf("\n");
//     }
//     return 0;
//    }


#include<stdio.h>
#include<stdlib.h>
     int main(){

        int rows;
        printf("Rows: ");
        scanf("%d",&rows);

        int columns;
        printf("Columns: ");
        scanf("%d",&columns);

        int **arr = (int**) malloc(rows*sizeof(int*));

        0 for(int i = 0; i<columns; i++){
            arr[i] = (int*) malloc(columns*sizeof(int));
        }

        printf("Enter your matrixs elements: \n");
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
        return 0;
     }