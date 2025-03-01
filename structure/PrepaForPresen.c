#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//#include <stdbool.h>
const int N =1000;
 int flagarr [N];
 typedef struct student{
    int Id;
    char *Name;
    char *Dept;
    char *Section;
    int dob;
    float CGPA;

 } student;
 int main (){
student s[N];
while (1){
char command [10];
scanf ("%s", command);

 if (strcmp (command, "add")==0){
   student temp;
  printf ("Enter student ID :");
  scanf ("%d", &temp.Id);

  printf ("Enter the name :");
  temp.Name = (char*)malloc (100);
  scanf ("%s", temp.Name);

  printf ("Enter Dept :");
  temp.Dept = (char*) malloc(50);
  scanf ("%s", temp.Dept);

  printf ("Enter CGPA :");
  scanf ("%f", &temp.CGPA);
    s[temp.Id] = temp;  //students ID is used as a index of array where we have100 students
    flagarr[temp.Id] =1;
    printf ("student data store Successfully");

 }
 else if (strcmp (command, "find") ==0){
   int Id;
      printf ("Enter student ID for searching :");
      scanf ("%d", &Id);
      if (flagarr[Id] == 1){
 printf("Student Found\n\n");
// printf("+--------------+----------------------+----------+--------+\n");
// printf("|    Name      |      Department      |    ID    |  CGP   |\n");
// printf("+--------------+----------------------+----------+--------+\n");
// printf("| %-12s | %-20s | %-8d | %-6.2f |\n", s[Id].Name, s[Id].Dept, s[Id].Id, s[Id].CGPA);
// printf("+--------------+----------------------+----------+--------+\n\n");


      
      } 
      else {
         printf ("student with that ID i snot find\n");
      }
 }
 else if (strcmp (command, "list") ==0){
   printf("+--------------+----------------------+----------+--------+\n");
printf("|    Name      |      Department      |    ID    |  CGP   |\n");
printf("+--------------+----------------------+----------+--------+\n");
   for (int Id =0; Id<N; Id++){
   if ( flagarr[Id] == 1){
      printf("| %-12s | %-20s | %-8d | %-6.2f |\n", s[Id].Name, s[Id].Dept, s[Id].Id, s[Id].CGPA);

   }
   }
   printf("+--------------+----------------------+----------+--------+\n\n");
 }
   else if(strcmp(command, "remove")==0){
      
      printf ("removing.\n");
   }
 
else if (strcmp(command, "add") == 0){
   printf ("Existing program.\n");
   break;
}

 }

 }