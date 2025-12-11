#include<stdio.h>
  int main(){

      int a;

      printf("Enter your number: ");
      scanf("%d",&a);

      if(a%2==0){
        printf("it is divisible by 10");
      }

       else{
        printf("it is not divisible by 10");
       }

       return 0;
    }