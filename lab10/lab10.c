#include <stdio.h>
#include <stdlib.h>

struct Book* input(const int n);
void book_processing(struct Book* books, int n);

int main()
{
    const int n;
    printf("Enter number of books: ");scanf("%d", &n);

    struct Book* books = input(n);

    book_processing(books, n);
    
    free(books);
}