#include<stdio.h>
    int main(){
         
        int months;

        printf("Enter your number: ");
        scanf("%d",&months);

        switch(months){

            case 12:
            case 1:
            case 2:

            printf("winter season");
            break;

            case 3:
            case 4:
            case 5:
                  printf("spring season");
                  break;

             case 6:
             case 7:
             case 8:
                   printf("summer season");
                   break;

             case 9:
             case 10:
             case 11:
                    printf("autumn");
                    break;
              
                    default :
                    printf("Invalid number");

        }

        return 0;
    }
         