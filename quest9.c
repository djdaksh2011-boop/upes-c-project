#include <stdio.h>
#include <math.h>
int main() {
    int p, r, t, S, C;
    //  principal, rate, time, Simple intrest, Compound Intrest;
    printf(" Principal is:");
    scanf("%d", &p);
    printf(" Rate is:");
    scanf("%d", &r);
    printf(" Time is:");
    scanf("%d", &t);
    S = (p * r * t) / 100;
    C = p * pow((1+r/100.0),t) - p;
    printf("Simple intrest is: %d", S);
    printf("Compound intrest is: %d", C);
    return 0;
}