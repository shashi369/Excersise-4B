/*3. Write a program to input a number and check if it is even or odd using the function.*/
#include <stdio.h>
void check(int n){
    if(n%2==0){
        printf("Even number");
    }else{
        printf("Odd number");
    }
}

int main(){
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    check(n);
}