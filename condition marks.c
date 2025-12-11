#include<stdio.h>
int main(){

    int marks;
    printf("Enter your number: ");
    scanf("%d",&marks);

    if(marks >= 90){
        printf("Grade A");
    }
    else if(marks >= 75){
    printf("Grade B");
    }
    else if(marks >= 50){
        printf("Grade c");
    }
     else if(marks < 50){
        printf("Grade F");
     }
     else{
        printf("Invalid number");
     }

         return 0;

    }
