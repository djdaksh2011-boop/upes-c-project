#include <stdio.h>

int main()
{
    char str[100];
    int i, j, found = 0;

    fgets(str, sizeof(str), stdin);

    for (i = 0; str[i] != '\0'; i++)
    {
        for (j = i + 1; str[j] != '\0'; j++)
        {
            if (str[i] == str[j] && str[i] >= 'a' && str[i] <= 'z')
            {
                printf("%c", str[i]);
                found = 1;
                break;
            }
        }

        if (found == 1)
            break;
    }

    if (found == 0)
        printf("-1");

    return 0;
}