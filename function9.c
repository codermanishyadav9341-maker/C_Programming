#include<stdio.h>

int input();

 int main(){
     
     int num = input();
     (num%2==0) ?
     printf("even number ") : printf("odd");
     
     return 0;
 }
 int input(){
     int num;
     printf("Enter your number: ");
     scanf("%d",&num);
     
     return num;
 }