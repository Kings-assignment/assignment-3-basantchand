// Write a recursive function named calculateBinary that takes an integer n as input and returns its binary representation as a string.


#include <stdio.h>
#include <string.h>

void calculateBinary(int n, char str[], int *index) {
    if (n == 0) {
        return;   
    }
    
    calculateBinary(n / 2, str, index);
    
    str[*index] = (n % 2) + '0';
    (*index)++;
}

int main() {
    int n;
    printf("Enter an integer: ");
    scanf("%d", &n);

    if (n == 0) {
        printf("Binary: 0\n");
        return 0;
    }

    char binary[64];  
    int index = 0;

    calculateBinary(n, binary, &index);
    binary[index] = '\0';  
    printf("Binary representation: %s\n", binary);

    return 0;
}