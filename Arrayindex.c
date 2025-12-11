#include<stdio.h>
  int main(){

    int size;
    printf("Size: ");
    scanf("%d",&size);

    int arr[size];
    int index;

    printf("Enter your array elements: \n");

    for(int i = 0; i<size; i++){
        scanf("%d",&arr[i]);
    }

    printf("Index Number: ");
    scanf("%d",&index);
    
      for(int i = 0; i<size; i++){

        if(index >=0 && index < size){

        printf("Index %d = %d\n",index,arr[index]);
        break;

        }

        else{
            printf("No index: ");
            break;
        }

    }
    return 0;
  }