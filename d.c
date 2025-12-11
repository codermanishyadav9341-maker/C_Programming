#include<stdio.h>
  int main(){
      int n;

      printf("Enter your number: ");
      scanf("%d",&n);

   //   (n>=0) ? printf("positive")  : printf("negative");

   if(n>=0){
    printf("positive");
   }
   else{
    printf("negative");
   }

      return 0;

  }