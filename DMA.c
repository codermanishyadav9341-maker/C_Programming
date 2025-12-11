// #include<stdio.h>
// #include<stdlib.h>
//      int main(){

//         int size;

//         printf("Size: ");
//         scanf("%d",&size);

//         int *arr = (int*) malloc(size*sizeof(int));

//         printf("Enter your array elements: \n");

//         for(int i = 0; i<size; i++){
//             scanf("%d",&arr[i]);
//         }

//         printf("Array elements: ");

//         for(int i = 0; i<size; i++){
//             printf("%d ",arr[i]);

//             if(i != size-1){
//                 printf(",");
//             }

//         }

//         printf(".\n");

//         return 0;
//      }




// #include<stdio.h>
// #include<stdlib.h>
//     int main(){

//         int size;
//         printf("Size: ");
//         scanf("%d",&size);


//         int *arr = (int*) malloc(size*sizeof(int));

//         printf("Enter your array elements: \n");

//         for(int i = 0; i<size; i++){
//             scanf("%d",&arr[i]);
//         }

//     //    printf("Reverse elements: \n");

//         for(int i = 0; i<size/2; i++){
//             int temp;
//             temp = arr[i];
//             arr[i] = arr[size-1-i];
//             arr[size-1-i] = temp;
//         }

//         printf("Reverse array: ");
//         for(int i = 0; i<size; i++){
//             printf("%d ",arr[i]);
//             if(i != size-1){
//                 printf(",");
//             }
//         }

//         printf(".\n");

//         return 0;
//     }



#include<stdio.h>
#include<stdlib.h>
    int main(){

        int n;
        printf("Enter your number: ");
        scanf("%d",&n);

        int *arr = (int*) calloc(n,sizeof(int));

        printf("Enter your Array elements: \n");

        for(int i = 0; i<n; i++){
            scanf("%d",&arr[i]);
        }

        printf("Array elements: ");

        for(int i = 0; i<n; i++){
            printf("%d ",arr[i]);
        }
        return 0;
    }