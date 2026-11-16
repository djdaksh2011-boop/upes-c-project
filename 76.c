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

    if(rows != cols)
    {
        flag = 0;
    }
    else
    {
        for(i = 0; i < rows; i++)
        {
            for(j = 0; j < cols; j++)
            {
                if(arr[i][j] != arr[j][i])
                {
                    flag = 0;
                    break;
                }
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