// Write a function named countOccurrences that takes a string and a character as input and returns the number of times the character appears in the string.




#include <stdio.h>

int countOccurrences(char str[], char ch) {
    int count = 0;
    int i = 0;

    while(str[i] != '\0') {
        if(str[i] == ch) {
            count++;
        }
        i++;
    }

    return count;
}

int main() {
    char str[100], ch;

    printf("Enter a string: ");
    scanf("%s", str);

    printf("Enter a character to count: ");
    scanf(" %c", &ch);   

    int result = countOccurrences(str, ch);

    printf("Character '%c' occurs %d times.\n", ch, result);

    return 0;
}