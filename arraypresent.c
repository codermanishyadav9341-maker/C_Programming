#include<stdio.h>
   int main(){

    int size;
    printf("Size: ");
    scanf("%d",&size);

    int arr[size];

    int n;
    int flag = 0;

    printf("Enter your number: \n");
    scanf("%d",&n);

    printf("Enter Array elements: \n");

    for(int i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }


      printf("Array elements: ");

      for(int i = 0; i<size; i++){

        if(arr[i]==n){
            flag = 1;
            int t = arr[i];
            arr[i] = arr[i+1];
            arr[i+1] = arr[i];
            printf("Index  = %d",i);
            break;
        }
    }
    if(flag==0){
        printf("Number is not found");
    }
    return 0;
   }