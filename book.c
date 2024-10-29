#include <stdio.h>
#include <string.h>

struct Book {
int yearofpublication;
    char title[30];
    char author[30];
    char ISBN[13];
    float price;
};

int main() {
    struct Book myBook;

    // Get book information from the user
    printf("Enter the book title: ");
    fgets(myBook.title, sizeof(myBook.title), stdin);
    myBook.title[strcspn(myBook.title, "\n")] = 0;

    printf("Enter the author's name: ");
    fgets(myBook.author, sizeof(myBook.author), stdin);
    myBook.author[strcspn(myBook.author, "\n")] = 0;

    printf("Enter the publication year: ");
    scanf("%d", &myBook.yearofpublication);

    printf("Enter the ISBN: ");
    scanf("%s", myBook.ISBN);

    printf("Enter the price: ");
    scanf("%f", &myBook.price);

    // Display book information
    printf("\nBook Information:\n");
    printf("Title: %s\n", myBook.title);
    printf("Author: %s\n", myBook.author);
    printf("Publication Year: %d\n", myBook.yearofpublication);
    printf("ISBN: %s\n", myBook.ISBN);
    printf("Price: $%.2f\n", myBook.price);

    return 0;
}
