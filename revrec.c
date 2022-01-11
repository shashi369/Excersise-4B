//Reverse of a number using recursion
#include <math.h>
#include <stdio.h>

int revrec(int, int);

int main() {
    int n;
    printf("Enter a num: ");
    scanf("%d", &n);
    printf("Reverse of the function is %d\n", revrec(n, floor(log10(abs(n)))));
}

int revrec(int x, int i) {
    if (x == 0) {
        return 0;
    } else {
        return (x % 10) * (pow(10, i)) + (revrec(x / 10, i - 1));
    }
}