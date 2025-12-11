#include<stdio.h>
  int main(){

    int num1;
    int num2;

    printf("Enter your first number: ");
    scanf("%d",&num1);

    printf("Enter your last number: ");
    scanf("%d",&num2);

    while(num1<=num2){
        if(num1%2==1){
            printf("odd number is %d\n",num1);
        }
        num1++;
    }
    return 0;
  }