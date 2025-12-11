#include<stdio.h>
  int main(){

    int i = 1;
    int base;
    int power;

    printf("Enter your base: ");
    scanf("%d",&base);

    printf("Enter your power: ");
    scanf("%d",&power);

    while(power>0){
        i = i * base;
        power--;
    }
    printf("%d ",i);

    return 0;
  }