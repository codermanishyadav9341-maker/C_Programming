#include<stdio.h>

     int sum();

   int main(){

    int c = sum();
    printf("c = %d\n",c);



    return 0;
   }
   int sum(){
    int a; 
    int b;

    printf("Enter your first number: ");
    scanf("%d",&a);

    printf("Enter your second number: ");
    scanf("%d",&b);

    int c = a+b;


    return c;
   }