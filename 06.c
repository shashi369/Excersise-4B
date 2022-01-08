/*6. Write a C program to calculate the factorial of a given number using function.*/
#include <stdio.h>
void fact(int x){
    int i,a=1;
    for(i=1;i<=x;i++){
        a=a*i;
    }
    printf("The factorial is %d",a);
}
int main(){
    int n;
    printf("ENter number: ");
    scanf("%d",&n);
    fact(n);
}