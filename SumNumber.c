#include <stdio.h>
// #2 write a function that takes 3 input from the user  and print the sum of number

void sumFunction(int a,int b,int c){
     printf("%d,%d and %d sum  is %d",a,b,a+b+c);
}
int main(){
  int a;
  int b;
  int c;
  scanf("%d",&a);
  printf(" the first number is :%d\n",a);

  scanf("%d",&b);
  printf(" the second number is :%d\n",b);
 
 scanf("%d",&c);
  printf(" the third number is :%d\n",c);
 
  sumFunction(a,b,c);
}