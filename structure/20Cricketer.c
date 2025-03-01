

// #include <stdio.h>
// #include <string.h>
// int main (){
// typedef struct cricket{
//     char name[30];
//     int age;
//     float hight;
// } cricket;

// cricket arr[3];
//  for (int i =0; i<3; i++){
//     scanf ("%s]", arr[i].name);
//     scanf ("%d", &arr[i].age);
//     scanf ("%f", &arr[i].hight);
//  }
//  for (int i= 0; i<3; i++){
//   printf ("Name     : %s\n", arr[i].name);
//   printf ("age      : %d\n", arr[i].age);
//   printf ("hight    : %f\n", arr[i].hight);
//  }
//  return 0;
// }

#include <stdio.h>
#include <string.h>
int main (){
typedef struct cricket{
    char name[50];
    int age;
    float hight;
    char country[50];
}cricket;
int n;
printf ("enter the number of cricketers ;\n");
scanf ("%d", &n);
cricket arr[n];
printf ("Enter the Data of Cricketers :\n");
for (int i =0; i< n; i++){
 scanf ("%s", arr[i].name);
 scanf ("%d", &arr[i].age);
 scanf ("%f", &arr[i].hight);
 scanf ("%s", arr[i].country);
}
for (int i =0; i< n; i++){
printf ("Name     : %s ", arr[i].name);
printf ("Age      : %d ", arr[i].age);
printf ("Hight    : %f ", arr[i].hight);
printf ("country  : %s ", arr[i].country);
}
return 0;
}