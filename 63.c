#include <stdio.h>

int main()
{
    int n, m, i;

    scanf("%d", &n);
    int arr1[n];

    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr1[i]);
    }

    scanf("%d", &m);
    int arr2[m];

    for(i = 0; i < m; i++)
    {
        scanf("%d", &arr2[i]);
    }

    int arr3[n + m];

    for(i = 0; i < n; i++)
    {
        arr3[i] = arr1[i];
    }

    for(i = 0; i < m; i++)
    {
        arr3[n + i] = arr2[i];
    }

    for(i = 0; i < n + m; i++)
    {
        printf("%d ", arr3[i]);
    }

    return 0;
}