#include<stdio.h>
   int main(){

     int a = 6;

     if(a>0  && a%2 == 0){
        printf("positive or even");
     }
     else if(a<0  && a%2 == 0){
        printf("negative or odd");
     }
     else{
        printf("End");
     }
     return 0;
     
    }

   