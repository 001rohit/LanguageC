#include <stdio.h>
// 


// #1.  Write a program to print the circumference and area of a circle of radius entered by user by defining your own function.
void circleCircum(int red){
    float pi = 3.14; 
    float res = 2*pi*red;
     printf("circumference of circle res : %f\n",res);
    float areaCircle = pi*red*red;
    printf("area of circle :  %f",areaCircle);
}

// #2.  Write a program to print the sum of two numbers entered by user by defining your own function
void sum(int a, int b){
         int c = a+b;
         printf("\n sum of two number is: %d",c);
}

// #3.  Write a program to find the factorial of a given number by using a function in C++ programming language.

void  factorial(int num1){
    int sum=1;
   for(int a =1; a<=num1;a++){
    sum= sum*a;
   }
   printf("%d",sum);
}
// #4.  Write a program that calculates 6^5. Declare your own function to do this.

void calc(int res){
        int multi;
    for(int a=1;a<res;a++){
         multi=res*a;
         
    }
    printf("%d",multi);
             
}

int main(){
    int a=6;
   factorial(6);

    int x,y;
    scanf(" %d ",&x);
    printf(" Enter the first number :  %d ",x);

    scanf(" %d",&y);
    printf("\n Enter the second number: %d ",y);
    sum(x,y);

     int a=5;
        circleCircum(5);

    int c=7;
    calc(c);
}
