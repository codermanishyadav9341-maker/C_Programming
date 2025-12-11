#include<stdio.h>
    int main(){

      int a;
      int b;
      char ch;

      printf("Enter your first number: ");
      scanf("%d",&a);

      printf("Enter your second number: ");
      scanf("%d",&b);

      printf("Input :- +,-,*,/,%%: ");
      scanf(" %c",&ch);

      switch(ch){

        case '+':
        printf("Sum = %d",(a+b));
        break;

        case '-':
        printf("Sub = %d",(a-b));
        break;

        case '*':
        printf("Multi = %d",(a*b));
        break;

        case '/':
        printf("Diveded = %d",(a/b));
        break;

        case '%':
        printf("Remainders = %d",(a%b));
        break;

        default:
        printf("Invalid Inputs: ");
        break;

      }
      return 0;
      
    }