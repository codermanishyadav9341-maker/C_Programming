#include<stdio.h>

 int input();

   int main(){

     int a = input();
     (a>18)? printf("eligible for voting") : printf("not eligible for voting");

    return 0;
   }
   
   int input(){

    int num;
    printf("Enter your number: ");
    scanf("%d",&num);

    return num;
   }
    