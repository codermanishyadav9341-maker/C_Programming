#include<stdio.h>
  int main(){
      
      int base;
      int power;
      int i = 1;
      
      printf("Enter your base: ");
      scanf("%d",&base);
      
      printf("Enter your power: ");
      scanf("%d",&power);
      
      while(power>0){
          base = base*i;
          printf("%d ",base);
          power--;
      }
      
      
      
      return 0;
  }
  