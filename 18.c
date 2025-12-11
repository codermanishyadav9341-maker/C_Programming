#include<stdio.h>
   int main(){

       int a;
       int b;

       printf("Enter your first number: ");
       scanf("%d",&a);

       printf("Enter your second number: ");
       scanf("%d",&b);

       (a>b && a<b)?  printf("greater")  :  printf("less");

       return 0;
   }