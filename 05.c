/*5. Write a program to store Kathmandu Valley's 7 days maximum and minimum temperature
(in centigrade) and calculate the average, maximum, minimum temperature using function
and print days temperature, minimum, maximum, and average temperature.*/
#include <stdio.h>
int min(int x[]);
int max(int y[]);
int avg(int z[]);
int main(){
    int temp[7];
    for(int i=0;i<7;i++){
        printf("Enter temperature: ");
        scanf("%d",&temp[i]);
    }
    printf("The minimum temperature is %d,max temp is %d and average temp is %d",min(temp),max(temp),avg(temp));
}
int min(int x[7]){
    int i=0,a=x[0];
    for(i;i<7;i++){
        if(a>x[i]){a=a+x[i];x[i]=a-x[i];a=a-x[i];}
    }
    return a;
}
int max(int y[7]){
    int i=0,a=y[0];
    for(i;i<7;i++){
        if(a<y[i]){a=a+y[i];y[i]=a-y[i];a=a-y[i];}
    }
    return a;
}
int avg(int z[7]){
    int i=0,a=0;
    for(i;i<7;i++){
        a=a+z[i];
    }
    return a/7;
}