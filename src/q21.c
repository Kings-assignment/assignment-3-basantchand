// Write a recursive function named calculateFactorial that takes an integer n as input and returns its factorial.



#include <stdio.h>

unsigned long long calculateFactorial(int n) {
    if (n <= 1) {
        return 1;  
    }
    return n * calculateFactorial(n - 1); 
}


int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    unsigned long long fact = calculateFactorial(n);
    printf("Factorial of %d is %llu\n", n, fact);

    return 0;
}