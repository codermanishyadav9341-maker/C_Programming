#include<stdio.h>
  int main(){
    int num;
    int flag = 0;

    printf("Enter your number: \n");
    scanf("%d",&num);

    int arr[num];
    

    printf("Enter your Array element: \n");

    for(int i = 0; i<num; i++){
        scanf("%d",&arr[i]);

    }
    printf("Array elements: \n");

    for(int i = 0; i<num; i++){
        int temp = arr[i];
        arr[i] = arr[i+1];
        arr[i+1] = temp;

        flag = 1;

    }
    if(flag==0){
        num = num-1;
        for(int i = 0; i<num; i++){
            printf("%d  ",num);
        }
    }
    else{
        printf("%d is not found: \n",num);
    }

    return 0;
  }