#include<stdio.h>
   int main(){
    int num;
    int reversible = 0;
    int remainder = 1;

    printf("Enter your number: ");
    scanf("%d",&num);

    while(num!=0){
        remainder = num%10;
        reversible = reversible * 10 + remainder;
        num = num/10;
    }
    printf("%d ",reversible);


    return 0;
   }