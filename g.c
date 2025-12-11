#include<stdio.h>
   int main(){
      int a;
      int b;

      printf("Enter your first number: ");
      scanf("%d",&a);

      printf("Enter your second number: ");
      scanf("%d",&b);

      if(a >= b){
         if(a > b){
            printf("a is maximum and b is minimum");
         }
         else{
            printf("a is equall to b");
         }
      }
      else if(b > a){
        printf("b is maximum and a is minimum");
      }

      return 0;
    }       
      
            
      

   