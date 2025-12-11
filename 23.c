#include<stdio.h>
      int main(){
             
        char ch;

        printf("Enter your character: ");
        scanf("%c",&ch);

        if(ch >= 'A'  &&  ch <= 'Z'){
            if(ch == 'A'  || ch == 'E'  || ch == 'I'  ||  ch == 'O' || ch == 'U'){
                printf("captial vowel");

            }
            else{
                printf("captial consonant");
            }
        }
        else if(ch >= 'a'  &&  ch <= 'z'){
            if(ch == 'a'  || ch == 'e'  || ch == 'i' ||  ch == 'o' || ch == 'u'){
                 printf("small vowel");
            }
            else{
                printf("small consonant");
            }
        }
        else if(ch >= '0'  &&  ch <= '9' ){
           if(ch == '1' || ch == '2' ||  ch == '3' || ch == '4'  || ch == '5' || ch == '6'  ||  ch == '7' || ch == '8' || ch == '9'){
                printf("number");
            }
        }
            else{
                printf("speciall characters");
            }
        

        return 0;
    }
          
       