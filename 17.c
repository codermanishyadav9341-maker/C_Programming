#include<stdio.h>
    int main(){

        int age;

        printf("Enter your number: ");
        scanf("%d",&age);

        (age > 21)?   printf("Adult")  :  printf("Minor");

        return 0;
    }
    