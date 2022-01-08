/*4. Write a program in C to input principle, rate and time and calculate simple interest using
function.*/
#include <stdio.h>
int si(int p,int t,int r){
    int si=(p*t*r)/100;
}

int main(){
    int p,t,r;
    printf("Enter the vakue of principle,time and interest: ");
    scanf("%d %d %d",&p,&t,&r);
    printf("Simple interest is %d",si(p,t,r));
}