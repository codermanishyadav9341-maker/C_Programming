#include<stdio.h>


  int input();


   int main(){

    int a = input();
    printf("a = %d\n",a);

    int b = input();
    printf("b = %d\n",b);


    return 0;
    
   }

   int input(){
    int num;
    printf("Enter your number: ");
    scanf("%d",&num);

    return num;
   }






