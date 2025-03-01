// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>
// typedef struct pk{
//     int ph;
//     int attack;
//     int speed;
//     char tier;
//     char name[30];
// }pk;
//  void change (pk *c){
//   (*c).ph =100;
//   (*c).attack =110;
//   (*c).speed =120;
//   (*c).tier ='B';
//   strcpy((*c).name, "fighter");
//  }

//  int main (){
//   pk plain;
//   plain.ph = 60;
//   plain.attack =90;
//   plain.speed = 100;
//   plain.tier = 'a';
//   strcpy(plain.name, "Jet PLain");  
//   printf ("%d\n", plain.ph);
//   printf ("%d\n", plain.attack);
//   printf ("%d\n", plain.speed);
//   printf ("%c\n", plain.tier);
//   printf ("%s\n", plain.name);
//   change (&plain);
//   printf ("%d\n", plain.ph);
//   printf ("%d\n", plain.attack);
//   printf ("%d\n", plain.speed);
//   printf ("%c\n", plain.tier);
//   printf ("%s\n", plain.name);
//   return 0;
//  }



#include <stdio.h>
#include <string.h>

typedef struct student{
  char Name[50];
  int age;
  char dept[10];
  int ID;
  float CGPA;
}student;
void update ( student *c){
strcpy ((*c).Name, "Wahab");
(*c).age = 23;
strcpy ((*c).dept, "CSE");
(*c).ID = 04;
(*c).CGPA =3.6;
}
int main (){
 student stu;
 strcpy (stu.Name, "Abdul");
 stu.age = 22;
 strcpy (stu.dept, "EEE");
 stu.ID = 20;
 stu.CGPA = 5.2;
 update (&stu);

 printf ("%s\n", stu.Name);
 printf ("%d\n", stu.age);
 printf ("%s\n", stu.dept);
 printf ("%d\n", stu.ID);
 printf ("%f\n", stu.CGPA);

 return 0;   
}

