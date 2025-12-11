#include<stdio.h>
    int main(){

        int i;
        int n;

        printf("Enter your first number: ");
        scanf("%d",&i)

        printf("Enter your second number: ");
        scanf("%d",&n);

     //   int i = a;

       // printf("Even number are %d and %d",i,a);


        while(i <= n){

            if(i % 2 == 0){
                i++;

            }
            printf("%d ",i);
            i++;
        }
        return 0;
    }