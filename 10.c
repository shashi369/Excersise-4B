/*10. Write function a C program with function and input menu from the keyboard and activate these
functions:
a) print area of a circle()
b) reverse string()
*/
#include <stdio.h>
#include <string.h>
void revstr(char str[]){
    char rev[100];
    int j=strlen(str), i=0;
    for(i;i<strlen(str);i++){
            rev[j]=str[i];
            j--;
    }
    rev[i+1]='\0';
    printf("Reverse of string is %s\n",rev);
}
void areaofacircle(float r){
    float a=3.14*r*r;
    printf("Area is %f\n",a);
}
int main(){
    char str[100];
    printf("Enter a string: ");
    gets(str);
    float r;
    printf("Enter radius: ");
    scanf("%f",&r);
    areaofacircle(r);
    revstr(str);
}