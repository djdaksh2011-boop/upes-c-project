#include <stdio.h>

int main()
{
    int rows, cols, i, j, flag = 1;

    scanf("%d %d", &rows, &cols);

    int arr[rows][cols];

    for(i = 0; i < rows; i++)
    {
        for(j = 0; j < cols; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }

    for(i = 0; i < rows; i++)
    {
        for(j = i + 1; j < rows; j++)
        {
            if(arr[i][i] == arr[j][j])
            {
                flag = 0;
                break;
            }
        }
    }

    if(flag == 1)
    {
        printf("True");
    }
    else
    {
        printf("False");
    }

    return 0;
}