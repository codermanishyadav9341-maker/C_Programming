#include<stdio.h>
  int main(){

    int num;
    printf("Enter your number: ");
    scanf("%d",&num);

    for(int i = 1; i<=num; i++){
        for(int a = 1; a<=num; a++){

            printf("*  ");
        }

        printf("\n");
    }
    return 0;
  }