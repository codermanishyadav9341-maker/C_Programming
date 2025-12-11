#include<stdio.h>
  int main(){
      int a;

      printf("Enter your number: ");
      scanf("%d",&a);

      if(a%2==0  &&  a>0){
          printf("positive and even");
      }
      else{
        printf("negative and odd");
      }

      return 0;
  }