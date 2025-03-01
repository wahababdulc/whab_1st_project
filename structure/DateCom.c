// #include <stdio.h>
// #include <stdbool.h>
// typedef struct date{
//   int day;
//   int month;
//   int yr;

// }date;
// date a,b;
// int main (){
//    a.day= 15;
//    a.month = 11;
//    a.yr=2021;

//    b.day =12;
//    b.month=10;
//    b.yr = 2010; 
//    bool flag = true;
//    if (a.day != b.day)flag = false;
//    if (a.month != b.month)flag = false;
//    if (a.yr != b.yr)flag = false;
//    if (flag == true) printf ("Dates are same");
//    else printf ("Dates are difference");
//   return 0;  
// }

#include <stdio.h>
#include <string.h>
#include <stdbool.h>
typedef struct student{
    char name [30];
    int ID;
    int marks;
    char university[30];
} student;
int main(){
 student s1, s2;
  strcpy (s1.name, "Abdul");
  s1.ID= 204;
  s1.marks=80;
  strcpy (s1.university, "IIUC");

  strcpy (s2.name, "Abdul");
  s2.ID= 204;
  s2.marks=8;
  strcpy (s2.university, "IIUC");
  bool flag = true;
  if (s1.name == s2.name ) flag =true;
  if (s1.ID == s2.ID ) flag =true;
  if (s1.marks == s2. marks ) flag =true;
  if (s1.university == s2.university ) flag =true;
  if (flag == true) printf ("Same student");
  else printf ("Different University");

return 0;    
}