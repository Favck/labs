#include <stdio.h>
#include <string.h>
#include <stdlib.h>

struct Book
    {
        char Author[100];
        char Name[100];
        int year;
        float expenses;
        int count_book;
        float price;
    };


struct Book* input(const int n)
{
    
    struct Book* books = (struct Book*)malloc(n * sizeof(struct Book));

    for(int i=0;i<n;i++){
        printf("Enter details for books:\n");

        printf("Author: ");
        getchar();
        gets(books[i].Author);

        printf("Name book: ");
        gets(books[i].Name);

        
        printf("Year of creation: ");scanf(" %d", &books[i].year);
        printf("The cost of buying a book: ");scanf(" %f", &books[i].expenses);
        printf("Count of books: ");scanf(" %d", &books[i].count_book);
        printf("Price: ");scanf("%f", &books[i].price);
    }
    return books;
}

void book_processing(struct Book* books, int n)
{
    
    int k =0;
    for(int i=0; i<n; i++)
    {
        float expenses = books[i].expenses;
        int count_books = books[i].count_book;
        float price = books[i].price;
        
        if (expenses * count_books > count_books * price)
        {
            k +=1;
            printf("\n\n");
            printf("Author: %s\n ", books[i].Author);
            printf("Name book: %s\n ", books[i].Name);
            printf("Year of creation: %d\n", books[i].year);
            printf("The cost of buying a book: %5.1f\n", books[i].expenses);
            printf("Count of books: %d\n", books[i].count_book);
            printf("Price: %5.1f\n", books[i].price);
            printf("Minus: %5.1f\n", count_books * price - expenses * count_books);
        }
    }
    if (k==0)
        printf("all the books have paid off !!!!");
}
