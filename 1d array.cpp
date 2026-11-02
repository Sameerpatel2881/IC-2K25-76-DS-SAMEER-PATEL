#include <stdio.h>

int main()
{
    int arr[5] = {10, 20, 30, 40, 50};
    int i, sum = 0;
    int max, min;
    int key, found = 0;

    // Traversal
    printf("Array Elements: ");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", arr[i]);
    }

    // Sum
    for(i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    printf("\nSum = %d", sum);

    // Maximum and Minimum
    max = min = arr[0];

    for(i = 1; i < 5; i++)
    {
        if(arr[i] > max)
            max = arr[i];

        if(arr[i] < min)
            min = arr[i];
    }

    printf("\nMaximum Element = %d", max);
    printf("\nMinimum Element = %d", min);

    // Searching
    printf("\nEnter element to search: ");
    scanf("%d", &key);

    for(i = 0; i < 5; i++)
    {
        if(arr[i] == key)
        {
            printf("Element found at index %d", i);
            found = 1;
            break;
        }
    }

    if(found == 0)
    {
        printf("Element not found");
    }

    return 0;
} 