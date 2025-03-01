#include <stdio.h>
#include <stdlib.h>  // gp4
#include <string.h>  //sentence
#include <stdbool.h>  //check

typedef struct student{  // typedef is use to rename
  //char name[100];  // char pointer
 // char dept[50];  // we can also use string like   [ char *dept;]
 char *name;
 char *dept;
  float cgp;

} student;  // rule to write
 //student s1, s2, s3;
 int main (){
    student wahab;
    student arr[100]; // number of students including sub datas
   wahab.name = (char*) malloc (100);
   scanf ("%s", wahab.name);
   printf ("%s\n", wahab.name);

   wahab.dept = (char*) malloc (100);
   scanf ("%s", wahab.dept);
   printf ("%s\n", wahab.dept);

  // wahab.cgp = (float*) malloc (10)

   scanf ("%f", &wahab.cgp);
   printf ("%f", wahab.cgp);
 
 }