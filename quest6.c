#include <stdio.h>
int main() {
    int first, second, temp;
    // Input two numbers
    printf("Enter first number: ");
    scanf("%d", &first);
    printf("Enter second number: ");
    scanf("%d", &second);
    printf("\nBefore swapping: First = %d, Second = %d\n", first, second);
    // Swapping logic using a third variable
    temp = first;
    first = second;
    second = temp;
    printf("After swapping:  First = %d, Second = %d\n", first, second);
    return 0;
}