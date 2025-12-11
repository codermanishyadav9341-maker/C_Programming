// #include<stdio.h>
//    int main(){

//     int size;

//     printf("Size: ");
//     scanf("%d",&size);

//     int arr[size];
//     int product = 1;

//     printf("Enter array elements: \n");

//     for(int i = 0; i<size; i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("Array elements:  \n");

//     for(int i = 0; i<size; i++){

//         product = product * arr[i];

//     }

//     printf("product = %d",product);

//     return 0;
//    }

// #include<stdio.h>
//   int main(){

//     int size;

//     printf("Size: ");
//     scanf("%d",&size);

//     int arr[size];
//     int index;

//     printf("Enter Array elements: \n");

//     for(int i = 0; i<size; i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("Index number: ");
//     scanf("%d",&index);

//     for(int i = 0; i<size; i++){

//         if(index >= 0 && index < size){

//             printf("index vaule %d = %d",index,arr[index]);
//             break;
//         }
//         else{
//             printf("No index");
//             break;
//         }
//     }
//     return 0;
//   }

// #include<stdio.h>
// int main(){

//     int size;
//     printf("Size: ");
//     scanf("%d",&size);

//     int arr[size];
    
//     int n;
//     printf("Enter your number: \n");
//     scanf("%d",&n);

//     int flag = 0;

//     // for(int i = 0; i<size; i++){
//     //     scanf("%d",&arr[i]);
//     // }

//     printf("Array elements: \n");

//     for(int i = 0; i<size; i++){
//         if(arr[i]==n){
//             flag = 1;
//             int temp = arr[i];
//             arr[i] = arr[i+1];
//             arr[i+1] = arr[i];

//             printf("index = %d",i);
//             break;
//         }
//     }
//     return 0;
// }

// A    R     R   A     Y     E     L   E    M     E       N      T     S


// #include<stdio.h>
//   int main(){

//     int size;

//     printf("Size: ");
//     scanf("%d",&size);

//     int arr[size];

//     printf("Enter array elements: \n");

//     for(int i = 0; i<size; i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("Array: ");

//     for(int i = 0; i<size/2; i++){
//         int temp = arr[i];
//         arr[i] = arr[size - 1 - i];
//         arr[size-1-i] = arr[i];

//     }

//     printf("Reverse Array: ");

//     for(int i = 0; i<size; i++){
//         printf("%d  ",arr[i]);
//     }


//     return 0;
//   }



#include<stdio.h>
  int main(){

    int size;

    printf("Size: ");
    scanf("%d",&size);

    int arr[size];

    printf("Enter array elements: \n");

    for(int i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Array elements: ");
    
    return 0;
  }