#include<stdio.h>
  int main(){
       
    int day;

    printf("Enter your number: ");
    scanf("%d",&day);

    switch(day){

        case 1:
        printf("Monday");
        break;

        case 2:
        printf("Tuesday");
        break;

        case 3:
        printf("Wednesday");
        break;

        case 4:
        printf("Thrusday");
        break;

        case 5:
        printf("Friday");
        break;

        case 6:
        printf("saturday");
        break;
        
        case 7:
        printf("sunday");
        break;

        default :

        printf("Invalid number");

    }

    return 0;
    
  }






 
  



  