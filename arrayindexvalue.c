#include<stdio.h>
   int main(){
    
    int size = 5;
    int arr[5] = {8,55,4,2,1};

    arr[1] = 55;

    for(int i = 0; i<5; i++){
        printf(" arr[1] = %d\n ",arr[1]);
        break;
    }
    return 0;
   }