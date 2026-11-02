#include <stdio.h>

int main()
{
    int matrix[10][10];
    int sparse[20][3];
    int row, col;
    int i, j, k = 1;

    printf("Enter rows and columns: ");
    scanf("%d%d", &row, &col);

    printf("Enter matrix elements:\n");

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            scanf("%d", &matrix[i][j]);
        }
    }

    int count = 0;

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(matrix[i][j] != 0)
            {
                count++;
            }
        }
    }

    sparse[0][0] = row;
    sparse[0][1] = col;
    sparse[0][2] = count;

    for(i = 0; i < row; i++)
    {
        for(j = 0; j < col; j++)
        {
            if(matrix[i][j] != 0)
            {
                sparse[k][0] = i;
                sparse[k][1] = j;
                sparse[k][2] = matrix[i][j];
                k++;
            }
        }
    }

    printf("\nTriple Representation:\n");

    for(i = 0; i <= count; i++)
    {
        printf("%d\t%d\t%d\n",
               sparse[i][0],
               sparse[i][1],
               sparse[i][2]);
    }

    return 0;
}