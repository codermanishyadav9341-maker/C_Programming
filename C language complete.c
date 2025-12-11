#include<stdio.h>
  int main(){

    int a;
    printf("Enter your first number: ");
    scanf("%d",&a);

    int b;
    printf("Enter your second numner: ");
    scanf("%d",&b);

    int c = (a<b);

    printf("%d",c);

    return 0;
  }