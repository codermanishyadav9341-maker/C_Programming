#include<stdio.h>

void sub();
     int main(){

        sub();
        return 0;
     }

     void sub(){

        int a;
        int b;

        printf("Enter your first number: \n");
        scanf("%d",&a);

        printf("Enter your second number: \n");
        scanf("%d",&b);

        int c = a-b;

        printf("%d ",c);
     }