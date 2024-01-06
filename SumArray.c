#include <stdio.h>

// #3 write a program that takes 5 input from that uer and print the 5 number and sum of 5 numbers with the help of array;

int main(){
int arr[5];
 int sum =0;
 for(int i = 0; i<5;i++){
    scanf("%d",&arr[i]);
    printf("you enter number is:%d\n",arr[i]);
 }
 for(int i=0;i<5;i++){
    printf("your number is: %d\n",arr[i]);
 }
 for(int i=0;i<5;i++){
        sum = sum+arr[i];
 }
        printf("The sum of total number is: %d",sum);
}