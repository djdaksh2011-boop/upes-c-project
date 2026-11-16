#include <stdio.h>

int main()
{
    int rows, cols, i, j;

    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];
    int sum[rows];

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < rows; i++)
    {
        sum[i] = 0;

        for(j = 0; j < cols; j++)
        {
            sum[i] = sum[i] + arr[i][j];
        }
    }

    for(i = 0; i < rows; i++)
    {
        printf("%d ", sum[i]);
    }

    return 0;
}