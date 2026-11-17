#include <stdio.h>

int main()
{
    int a[10][10], r, c, i, j;
    int key, found = 0;
    int choice;

    printf("Enter rows and columns: ");
    scanf("%d%d", &r, &c);

    printf("Enter matrix elements:\n");
    for(i = 0; i < r; i++)
    {
        for(j = 0; j < c; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }

    do
    {
        printf("\n----- MENU -----\n");
        printf("1. Display Matrix\n");
        printf("2. Search Element\n");
        printf("3. Rotate Matrix (90 Degree)\n");
        printf("4. Exit\n");
        printf("Enter Choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nMatrix:\n");
                for(i = 0; i < r; i++)
                {
                    for(j = 0; j < c; j++)
                    {
                        printf("%d ", a[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 2:
                printf("Enter element to search: ");
                scanf("%d", &key);

                found = 0;

                for(i = 0; i < r; i++)
                {
                    for(j = 0; j < c; j++)
                    {
                        if(a[i][j] == key)
                        {
                            printf("Found at position (%d,%d)\n", i, j);
                            found = 1;
                        }
                    }
                }

                if(found == 0)
                    printf("Element not found\n");

                break;

            case 3:
                printf("\nMatrix after 90 Degree Rotation:\n");

                for(j = 0; j < c; j++)
                {
                    for(i = r - 1; i >= 0; i--)
                    {
                        printf("%d ", a[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 4:
                printf("Exiting...");
                break;

            default:
                printf("Invalid Choice\n");
        }

    } while(choice != 4);

    return 0;
}