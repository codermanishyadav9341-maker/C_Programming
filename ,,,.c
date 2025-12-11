#include<stdio.h>
   int main(){
      int a;
      int b;

      printf("Enter your first number: ");
      scanf("%d",&a);

      printf("Enter your second number: ");
      scanf("%d",&b);

      int c = a + b;

     // printf("%d",c);
     printf("%d + %d = %d",a,b,c);

      return 0;
   }