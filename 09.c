/*9. Write a C program to calculate the factorial of a given number using recursive function.*/
#include <stdio.h>
int fact(int y);
int main(){
int x;
printf("Enter a num: ");
scanf("%d",&x);
printf("The factorial of the number is %d", fact(x));

return 0;

}

int fact(int y){
if (y == 0)
return 1;
return y * fact(y - 1);

}
