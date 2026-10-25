#include <stdio.h>
int main() {
    int a;
    printf("ENTER THE NO.");
    scanf("%d", &a);
    if(a>=0){
       if(a==0) {
        printf("NO. IS ZERO");
       } else{printf("NO. IS POSITIVE");}
    }
    else{
        printf("NO. IS NEGATIVE");
    }
    return 0;
}