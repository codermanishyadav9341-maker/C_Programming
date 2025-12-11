// Alogorithms;

// #include<stdio.h>
//     int main(){

//         int a;
//         int b;

//         printf("Enter your first number: ");
//         scanf("%d",&a);

//         printf("Enter your second number: ");
//         scanf("%d",&b);

//         if(a>b){
//             printf("Maximum");
//         }
//          else{
//             printf("Minimum");
//          }
//         return 0;
//     }


// #include<stdio.h>
//     int main(){

//         int age;
//         printf("Enter your Age:- ");
//         scanf("%d",&age);

//         if(age>18){
//             printf("Eligible for voting");
//         }
//           else{
//             printf("No eligible for voting");
//           }
//         return 0;
//     }

// #include<stdio.h>
//     int main(){

//         float radius;
//         float circumference;
//         float $ = 3.14;

//         printf("Enter your radius:- ");
//         scanf("%f",&radius);

//         circumference = (2*$*radius);

//         printf("Circumference of circle = %f",circumference);

        
//         return 0;
//     }

// #include<stdio.h>
//      int main(){

//         int num;
//         printf("Enter your number: ");
//         scanf("%d",&num);

//         if((num%5==0) && (num%11==0)){
//             printf("It is divisible by 5 or 11");
//         }
//          else{
//             printf("It is not divisible by 5 or 11");
//          }
//         return 0;
//      }


// #include<stdio.h>
//      int main(){

//         int i = 1;

//         int num;
//         printf("Enter your number: ");
//         scanf("%d",&num);

//         while(i<=num){
//             printf("%d ",i);
//         }
//         return 0;
//      }

// #include<stdio.h>
//     int main(){

//         int costprice;
//         int sellingprice;

//         printf("Enter your Cost price:- ");
//         scanf("%d",&costprice);

//         printf("Enter your Selling price:- ");
//         scanf("%d",&sellingprice);

//         int profit = (sellingprice - costprice);

//         if(profit > 0){
//             printf("Profit");
//         }
//          else{
//             printf("Loss");
//          }
//         return 0;
//     }



// Variable && Data Types;


//  #include<stdio.h>
//     int main(){

//         int num1;
//         int num2;

//         printf("Enter your first number:- ");
//         scanf("%d",&num1);

//         printf("Enter your second number:- ");
//         scanf("%d",&num2);

//         printf("Sum = %d",(num1+num2));

//         return 0;
//     }


// #include<stdio.h>
//      int main(){

//         int num1;
//         float num2;

//         printf("Enter your first number: ");
//         scanf("%d",&num1);

//         printf("Enter your second number: ");
//         scanf("%f",&num2);

//         printf("Sum = %.2%f\n",(num1+num2));

//         return 0;
//      }


// #include<stdio.h>
//     int main(){

//         char ch1;
//         char ch2;

//         printf("Enter your first charatcers:- ");
//         scanf("%c",&ch1);

//         printf("Enter your second characters:- ");
//         scanf(" %c",&ch2);

//         while(ch1<=ch2){
//             printf("%d ",ch1);
//              ch1++;
//         }
//         return 0;
//     }

// #include<stdio.h>
//     int main(){

//         int age;
//         printf("Enter your Age:- ");
//         scanf("%d",&age);

//         if(age>18){
//             printf("Eligible for voting");
//         }
//          else{
//             printf("Not eligible for voting");
//          }

//         return 0;
//     }

// #include<stdio.h>
//     int main(){

//         float physics;
//         float chemistry;
//         float maths;

//         int totalmarks = 500;
//         float percentage;

//         printf("Enter your Physics marks:- ");
//         scanf("%f",&physics);

//         printf("Enter your Chemistry marks:- ");
//         scanf("%f",&chemistry);

//         printf("Enter your Mathsmatics Matrks:- ");
//         scanf("%f",&maths);

//         float obtainmarks = (physics + chemistry + maths);

//          percentage = obtainmarks / totalmarks * 100;

//          printf("Percentage of three Subject = %f",percentage);


//         return 0;
//     }

// #include<stdio.h>
//    int main(){

//     char ch1;
//     char ch2;
//     char ch3;

//     printf("Enter your first characters:- ");
//     scanf("%c",&ch1);

//     printf("Enter your second characters:- ");
//     scanf(" %c",&ch2);

//     printf("Enter your third characters:- ");
//     scanf(" %c",&ch3);

//     printf("\n");

//     printf("First = %c\nSecond = %c\nThird = %c\n",ch1,ch2,ch3);

//     return 0;
//    }


// OPERATORS;
// //(Code:- 1)

// #include<stdio.h>

//      int main(){

//       int a;
//       int b;

//       printf("Enter your first number:- ");
//       scanf("%d",&a);

//       printf("Enter your second number:- ");
//       scanf("%d",&b);

//       int c = (a+b);

//       printf("Sum = %d",c);

//       return 0;
//      }

   

// #include<stdio.h>
//     int main(){

//       int a;
//       int b;

//       printf("Enter your first number:- ");
//       scanf("%d",&a);

//       printf("Enter your second number:- ");
//       scanf("%d",&b);

//       int c = (a-b);

//       printf("Sub = %d",c);

//       return 0;
//     }




// #include<stdio.h>
//     int main(){

//       int a;
//       int b;

//       printf("Enter your first number:- ");
//       scanf("%d",&a);

//       printf("Enter your second number:- ");
//       scanf("%d",&b);

//       int c = (a*b);

//       printf("Product = %d",c);

//       return 0;
//     }


// #include<stdio.h>
//       int main(){

//          int a;
//          int b;

//          printf("Enter your first number:- ");
//          scanf("%d",&a);

//          printf("Enter your second number:- ");
//          scanf("%d",&b);

//          int c = (a/b);

//          printf("Divided = %d",c);


//          return 0;
//       }



// #include<stdio.h>
//     int main(){

//       int a;
//       int b;

//       printf("Enter your first number:- ");
//       scanf("%d",&a);

//       printf("Enter your second number:- ");
//       scanf("%d",&b);

//       int c = (a%b);

//       printf("Remainders = %d",c);


//       return 0;
//     }


// #include<stdio.h>
//   int main(){

//    int a;
   
//    printf("Enter your number:- ");
//    scanf("%d",&a);

//    int c = a++ + ++a  + ++a + a++ + a++;

//    printf("%d",c);

//    return 0;
//   }


// #include<stdio.h>
//      int main(){

//       int num1;
//       int num2;

//       printf("Enter your first number:- ");
//       scanf("%d",&num1);

//       printf("Enter your second number:- ");
//       scanf("%d",&num2);

//       int c = (num1 && num1);

//       printf("%d ",c);
      
//       return 0;
//      }

// #include<stdio.h>
//     int main(){

//      int num;
//      printf("Enter your number:- ");
//      scanf("%d",&num);

//      if(num%2==0){
//           printf("Even number");
//      }
//       else{
//           printf("Odd number");
//       }

//      return 0;
//     }



// #include<stdio.h>
//      int main(){

//           int num1;
//           int num2;

//           printf("Enter your first number:- ");
//           scanf("%d",&num1);

//           printf("Enter your second number:- ");
//           scanf("%d",&num2);

//           (num1>num2) ? printf("Largest number") : printf("Smallest number");

//           return 0;
//      }


// #include<stdio.h>
//     int main(){

//      int num1;
//      int num2;

//      printf("Enter your first number:- ");
//      scanf("%d",&num1);

//      printf("Enter your second number:- ");
//      scanf("%d",&num2);

//      printf("Before Swaping: \n");

//      printf("a = %d    b = %d\n",num1,num2);

//      printf("After Swaping: \n");

//     int temp;
//     temp = num1;
//     num1 = num2;
//     num2  = temp;

//      printf("a = %d   b = %d",num1,num2);

//      return 0;
//     }


// #include<stdio.h>
//     int main(){

//      int num1;
//      int num2;

//      printf("Enter your first number:- ");
//      scanf("%d",&num1);

//      printf("Enter your second number:- ");
//      scanf("%d",&num2);

//      int c = (num1 && num2) || (num1 && num2);

//      printf("ans = %d",c);

//      return 0;
//     }



// CONDITIONALS;


// #include<stdio.h>
//      int main(){

//           int num1;
//           int num2;

//           printf("Enter your first number:- ");
//           scanf("%d",&num1);

//           printf("Enter your second number:- ");
//           scanf("%d",&num2);

//           if(num1>num2){
//                printf("Largest number");
//           }
//             else{
//                printf("Smallest number");
//             }

//           return 0;
//      }


// #include<stdio.h>
//     int main(){

//      int years;

//      printf("Enter your Years:- ");
//      scanf("%d",&years);

//      if(years%4==0){
//           if(years%100==0){
//                if(years%400==0){
//                     printf("Leap years");
//                }                                             
//                 else{
//                     printf("It is not leap years");
//                 }
//           }
//            else{
//                printf("leap years");
//            }
//      }
//       else{
//           printf("It is not leap years");
//       }
//      return 0;
//     }




// #include<stdio.h>
//      int main(){

//         int years;
//         printf("Years:- ");
//         scanf("%d",&years);

//         if(years%4==0){
//             if(years%100==0){
//                 if(years%400==0){
//                     printf("Leap Years");
//                 }
//                  else{
//                     printf("It is not leap years");
//                  }
//             }
//             else{
//                 printf("Leap Years");
//             }
//         }
//          else{
//             printf("It is not Years");
//          }
//         return 0;
//      }


// #include<stdio.h>
//    int main(){

//       int a;
//       int b;

//       printf("Enter your First number:- ");
//       scanf("%d",&a);

//       printf("Enter your Second number:- ");
//       scanf("%d",&b);

//       a = a+b;
//       b = a-b;
//       a = a-b;

//       printf("a = %d  b = %d",a,b);

//     return 0;
//    }


// #include<stdio.h>
//    int main(){

//       int costprice;
//       int sellingprice;

//       printf("Enter your Cost Price:- ");
//       scanf("%d",&costprice);

//       printf("Enter your Selling Price:- ");
//       scanf("%d",&sellingprice);

//       int profit = (sellingprice - costprice);

//       if(profit > 0){
//          printf("Profit");
//       }
//         else{
//          printf("Loss");
//         }
//       return 0;
//    }

// #include<stdio.h>
//     int main(){

//       int angle1;
//       int angle2;
//       int angle3;

//       printf("Enter your first angle1:- ");
//       scanf("%d",&angle1);

//       printf("Enter your second angle2:- ");
//       scanf("%d",&angle2);

//       printf("Enter your third angle3:- ");
//       scanf("%d",&angle3);

//       int sum = (angle1 + angle2 +angle3);

//       if(sum==180){
//          printf("It is valid for triangle");
//       }
//        else{
//          printf("It is not Valid for triangle");
//        }

//       return 0;
//     }


// #include<stdio.h>
//    int main(){

//       int num;
//       printf("Enter your number:- ");
//       scanf("%d",&num);

//       if(num>=0){
//          if(num>0){
//             printf("Positive");
//          }
//           else{
//             printf("zero");
//           }
//       }
//        else{
//          printf("Negative");
//        }
//       return 0;
//    }

// #include<stdio.h>
//     int main(){

//       int years;

//       printf("Enter your Years:- ");
//       scanf("%d",&years);

//       if(years%4==0){
//          if(years%100==0){
//             if(years%400==0){
//                printf("Leap Years");
//             }
//              else{
//                printf("It is not Leap Years");
//              }
//          }
//           else{
//             printf("Leap Years");
//           }
//       }
//        else{
//          printf("It is not Leap Years");
//        }
//       return 0;
//     }

// #include<stdio.h>
//     int main(){

//       int years;
//       printf("Enter your Years:- ");
//       scanf("%d",&years);

//       if((years%4==0) || (years%100==0) && (years%400==0)){
//          printf("Leap Years");
//       }
//        else{
//          printf("It is not Leap Years");
//        }
//       return 0;
//     }



// #include<stdio.h>
//     int main(){

//       int angle1;
//       int angle2;
//       int angle3;

//       printf("Enter your angle1:- ");
//       scanf("%d",&angle1);

//       printf("Enter your angle2:- ");
//       scanf("%d",&angle2);

//       printf("Enter your angle3:- ");
//       scanf("%d",&angle3);

//       if(angle1 == angle2){
//          if(angle2 == angle3){
//             printf("Equilateral triangle");
//          }
//           else{
//             printf("Isosceles triangle");
//           }
//       }
//        else if((angle1 == angle3) || (angle2 == angle3)){
//               printf("Isosceles triangle");
//        }
//         else{
//          printf("scalene triangle");
//         }

//       return 0;
//     }


// #include<stdio.h>
//     int main(){

//       int num;
//       printf("Enter your number:- ");
//       scanf("%d",&num);

//       if((num%2==0) && (num%3==0)){
//          printf("It is divisible by 2 and 3");
//       }
//        else{
//          printf("It is not divisible by 2 and 3");
//        }
//       return 0;
//     }

// #include<stdio.h>
//    int main(){

//       int num;
//       printf("Enter your number:- ");
//       scanf("%d",&num);

//       if(num%2==0){
//          if(num%3==0){
//             printf("It is divisible by 2 and 3");
//          }
//            else{
//             printf("It is not divisible by 2 and 3");
//            }
//       }
//         else{
//           printf("It is not divisible by 2 and 3");
//         }
//       return 0;
//    }



// #include<stdio.h>
// #include<stdlib.h>

//      struct student{

//       char name[50];
//       int id;
//       float marks;

//      };

//    int main(){

//       struct student srr[3];

//        for(int i = 0; i<3; i++){
        
//          printf("Enter your Name:- ");
//          scanf("%s",&srr[i].name);

//          printf("Enter your id:- ");
//          scanf("%d",&srr[i].id);

//          printf("Enter your Marks:- ");
//          scanf("%f",&srr[i].marks);

//          getchar();

//        }

//        printf("\n");

//        for(int i = 0; i<3; i++){

//        printf("Student Name:- %s\nStudent Id:- %d\n Student marks:- %f\n",srr[i].name,srr[i].id,srr[i].marks);

//        }

      
//       return 0;
//    }



#include<stdio.h>
    int main(){

      int a;
      int b;

      printf("Enter your First number:- ");
      scanf("%d",&a);

      printf("Enter your Second number:- ");
      scanf("%d",&b);

      printf("Sum = %d",(a+b));

      return 0;
    }