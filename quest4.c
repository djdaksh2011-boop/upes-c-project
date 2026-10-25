#include <stdio.h>
int main() {
    int radius;
    float area, circumference; 
    printf("Enter radius: ");
    scanf("%d", &radius);
    area = 3.14 * radius * radius;
    circumference = 2 * PI * radius;
 printf("Area of circle = %.2f\n", area);
    printf("Circumference of circle = %.2f\n", circumference);
    return 0;
}