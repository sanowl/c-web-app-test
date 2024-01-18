#include <stdio.h>
#include <stdint.h>
#include <stdbool.h>
#include <stdlib.h>

// Function to add two integers
int add(int a, int b)
{
    return a + b;
}
// Function to add an array of integers
int sumArray(int *arr, size_t size)
{
    int sum = 0;
    for (size_t i = 0; i < size; ++i)
    {
        sum += arr[i];
    }
    return sum;
}

// Function to print an array of integers
void printArray(int *arr, size_t size)
{
    printf("[ ");
    for (size_t i = 0; i < size; ++i)
    {
        printf("%d ", arr[i]);
    }
    printf("]\n");
}
// Function to dynamically allocate and initialize an array
int *initializeArray(size_t size)
{
    int *arr = (int *)malloc(size * sizeof(int));
    if (arr == NULL)
    {
        perror("Error allocating memory");
        exit(EXIT_FAILURE);
    }

    for (size_t i = 0; i < size; ++i)
    {
        arr[i] = i * 2; // Initialize with some values
    }
    return arr;
}
int main()
{
    // Example usage of the add function
    int result = add(3, 4);
    printf("Result of add function: %d\n", result);

    // Example usage of the sumArray and printArray functions
    size_t arraySize = 5;
    int *dynamicArray = initializeArray(arraySize);
    printf("Array before addition: ");
    printArray(dynamicArray, arraySize);

    int arraySum = sumArray(dynamicArray, arraySize);
    printf("Sum of array elements: %d\n", arraySum);

    // Cleanup dynamically allocated memory
    free(dynamicArray);

    return 0;
}
