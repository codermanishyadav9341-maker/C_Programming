#include<stdio.h>
  int main(){

      int salary;

      printf("Enter your number: ");
      scanf("%d",&salary);

      if(salary <= 10000){
        printf("0%% taxx");
      }
      else if(salary <= 30000){
        printf("10%% taxx");
      }
      else if(salary <= 50000){
        printf("20%% taxx"); 
      }
      else{
        printf("30%% taxx");
      }
      return 0;
    }