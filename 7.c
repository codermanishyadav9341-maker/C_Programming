#include<stdio.h>
   int main(){
      int num;

      printf("Enter your number: ");
      scanf("%d",&num);

      if(num % 2 == 0){
        printf("Three digits are even number : ");
      }
      else{
        printf("Three digits are odd number: ");
      }

      return 0;
   }