// #include <stdio.h>
// #include <string.h>
//  struct book{
//     char name[50];
//     char author[30];
//     int pagee;
// };
// void display (struct book*);
   

//  int main (){
//  struct book b1 = { "wahab.C", "Abdul Wahaab", 1005};
//   printf ("\n\n%s \n %s\n %d\n", b1.name, b1.name, b1.pagee);
//  display(&b1);
//     return 0;
//  }
//  void display (struct book*b)
  
// {printf ("\n\n%s \n %s\n %d\n", b-> name, b->name, b->pagee);
// }

#include <stdio.h>
#include <string.h>
 typedef struct book{
  char name [40];
  char author[30];
  int page;
  int book; 
 }book;
  void display (book*b){
    strcpy(b->name, "Al Wahab");
    strcpy (b->author, "Abdul Wahhhab");
    b->page = 650;
    b->book =200;
  }
 int main (){
    book b1 = {"wahab.C", "Abdul Wahaab", 100, 20};
   printf ("\n\n%s\n %s\n %d\n %d\n", b1.name, b1.author, b1.page, b1.book);
   display (&b1);
   printf ("\n\n%s\n %s\n %d\n %d\n", b1.name, b1.author, b1.page, b1.book);
    return 0;
 }
//   void display(book*b){
//    printf ("\n\n%s\n %s\n %d\n %d\n", b->name,b->author, b->page, b->book);
//   }