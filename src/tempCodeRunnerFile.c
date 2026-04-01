//  Write a function named calculateFactorialSeries that takes an integer n as input and prints the factorial series up to n.




#include <stdio.h>

unsigned long long factorial(int num) {
    unsigned long long fact = 1;
    for (int i = 1; i <= num; i++) {
        fact *= i;
    }
    return fact;
}

void calculateFactorialSeries(int n) {
    printf("Factorial series up to %d:\n", n);
    for (int i = 1; i <= n; i++) {
        printf("%d! = %llu\n", i, factorial(i));
    }
}

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);
    calculateFactorialSeries(n);
    return 0;
}