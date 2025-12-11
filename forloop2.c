#include<stdio.h>
   int main(){
      
    char ch;

    printf("Enter your alpha: ");
    scanf("%c",&ch);

    for(ch = 'Z';  ch; ch >= 'A'; ch--){

        printf("%d ",ch);

    }

    return 0;
   }