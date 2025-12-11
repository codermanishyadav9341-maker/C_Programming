#include<stdio.h>
  int main() {
     int a;
     int b;

     printf("Enter your 1st number: ");
     scanf("%d",&a);

     printf("Enter your 2nd number: ");
     scanf("%d",&b);

     if(a>b){
        if(a % 2 == 0  &&  a > 0){
            printf("positive or even: ");
        }
        else if(b>a){
            if(b % 2 == 0  &&  b > 0){
                printf("negative or odd: ");
            }
        }
        else{
            printf("both are equall");
        }
     }
     return 0;
  }