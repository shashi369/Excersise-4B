/*8. Write a C program to calculate a term of Fibonacci series using a recursive function.
Fibonacci series: 0 1, 1, 2, 3, 5 ........... upto nth terms*/
#include <stdio.h>
int fibo(int n){
    if(n==1){
        return 0;
    }else if(n==2){
        return 1;
    }else{
        return fibo(n-1)+fibo(n-2);
    }
}
int main(){
    int n;
    printf("Enter the term: ");
    scanf("%d",&n);
    printf("The term is %d",fibo(n));
}