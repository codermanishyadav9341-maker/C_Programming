// Online C compiler to run C program online
#include <stdio.h>
int main(){
    int a;
    int b;
    int c;
    
    printf("Enter your first aangle: ");
    scanf("%d",&a);
    
    printf("Enter your second angle: ");
    scanf("%d",&b);
    
    printf("Enter your third angle: ");
    scanf("%d",&c);
    
    if(a==b){
        if(a==c){
            printf("equalliteral");
        }
        else{
        printf("isocelles");
        }
    }
    else{
        if(b==c){
            printf("isocelles");
        }
        else{
            printf("scallene");
        }
    }
    return 0;
    
}

