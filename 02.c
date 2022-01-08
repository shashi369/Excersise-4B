/*2. Write a C program to find the sum of 'n' integer numbers using function*/
#include <stdio.h>
int sum(int);
int main(){
    int n;
    printf("Enter how many no. do you got: ");
    scanf("%d",&n);
    printf("The sum is %d",sum(n));
}
int sum(int n){
    int x;
    if(n==0){
        return 0;
    }
    else {
        printf("Enter number: ");
        scanf("%d",&x);
        return x+(sum(n-1));
    }
}
