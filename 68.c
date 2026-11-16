#include <stdio.h>

int main()
{
    int n, i, element, position = -1;

    scanf("%d", &n);

    int arr[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &element);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == element)
        {
            position = i;
            break;
        }
    }

    if(position == -1)
    {
        printf("-1");
    }
    else
    {
        for(i = position; i < n - 1; i++)
        {
            arr[i] = arr[i + 1];
        }

        n--;

        for(i = 0; i < n; i++)
        {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}