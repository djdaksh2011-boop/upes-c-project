#include <stdio.h>
int main(){
    char x;
    printf("Enter any character");
    scanf("%c", &x);
  if(x == 'a' || x == 'e' || x == 'i' || x == 'o' || x == 'u')
    {printf("Vowels");
    } else{printf("consosnant");}
    return 0;
}