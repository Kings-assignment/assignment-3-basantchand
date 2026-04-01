// Write a function named calculateAverage that takes an array of integers as input and returns the average of the numbers.

#include <stdio.h>

float calculateAverage(int arr[], int size)
{
    int sum = 0;

    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
    }

    return (float)sum / size;
}

int main()
{
    int n;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    int arr[n];

    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    float avg = calculateAverage(arr, n);

    printf("Average = %.2f\n", avg);

    return 0;
}