#include <stdio.h>
#include <stdlib.h>
#include <string.h>

// Structure of Library
struct library {
  char bookname[30];
  char author[30];
  int pages;
  float price;
};

// Main Code
int main() {
  struct library lib[100];
  char ar_nm[30], bk_nm[30];

  // Number of books in library
  int i, input, count;
  i = input = count = 0;

  while (input != 5) {

    printf("\n/*/*/*/*/ "
           "WELCOME TO THE LIBRARY"
           " /*/*/*/*/\n");
    printf("\n\n1. Add book information\n");
    printf("2. Display book information\n");
    printf("3. List all books of given author\n");
    printf("4. List the count of books in the library\n");
    printf("5. Exit");

    // Book details
    printf("\n\nEnter one of the above: ");
    scanf("%d", &input);

    switch (input) {
    // Add book
    case 1:
      printf("Enter book name = ");
      scanf("%s", lib[i].bookname);

      printf("Enter author name = ");
      scanf("%s", lib[i].author);

      printf("Enter pages = ");
      scanf("%d", &lib[i].pages);

      printf("Enter price in Rs. = ");
      scanf("%f", &lib[i].price);
      count++;

      break;

    // Book information
    case 2:
      printf("You have the following information\n");
      for (i = 0; i < count; i++) {
        printf("Book name = %s", lib[i].bookname);
        printf("\nAuthor name = %s", lib[i].author);
        printf("\nPages = %d", lib[i].pages);
        printf("\nPrice = %f \n\n", lib[i].price);
      }
      break;

    // Author name as input
    case 3:
      printf("Enter author name : ");
      scanf("%s", ar_nm);
      for (i = 0; i < count; i++) {
        if (strcmp(ar_nm, lib[i].author) == 0)
          printf("\nAuthor name = %s", lib[i].author);
        printf("Book name = %s", lib[i].bookname);
        printf("\nPages = %d", lib[i].pages);
        printf("\nPrice = %f \n\n", lib[i].price);
      }
      break;

    // Total count
    case 4:
      printf("\n No of books in the library : %d", count);
      break;

    case 5:
      exit(0);
    }
  }
  return 0;
}
