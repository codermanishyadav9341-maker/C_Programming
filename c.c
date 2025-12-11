#include<stdio.h>
  int main(){
     int age;

     printf("Enter your number: ");
     scanf("%d",&age);

  //   (age > 19) ? printf("it is eligible for voting")  : printf("it is not eligible for voting");

    if(age > 19){
        printf("it is eligible for voting");
    }
    else{
        printf("it is not eligible for voting");
    }

     return 0;
  }