// #include<stdio.h>
//   int main(){

//     int size;
//     printf("Size: ");
//     scanf("%d",&size);

//     int arr[size];
//     int i = 0;
//     int product = 1;

//     printf("Enter your array elements: \n");

//     for(int i = 0; i<size; i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("Array elements: \n");

//     for(int i = 0; i<size; i++){
//         printf("%d ",arr[i]);

//         if(i != size -1){
//             printf(",");
//         }
        
//     }

//     printf("\n");
//     for(int i = 0; i<size; i++){

//         product = product * arr[i];


//     }
//            printf("\n product = %d",product);
     

//     return 0;
//   }


// #include<stdio.h>
//    int main(){

//     int size;
//     printf("Size: ");
//     scanf("%d",&size);

//     int arr[size];
//     int index;
//     int flag = 0;

//     printf("Enter your array: \n");

//     for(int i = 0; i<size; i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("Searching elements: ");
//     scanf("%d",&index);

//     printf("Array elements: \n");

//     for(int i = 0; i<size; i++){
        
//         if(arr[i] == index){
//             printf("Elements of %d at index no %d",index,i);
//             flag = 1;
//             break;
//         }
//     }

//     if(!flag){
//         printf("Elements is not found is %d",index);
//     }
//     return 0;
//    }

// #include<stdio.h>
//   int main(){

//     int size;
//     printf("Size: ");
//     scanf("%d",&size);

//     int arr[size];
//     int num;
//     int flag = 0;

//     printf("Enter your array elements: \n");

//     for(int i = 0; i<size; i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("Searching from array: ");
//     scanf("%d",&num);

//     for(int i = 0; i<size; i++){
//         if(arr[i] == num){
//             flag = 1;
//             break;
//         }
//     }

//     if(flag == 1){
//         printf("Elements presents in array: ");
//     }
//     else{
//         printf("Elements is not presents in array: ");
//     }
//     return 0;
//   }


// #include<stdio.h>
//   int main(){

//     int size;
//     printf("Size: ");
//     scanf("%d",&size);

//     int arr[size];
//     int i;
    

//     printf("Enter your array elements: \n");

//     for(int i = 0; i<size; i++){
//         scanf("%d",&arr[i]);
//     }

//     // Reverse elements: \n;

//     for(int i = 0; i<size/2; i++){
//         int temp;
//         temp = arr[i];
//         arr[i] = arr[size - 1 - i];
//         arr[size - 1 - i] = temp;
//     }

//     printf("Reverse Array: \n");

//     for(int i = 0; i<size; i++){
//         printf("%d ",arr[i]);
//     }

//     printf("\n");

//     return 0;
//   }



// #include<stdio.h>
//   int main(){

//     int size;
//     printf("Size: ");
//     scanf("%d",&size);

//     int arr[size];
//     int i;
//     int j;
//     int temp;

//     printf("Enter your array elements: \n");

//     for(int i = 0; i<size; i++){
//         scanf("%d",&arr[i]);
//     }

// // ascending order;

// for(int i = 0; i<size - 1; i++){
//     for(int j = 0; i<size - 1 - i;  j++){
//         if(arr[i] > arr[j + 1]){
//             temp = arr[j];
//             arr[j] = arr[j+1];
//             arr[j+1] = temp;
//         }
//     }
// }

// printf("Ascending order: \n");

// for(int i = 0; i<size; i++){
//     printf("%d",arr[i]);
// }
//     return 0;
//   }


// #include <stdio.h>

// int main() {

//     int size;
//     printf("Enter the size of the array: ");
//     scanf("%d", &size);

//     int arr[size];

//     printf("Enter %d elements:\n", size);
//     for (int i = 0; i < size; i++) {
//         scanf("%d", &arr[i]);
//     }

//     // Bubble sort in ascending order
//     for (int i = 0; i < size - 1; i++) {
//         for (int j = 0; j < size - 1 - i; j++) {
//             if (arr[j] > arr[j + 1]) {
//                 // Swap elements
//                 int temp;
//                 temp = arr[j];
//                 arr[j] = arr[j + 1];
//                 arr[j + 1] = temp;
//             }
//         }
//     }

//     // Print sorted array
//     printf("Ascending order: [ ");
//     for (int i = 0; i < size; i++) {
//         printf("%d ", arr[i]);
//     }
//     printf("]\n");

//     return 0;
// }




// #include<stdio.h>
//   int main(){

//     int size;
//     printf("Size: ");
//     scanf("%d",&size);

//     int arr[size];

//     printf("Enter your Array elements: \n");

//     for(int i = 0; i<size; i++){
//         scanf("%d",&arr[i]);

//     }

//     // ascending order;

//     for(int i = 0; i<size - 1; i++){
//         for(int j = 0; j<size-1-i; j++){

//             if(arr[i] > arr[j+1]){
//             int temp;     /// swap;
//             temp = arr[j];
//             arr[j] = arr[j+1];
//             arr[j+1] = temp;
//         }
//     }
// }

// printf("Ascending orders: [");

// for(int i = 0; i<size; i++){
//     printf("%d ",arr[i]);
// }

// printf("]\n");

//     return 0;
//   }


// #include<stdio.h>
//   int main(){

//     int size;
//     printf("Size: ");
//     scanf("%d",&size);

//     int arr[size];
//     int i;

//     printf("Enter your Array elements: \n");

//     for(int i = 0; i<size; i++){
//         scanf("%d",&arr[i]);
//     }

//     // ascending order;

//     for(int i = 0; i<size-1; i++){
//         for(int j = 0; j<size-1-i; j++){
//             if(arr[j] < arr[j+1]){
//                 int temp;
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }

//     printf("Decending  orders: [");
//     for(int i = 0; i<size; i++){
//         printf("%d ",arr[i]);
//         if(i != size - 1){
//             printf(",");
//         }

//     }

//     printf("]\n");

//     return 0;
//   }

// #include<stdio.h>
//   int main(){

//     int size;
//     printf("Size: ");
//     scanf("%d",&size);


//     int arr[size];
//     int i;

//     printf("Enter your array elements: \n");

//     for(int i = 0; i<size; i++){
//         scanf("%d",&arr[i]);
//     }

//     /// ascending order;

//     for(int i = 0; i<size - 1; i++){
//         for(int j = 0; j<size-1-i; j++){
//             if(arr[i] > arr[j+1]){
//                 int temp;
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }


//     printf("Ascending orders: [");

//     for(int i = 0; i<size; i++){
//         printf("%d ",arr[i]);
//         if(i != size - 1){
//             printf(",");
//         }
//     }

//     printf("]\n");


//     return 0;
//   }



// #include<stdio.h>
//   int main(){

//     int size;
//     printf("Size: ");
//     scanf("%d",&size);

//     int arr[size];
//     int i;

//     printf("Enter your array elements: \n");

//     for(int i = 0; i<size; i++){
//         scanf("%d",&arr[i]);
//     }

//     ///Decending orderss;

//     for(int i = 0; i<size-1; i++){
//         for(int j = 0; j<size-1-i; j++){
//             if(arr[j] < arr[j+1]){
//                 int temp;
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }


//     printf("Decending ordes: [");

//     for(int i = 0; i<size; i++){
//         printf("%d",arr[i]);
//         if(i != size -1){
//             printf(",");
//         }
//     }

//     printf("]\n");
//     return 0;
//   }


// #include<stdio.h>
//   int main(){

//     int size;
//     printf("Size: ");
//     scanf("%d",&size);

//     int arr[size];
//     int num;
//     int flag = 0;

//     printf("Enter your Array elements: \n");

//     for(int i = 0; i<size; i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("Searching elements: \n");
//     scanf("%d",&num);

//     for(int i = 0; i<size; i++){
//         if(arr[i] == num){
//             printf("Elements persents in %d index is %d",num,i);
//             flag = 1;
//             break;
//         }
//     }
//     if(!flag){
//         printf("Elements is not persents in %d index is %d",num);
//     }


//     return 0;
//   }


// #include<stdio.h>
//   int main(){

//     int size;
//     printf("Size: ");
//     scanf("%d",&size);

//     int arr[size];
//     int num;
//     int flag = 0;


//     printf("Enetr your Array elements: \n");

//     for(int i = 0; i<size; i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("Searching elements: ");
//     scanf("%d",&num);

//     for(int i = 0; i<size; i++){
//         if(arr[i] == num){
//             printf("Elements persent in %d index no %d",num,i);
//                   flag = 1;
//                   break;
//         }
//     }

//     if(!flag){
//         printf("Elements is not persents in %d index no %d",num);
//     }


//     return 0;
//   }

// #include<stdio.h>
//   int main(){

//     int size;
//     printf("Size: ");
//     scanf("%d",&size);

//     int arr[size];
//     int i;

//     printf("Enter your Array elements: \n");

//     for(int i = 0; i<size; i++){
//         scanf("%d",&arr[i]);
//     }

//     //ascending order;

//     for(int i = 0; i<size-1; i++){
//         for(int j = 0; j<size-1-i; j++){
//             if(arr[i] > arr[j+1]){
//                 int temp;
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }

//     printf("Ascending orders: [");
//     for(int i = 0; i<size; i++){
//         printf("%d ",arr[i]);
//         if(i != size - 1){
//             printf(",");
//         }
//     }

//     printf("]\n");


//     return 0;
//   }


// #include<stdio.h>
//    int main(){

//     int size;
//     printf("Size: ");
//     scanf("%d",&size);

//     int arr[size];
//     int i;

//     printf("Enter your array elements: \n");

//     for(int i = 0; i<size; i++){
//         scanf("%d",&arr[i]);
//     }

//     ///decending orders;

//     for(int i = 0; i<size-1; i++){
//         for(int j = 0; j<size-1-i; j++){
//             if(arr[j] < arr[j+1]){
//                 int temp;
//                 temp = arr[j];
//                 arr[j] = arr[j+1];
//                 arr[j+1] = temp;
//             }
//         }
//     }

//     printf("Decending orders: [");

//     for(int i = 0; i<size; i++){
//         printf("%d",arr[i]);
//         if(i != size - 1){
//             printf(",");
//         }
//     }

//     printf("]\n");

//     return 0;
//    }


// #include<stdio.h>
//   int main(){

//     int size;
//     printf("Size: ");
//     scanf("%d",&size);

//     int arr[size];
//     int num;
//     int flag = 0;
//     int i;

//     printf("Enter your Array elements: \n");

//     for(int i = 0; i<size; i++){
//         scanf("%d",&arr[i]);
//     }

//     printf("Searching elements: ");
//     scanf("%d",&num);

//     for(int i = 0; i<size; i++){
//         if(arr[i] == num){
//             flag = 1;
//             break;
//         }
//     }

//     if(flag == 1){
//         printf("Elements persent in %d array is %d",num,i);
//     }
//     else{
//         printf("Elements persent in %d is not array is %d",num);
//     }



//     return 0;
//   }



