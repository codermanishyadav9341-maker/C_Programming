#include<stdio.h>

  int sub();
      
       
       int main(){

        int c = sub();
        printf("c = %d\n",c);

        return 0;
       }

       int sub(){
        int a;
        int b;

        printf("Enter your first number: ");
        scanf("%d",&a);

        printf("Enter your second number: ");
        scanf("%d",&b);

        int c = a-b;

        return c;
       }
