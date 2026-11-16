#include <stdio.h>

int main()
{
    int n, i, element, position;

    scanf("%d", &n);

    int arr[n + 1];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    scanf("%d", &element);
    scanf("%d", &position);

    for(i = n; i > position; i--)
    {
        arr[i] = arr[i - 1];
    }

    arr[position] = element;
    n++;

    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }

    return 0;
}