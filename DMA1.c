// #include<stdio.h>
// #include<stdlib.h>
//     int main(){

//         int *ptr = (int*) malloc(sizeof(int));

//         int i =1;
//         int n = 4;

//         while(i<n){
//             printf("%d ",i);
//         }

//         return 0;
//     }

// #include<stdio.h>
// #include<stdlib.h>
//      int main(){

//         int size;
//         printf("Size:- ");
//         scanf("%d",&size);

//         int *arr = (int*) malloc(size*sizeof(int));

//         printf("Enter your Array elements:- \n");

//          for(int i = 0; i<size; i++){
//             scanf("%d",&arr[i]);
//          }

//          printf("Array Elements:- ");

//          for(int i = 0; i<size; i++){
//             printf("%d ",arr[i]);
//             if(i != size-1){
//                 printf(",");
//             }
//          }
//          printf(".\n");

//         return 0;
//      }


// #include<stdio.h>
// #include<stdlib.h>
//    int main(){

//     int size;
//     printf("Size:- ");
//     scanf("%d",&size);

//     int *arr = (int*) malloc(size*sizeof(int));

//     printf("Enter your Array elements:- \n");

//      for(int i = 0; i<size; i++){
//         scanf("%d",&arr[i]);
//      }

//      printf("Array elements:- ");

//      for(int i = 0; i<size; i++){
//         printf("%d ",arr[i]);
//      }

//        printf("\n");

//        printf("Reverse Array elements:- ");

//         for(int i = 0; i<size/2; i++){

//             int temp = arr[i];
//             arr[i] = arr[size-1-i];
//             arr[size-1-i] = temp;
//         }

//         for(int i = 0; i<size; i++){
//             printf("%d ",arr[i]);
//         }
//     return 0;
//    }


// #include<stdio.h>
// #include<stdlib.h>
//     int main(){

//         int n;
//         printf("Enter your number:- ");
//         scanf("%d",&n);

//         int *arr = (int*) calloc(n,sizeof(int));

//          for(int i = 0; i<n; i++){
//            arr[i] = i*i;
//          }

//          printf("Array elements:- ");
//           for(int i = 0; i<n; i++){
//             printf("%d ",arr[i]);
//           }
//         return 0;
//     }

// #include<stdio.h>
// #include<stdlib.h>
//     int main(){

//         int num;
//         printf("Enter your number:- ");
//         scanf("%d",&num);

//         int *arr = (int*) calloc(num,sizeof(int));
//         int product = 1;

//         printf("Enter your Array elements:- \n");

//          for(int i = 0; i<num; i++){
//             scanf("%d",&arr[i]);
//          }

//          printf("Array elements:- ");

//          for(int i = 0; i<num; i++){
//             printf("%d ",arr[i]);
//          }

//          printf("\n");
         
//          printf("Product:- ");

//          for(int i = 0; i<num; i++){
//             product *= arr[i];
//          }

//          printf("%d",product);

//         return 0;
//     }


#include<stdio.h>
  int main(){

  int a = 10;
  int b = 20;

  printf("%p")
   return 0;
  }


  