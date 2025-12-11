#include<stdio.h>
    int main(){

        int product = 1;
        int arr[5];

        printf("Enter your array: \n");

        for(int i = 0; i<5; i++){
            scanf("%d",&arr[i]);
        }

        printf("Array element: ");

        for(int i = 0; i<5; i++){
            product*=arr[i];
        }
        printf("%d  ",product);

        return 0;
    }