#include<stdio.h>
   
   int multi();

  int main(){

    int c = multi();
    printf("c = %d\n",c);

    return 0;
  }

  int multi(){
    int a;
    int b;
    printf("Enter your first number: ");
    scanf("%d",&a);

    printf("Enter your second number: ");
    scanf("%d",&b);

    int c = a*b;

    return c;
  }
