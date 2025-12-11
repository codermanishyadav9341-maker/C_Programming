#include<stdio.h>
  int main(){

    char ch;
    printf("Enter your alpha: ");
    scanf("%c",&ch);

    while(ch>='a'){
        printf("%c ",ch);
        ch--;
    }

     return 0;
  }