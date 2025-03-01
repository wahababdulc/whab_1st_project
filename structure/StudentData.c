// #include <stdio.h>
// #include <string.h>
// #include <stdbool.h>



//    struct Student {
//     int rollNumber;
//     char name[50];
//     char department[50];
//     char course[50];
//     int yearOfJoining;
// };

// int sameDepts ( struct Student s1, struct Student s2) {
//     if (strcmp(s1.department, s2.department) == 0) {
//         return 1;
//     } else {
//         return 0; 
//     }
// }

// int main() {
    
//     struct Student student1 = {101, "John Doe", "Computer Science", "B.Tech", 2020};
//     struct Student student2 = {102, "Jane Smith", "Electrical Engineering", "B.E", 2019};
    
//     if (sameDepts(student1, student2)) {
//         printf("Both students are in the same department.\n");
//     } else {
//         printf("Both students are in different departments.\n");
//     }
    
//     return 0;
// }

#include <stdio.h>
#include <string.h>
struct student {
int roll;
char name[50];
char depts[50];
char course[30];
int date;

};
int sameDepts (struct student st1, struct student st2){
    if (strcmp (st1.depts, st2. depts) == 0){
    return 1;
    }
    else{
        return 0;
    }
}
int main (){
    struct Student st1 = {101, "John Doe", "Computer Science", "B.Tech", 2020};
    struct Student st2 = {102, "Jane Smith", "Electrical Engineering", "B.E", 2019};
    
    if (sameDepts(student1, student2)) {
        printf("Both students are in the same department.\n");
    } else {
        printf("Both students are in different departments.\n");
    }

    return 0;
}