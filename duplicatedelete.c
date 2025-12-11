#include<stdio.h>
  int main(){

    int s = 5;

    int arr[5] = {10,20,30,40,50};
    int num;
    printf("Enter which number is deleted : ");
    scanf("%d",&num);
    int flag = 0;

    for(int i = 0; i<s; i++){
        
        
            if(arr[i]==num){
                int flag=1;
                int  t = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = t;

            }
        
      
    }
      if(flag==0){
            s=s-1;
        }
    for(int i = 0; i<s; i++){
        printf("%d  ",arr[i]);
    }

    return 0;
  }