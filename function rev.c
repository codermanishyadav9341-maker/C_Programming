#include<stdio.h>
  

    void prime(){
    int num;
    int count = 0;
    printf("Enter your number: \n");
    scanf("%d",&num);

    for(int i = 2; i<=num; i++){
        if(num%i==0){
            count = 1;
            break;
        }

    }
    }
if(count==0){
    printf(" %d is prime",num);

}
else{
    printf("%d is not prime ",num);
}

int main(){

     prime();
    
    return 0;
  }