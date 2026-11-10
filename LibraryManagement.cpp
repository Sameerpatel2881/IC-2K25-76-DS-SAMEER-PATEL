#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
};

struct Book books[100];
int count = 0;

void addBook()
{
    printf("\nEnter Book ID: ");
    scanf("%d", &books[count].id);

    printf("Enter Book Title: ");
    scanf(" %[^\n]", books[count].title);

    printf("Enter Author Name: ");
    scanf(" %[^\n]", books[count].author);

    count++;
    printf("Book Added Successfully!\n");
}

void displayBooks()
{
    int i;

    if(count == 0)
    {
        printf("\nNo Books Available!\n");
        return;
    }

    printf("\nLibrary Books:\n");

    for(i = 0; i < count; i++)
    {
        printf("\nBook %d\n", i + 1);
        printf("ID      : %d\n", books[i].id);
        printf("Title   : %s\n", books[i].title);
        printf("Author  : %s\n", books[i].author);
    }
}

void searchBook()
{
    int id, i;

    printf("\nEnter Book ID to Search: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(books[i].id == id)
        {
            printf("\nBook Found!\n");
            printf("ID      : %d\n", books[i].id);
            printf("Title   : %s\n", books[i].title);
            printf("Author  : %s\n", books[i].author);
            return;
        }
    }

    printf("Book Not Found!\n");
}

void deleteBook()
{
    int id, i, j;

    printf("\nEnter Book ID to Delete: ");
    scanf("%d", &id);

    for(i = 0; i < count; i++)
    {
        if(books[i].id == id)
        {
            for(j = i; j < count - 1; j++)
            {
                books[j] = books[j + 1];
            }

            count--;
            printf("Book Deleted Successfully!\n");
            return;
        }
    }

    printf("Book Not Found!\n");
}

int main()
{
    int choice;

    do
    {
        printf("\n==== LIBRARY MANAGEMENT SYSTEM ====\n");
        printf("1. Add Book\n");
        printf("2. Display Books\n");
        printf("3. Search Book\n");
        printf("4. Delete Book\n");
        printf("5. Exit\n");
        printf("Enter Choice: ");

        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                addBook();
                break;

            case 2:
                displayBooks();
                break;

            case 3:
                searchBook();
                break;

            case 4:
                deleteBook();
                break;

            case 5:
                printf("Exiting Program...\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(choice != 5);

    return 0;
}