#include<stdio.h>
  int main(){

    int size;

    printf("Size: \n");
    scanf("%d",&size);

    int arr[size];

    printf("Enter your Array elements: \n");

    for(int i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Array elements: \n");

        for(int i = 0; i<size; i++){

            printf("%d is index = %d\n",arr[i]);

        }
    

    return 0;
  }