#include <stdio.h>
int main() {
    int a, b;
    printf("Enter two digits: ");
    scanf("%d %d", &a, &b);
    a = a ^ b;
    b = a ^ b;
    a = a ^ b; 
    printf("Now reverse digits are: %d %d", a, b);
    return 0;
}