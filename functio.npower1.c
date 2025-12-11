#include<stdio.h>

void power();

  int main(){

    power();
    
    return 0;
  }

  void power(){

    int base;
    int power;
    int result = 1;

    printf("Enter your base: \n");
    scanf("%d",&base);

    printf("Enter your power: \n");
    scanf("%d",&power);

    while(power>0){

        result = result*base;
        power--;

    }
    printf("%d  ",result);
  }