#include<stdio.h>
  int main(){

    int arr[5];

    printf("Enter your number in arry:\n");

    for(int i = 0; i<5; i++){
        scanf("%d",&arr[i]);
    }
    printf("Arry element: ");
    for(int i = 0; i<5; i++){
        printf("%d ",arr[i]);
    }

    return 0;
  }