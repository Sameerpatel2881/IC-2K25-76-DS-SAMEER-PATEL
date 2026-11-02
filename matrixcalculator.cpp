#include <stdio.h>

int main()
{
    int a[10][10], b[10][10], c[10][10];
    int r, col, i, j, k, choice;
    int det;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &col);

    printf("Enter First Matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }

    printf("Enter Second Matrix:\n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<col;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }

    do
    {
        printf("\n----- MATRIX CALCULATOR -----\n");
        printf("1. Addition\n");
        printf("2. Multiplication\n");
        printf("3. Transpose\n");
        printf("4. Determinant (2x2)\n");
        printf("5. Exit\n");
        printf("Enter Choice: ");
        scanf("%d",&choice);

        switch(choice)
        {
            case 1:
                printf("\nAddition Matrix:\n");
                for(i=0;i<r;i++)
                {
                    for(j=0;j<col;j++)
                    {
                        c[i][j]=a[i][j]+b[i][j];
                        printf("%d ",c[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                printf("\nMultiplication Matrix:\n");

                for(i=0;i<r;i++)
                {
                    for(j=0;j<col;j++)
                    {
                        c[i][j]=0;

                        for(k=0;k<col;k++)
                        {
                            c[i][j]+=a[i][k]*b[k][j];
                        }

                        printf("%d ",c[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 3:
                printf("\nTranspose of First Matrix:\n");

                for(i=0;i<col;i++)
                {
                    for(j=0;j<r;j++)
                    {
                        printf("%d ",a[j][i]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                if(r==2 && col==2)
                {
                    det=(a[0][0]*a[1][1])-(a[0][1]*a[1][0]);
                    printf("Determinant = %d\n",det);
                }
                else
                {
                    printf("Determinant supported only for 2x2 matrix\n");
                }
                break;

            case 5:
                printf("Exiting...");
                break;

            default:
                printf("Invalid Choice");
        }

    }while(choice!=5);

    return 0;
}