// // #include<stdio.h>
// //   int main(){

// //     int size;

// //     printf("Size: ");
// //     scanf("%d",&size);

// //     int arr[size];
// //     int product = 1;

// //     printf("Enter your Array elements: \n");

// //     for(int i = 0; i<size; i++){
// //         scanf("%d",&arr[i]);
// //     }

// //     printf("Array elements: \n");

// //     for(int i = 0; i<size; i++){
// //         product = product*arr[i];

// //     }
// //     printf("product = %d",product);



// //     return 0;
// //   }

// // #include<stdio.h>
// //   int main(){

// //     int size;
    
// //     printf("Size: ");
// //     scanf("%d",&size);

// //     int arr[size];
// //     int sum = 0;

// //     printf("Enter your array elements: \n");

// //     for(int i = 0; i<size; i++){
// //         scanf("%d",&arr[i]);
// //     }

// //     printf("Array elements: \n");

// //     for(int i = 0; i<size; i++){
// //         sum = sum + arr[i];
// //     }
// //     printf("sum = %d ",sum);

// //     return 0;
// //   }


// #include<stdio.h>
//   int main(){

//     int size;
//     printf("Size: ");
//     scanf("%d",&size);

//     int arr[size];
//     int sub = 0;

//     printf("Enter your array elements: \n");
    
//     for(int i = 0; i<size; i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("Array elements: ");

//     for(int i = 0; i<size; i++){
        
//         sub = sub - arr[i];
//     }
//     printf("sub = %d ",sub);

//     return 0;
//   }


// #include<stdio.h>
//   int main(){

//     int size;
//     printf("Size: ");
//     scanf("%d",&size);

//     int arr[size];
//     int divided = 1;

//     printf("Enter Array elements: \n");

//     for(int i = 0; i<size; i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("Array elements: \n");

//     for(int i = 0; i<size; i++){

//         divided = divided/arr[i];

//     }

//     printf("Divided = %d ",divided);

//     return 0;
//   }

// #include<stdio.h>
//   int main(){

//     int size;
//     printf("Size: ");
//     scanf("%d",&size);

//     int arr[size];
//     int index;

//     printf("Enter your array elements: \n");

//     for(int i = 0; i<size; i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("Index Number: ");
//     scanf("%d",&index);
    
// for(int i = 0; i<size; i++){

//         if(index >=0 && index < size){

//         printf("Index %d = %d\n",index,arr[index]);
//         break;

//         }

//         else{
//             printf("No index: ");
//             break;
//         }

//     }
//     return 0;
//   }

#include<stdio.h>
  int main(){

    int size;
    printf("Size: ");
    scanf("%d",&size);

    int arr[size];
    int index;

    printf("Enter Array elements: \n");

    for(int i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }
    
    printf("Index Number: ");
    scanf("%d",&index);

    for(int i = 0; i<size; i++){

        if(index >= 0 && index < size){
            printf("index %d = %d",index,arr[index]);
            break;
        }
        else{
            printf("No index: ");
            break;
        }

    }
    return 0;
  }