#include<stdio.h>
int main(){
     
    int mass;

    printf("Enter your mass: ");
    scanf("%d",&mass);

    if(mass < 18.5){
        printf("underweight");
    }
    else if( 18.5 - 24.5){
        printf("normal");
    }
    else if( 25 - 29.9){
           printf("overweight");
    }
    else if(mass >= 30){
        printf("obese");
    }

    return 0;
}
