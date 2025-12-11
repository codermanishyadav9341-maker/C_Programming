#include<stdio.h>
int main(){

   int units;
   int price=0;

    printf("Enter your number: ");
   scanf("%d",&units);

   if(units <= 100){
     price = units*5;
     printf("price : %d",price);
   }

   else if(units <= 300){
    price = units*7;
    printf("price : %d",price);
   }
   else if(units > 300 ){
    price = units*10;
    printf("price : %d",price);
   }

   else{
    printf("Invalid number");
   }

   return 0;
}
