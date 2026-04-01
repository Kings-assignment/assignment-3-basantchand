// Write a C program to find the length of a string without using the built-in string functions.

#include <stdio.h>
int main() {
    char abc[100];
    int count = 0;

    printf("enter the string:");
    scanf("%s", &abc);

    for (int i=0; i<=100; i++) {
        if (abc[i] == '\0') {
            break;
        }
        count++;
    }
    printf("length of string is %d.\n", count);
    return 0;
}
        
    
