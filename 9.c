#include<stdio.h>
  int main(){

       int marks;

       printf("Enter your number: ");
       scanf("%d",&marks);

       if(marks > 80){
        printf("Grade A");
       }
       else if(marks > 60){
        printf("Grade B");
       }
       else if(marks > 40){
        printf("Grade C");
       }
       else{
        printf("fail");
       }
       return 0;
    }