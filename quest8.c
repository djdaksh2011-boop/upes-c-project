#include <stdio.h>
int main() {
    int i, n, S;  // S = sum
    S = 0;
    scanf("%d", &n);
    for(i=1; i <= n; i++) {
    S = S + i; }
    printf("%d", S);
    return 0;
}