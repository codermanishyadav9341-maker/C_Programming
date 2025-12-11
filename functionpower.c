#include<stdio.h>

void power(){
    int base;
    int power;
    int i = 1;

    printf("Enter your base: \n");
    scanf("%d",&base);

    printf("Enter your power: \n");
    scanf("%d",&power);

    while(power>0){

        i = i * base;
        power--;
    }

    printf("%d ",i);
    
    

    

}
  int main(){

    power();

    return 0;
  }