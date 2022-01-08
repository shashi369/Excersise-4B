/*7. Write given number using functions a program using a user-defined function to calculate y raise to
power x.*/
#include <stdio.h>
int power(int y , int x){
    int z=y;
    for(int i=1;i<x;i++){
        y *= z;
    }
    return y;
}
int main(){
    int y,x;
    printf("Enter number and power: ");
    scanf("%d %d",&y,&x);
    printf("The answer is %d",power(y,x));
}