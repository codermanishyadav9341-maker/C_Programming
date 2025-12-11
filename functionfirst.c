#include<stdio.h>

void num();

  int main(){

     num();


    return 0;
  }

  void num(){
    int first digit = 0;
    int last digit = 0;
    int num;

    printf("Enter your number: \n");
    scanf("%d",&num);

    last digit = num % 10;

    while(num >= 10){
        num = num / 10;
    }
    first digit = num;

    printf("first digit = %d",first digit);
    printf("last digit = %d",last digit);


    
  }
