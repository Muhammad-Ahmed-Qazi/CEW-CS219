#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Books {
   char  title[50];
   char  author[50];
   char  subject[100];
   int   book_id;
};

int main () {
    struct Books myBook;
    
    strcpy(myBook.title, "Operating Systems: Internals and Design Principles");
    strcpy(myBook.author, "William Stallings");
    strcpy(myBook.subject, "Operating Systems");
    myBook.book_id = 123456;

    printf( "Book title : %s\n", myBook.title);
    printf( "Book author : %s\n", myBook.author);
    printf( "Book subject : %s\n", myBook.subject);
    printf( "Book book_id : %d\n", myBook.book_id);
    
    return 0;
}