#include<stdio.h>
  int main(){

    int size;
    printf("Size: \n");
    scanf("%d",&size);

    int arr[size];
    int product = 1;

    printf("Enter your array: \n");

    for(int i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }
  
    printf("Array elements: \n");

    for(int i = 0; i<size; i++){
        product = product * arr[i];
    }
    printf("%d  ",product);

    return 0;
  }