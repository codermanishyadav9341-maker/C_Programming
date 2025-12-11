#include<stdio.h>
     int main(){

        char ch;

        printf("Enter your cosonant: ");
        scanf("%c",&ch);

        if(ch >= 'A'   &&  ch <= 'Z'){
            if(ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U'){             
                printf("captial vowel");
            }
            printf("captial cosonant");
        }
        else if(ch >= 'a'  &&  ch <= 'z'){
            if(ch == 'a' || ch == 'e'  || ch == 'i'  || ch == 'o' || ch == 'u'){
                printf("small vowel");
            }
            else{
                printf("small cosonant");
            }
        }
        printf("end");

        return 0;
    }