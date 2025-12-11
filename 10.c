#include<stdio.h>
  int main(){

       int age;

       printf("Enter your number: ");
       scanf("%d",&age);

       if(age >= 0  && age <= 12){
          printf("child");
       }
       else if(age >= 13  && age <= 19){
         printf("Teenger");
       }
       else if( age >= 20){
        printf("Adult");
       }
       return 0;
    }