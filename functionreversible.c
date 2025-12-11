#include<stdio.h>

int reversible();

  int main(){

    int ans = reversible();

    printf("%d",ans);
    return 0;
  }

  int reversible(){
    int reversible = 0;
    int remainder = 1;
    int n;

    printf("Enter your number: \n");
    scanf("%d",&n);

    while(n != 0){

        remainder = n%10;
        reversible = reversible*10+remainder;
        n = n/10;
    }
    

    return reversible;
  }