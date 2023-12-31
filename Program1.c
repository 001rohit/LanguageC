#include <stdio.h>
int main(){
    // int sum ,num,a;
    
  
//   1) rever order using while loop
  int a =10;
  while(a>=0){
    printf("%d \n",a);
    a--;
  }

//   2)  find factorial  
int sum1 ,num1;
        sum1 = 1;
        num1 =5;
  
    for(int a=1;a<=num1;a++){
        sum1=sum1*a;
    }
    printf("%d \n",sum1);

//   3)  sum of even number
int sum2 ,num2;
        sum2 = 0;
        num2 =6;
  
    for(int a=2;a<=num2;a+=2){
        sum2+=a;
    }
    printf("%d \n",sum2);
     
//   4)  sum of odd number
  int sum3 ,num3;

      sum3 = 0;
        num3 =5;
  
    for(int a=1;a<=num3;a+=2){
        sum3+=a;
    }
    printf("%d \n",sum3);
         
         
//   5)  sum of natural number
        int sum4 ,num4;
          sum4 = 0;
          num4 =5;

    for(int a=1;a<=num4;a++){
        sum4+=a;
    }
    printf("%d \n",sum4);
    
    // 6) print a to z alphabet letters
  char x ='a';
  while(x<='z'){
    printf("%c\n",x);
    x++;
  // }
}