#include<stdio.h>
    int main(){

        int age;

        printf("Enter your number: ");
        scanf("%d",&age);

        (age > 100)? printf("junior citizens")  : printf("senior citizens");
    
    return 0;
    }