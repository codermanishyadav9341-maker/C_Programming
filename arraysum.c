#include<stdio.h>
  int main(){

    
    int sum =1;
    int arr[5];

    printf("Enter your array: \n");
    

    for(int i = 0; i<5; i++){
        scanf("%d",&arr[i]);
    }

    printf("Array element");

    for(int i = 0; i<5; i++ ){
        sum+=arr[i];

    }
    printf("%d  ",sum);

    return 0;
  }