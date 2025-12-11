#include<stdio.h>
 int main(){
       
    int percentage;

    printf("Enter your number: ");
    scanf("%d",&percentage);

    if(percentage >= 60){
        printf("First Division");
    }
    else if(percentage >= 45){
        printf("Second Division");
    }
    else if(percentage >= 33){
        printf("Third Division");
    }
    else{
        printf("Fail");
    }

    return 0;
}
      