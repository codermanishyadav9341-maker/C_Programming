#include<stdio.h>
   int main(){
     int n;

     printf("Enter your number: ");
     scanf("%d",&n);

//(n%2==0) ? printf("n is even")  :  printf("n is odd");

if(n%2==0){
    printf("n is even");
}
else{
    printf("n is odd");
}

     return 0;
   }