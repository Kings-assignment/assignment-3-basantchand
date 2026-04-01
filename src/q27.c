// Write a recursive function named printTriangle that takes an integer n as input and prints a triangle of asterisks (*) with n rows.



#include <stdio.h>

void printStars(int count) {
    if (count == 0) {
        return;  
    }
    printf("*");
    printStars(count - 1);   
}

void printTriangle(int n) {
    if (n == 0) {
        return;  
    }
    
    printTriangle(n - 1);
    
    printStars(n);
    printf("\n");
}


int main() {
    int n;
    printf("Enter number of rows: ");
    scanf("%d", &n);

    printTriangle(n);

    return 0;
}