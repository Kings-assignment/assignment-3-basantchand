// Implement a C program to count the occurrence of a specific character in a string.


#include <stdio.h>
#include <string.h>

int main() {
    char str[100], ch;
    int count = 0;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter the character to count: ");
    scanf(" %c", &ch);  

    int length = strlen(str);

    for(int i = 0; i < length; i++) {
        if(str[i] == ch) {
            count++;
        }
    }

    printf("Character '%c' occurs %d times.\n", ch, count);

    return 0;
}