/*1. Write a program to input a number and display its reverse using.*/
#include<stdio.h>

reverse(int);

int main(){
    int num;
    printf("Enter an intger: ");
    scanf("%d", &num);
    printf("The reverse number : %d", reverse(num));
    return(0);
}

int reverse(num){
    int rev = 0, rem = 0;

    while (num != 0){
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num/10;
    }
    return(rev);
}