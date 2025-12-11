#include<stdio.h>
  int main(){

    int i = 1;
    int num;
    int factorial = 1;

    printf("Enter your number: ");
    scanf("%d",&num);

    while(i<=num){
        factorial = factorial * i;
        i++;
    }
    printf("%d ",factorial);


    return 0;
  }