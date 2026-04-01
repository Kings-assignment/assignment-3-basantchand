// Implement a C program to reverse the elements of an array.

#include <stdio.h>
int main(void){
    int n;
    printf("Enter the size of array: ");
    scanf("%d", &n);
    
    int arr[n];
    
    printf("Enter %d elements: \n", n);
    for(int i = 0; i < n; i++){
        scanf("%d", &arr[i]);
    }
    
    printf("\nReversed array: \n");
    for(int i = n - 1; i >= 0; i--){
        printf("%d ", arr[i]);
    }
    
    printf("\n");
    
    return 0;
}