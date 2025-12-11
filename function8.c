#include<stdio.h>

 int input();

 

  int main(){

    int a = input();
    (a>0)? printf("positive")  :  printf("negative");

    return 0;
  }
  int input(){
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);

    return num;
  }