#include<stdio.h>
  int main(){

       int age;

       printf("Enter your number: ");
       scanf("%d",&age);

       if(age > 19){
          printf("eligible for voting");
       }
         else{
            printf("not eligible for voting");
         }

         return 0;
        }