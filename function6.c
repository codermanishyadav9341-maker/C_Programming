#include<stdio.h>

int num();

   int main(){

    int c = num();
    (c%2==0)? printf("maximum") : printf("minimum");


    return 0;
   }
   int num(){
    int a;
    int b;

    printf("Enter your first number: ");
    scanf("%d",&a);

    printf("Enter your second number: ");
    scanf("%d",&b);

    int c = a<b;

   return c;

   }
