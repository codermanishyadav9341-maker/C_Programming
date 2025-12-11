#include<stdio.h>
   int main(){
          
        int a;
        int b;

        char ch;

        printf("Enter your first number: ");
        scanf("%d",&a);

        printf("Enter your second number: ");
        scanf("%d",&b);

        printf("Input : +,-,*,/,%%");
        scanf(" %c",&ch);

        switch(ch){

            case '+':
            printf("sum = %d",a+b);
            break;

            case '-':
            printf("sub = %d",a-b);
            break;

            case '*':
            printf("multi = %d",a*b);
            break;

            case '/':
            printf("divided = %d",a/b);
            break;

            case '%':
            printf("remainder = %d",a%b);
            break;

            default :
            printf("Invalid input");
        }

        return 0;
    }



   