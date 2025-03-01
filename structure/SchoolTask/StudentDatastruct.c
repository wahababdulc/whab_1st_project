#include <stdio.h>
#include <stdlib.h>
#include <string.h>
const int N = 1000;
int flagarr[N];

typedef struct student {
    int Id;
    char *firstName;
    char *lastName;
    char *dob;
    char *section;
    char *dept;
    float cgp;
} student;

// Function to compare two students based on CGPA for qsort
int compareCGPA(const void *a, const void *b) {
    return (*(student *)b).cgp - (*(student *)a).cgp;
}

int main() {
    student s[N];
    while (1) {
        char command[10];
        scanf("%s", command);

        if (strcmp(command, "add") == 0) {
            student temp;
            printf("Enter student ID: ");
            scanf("%d", &temp.Id);

            printf("Enter first name: ");
            temp.firstName = (char *)malloc(50);
            scanf("%s", temp.firstName);

            printf("Enter last name: ");
            temp.lastName = (char *)malloc(50);
            scanf("%s", temp.lastName);

            printf("Enter date of birth: ");
            temp.dob = (char *)malloc(20);
            scanf("%s", temp.dob);

            printf("Enter section: ");
            temp.section = (char *)malloc(10);
            scanf("%s", temp.section);

            printf("Enter Dept: ");
            temp.dept = (char *)malloc(50);
            scanf("%s", temp.dept);

            printf("Enter CGPA: ");
            scanf("%f", &temp.cgp);
            s[temp.Id] = temp;
            flagarr[temp.Id] = 1;
            printf("Student data stored successfully.\n");
        } else if (strcmp(command, "find") == 0) {
            int Id;
            printf("Enter student ID for searching: ");
            scanf("%d", &Id);
            if (flagarr[Id] == 1) {
                printf("Student Found\n\n");
                printf("+------------------+-----------+----------+-----------------+----------------------+----------------------+--------+\n");
                printf("|     First Name   | Last Name |    ID    |   Date of Birth |      Section         |      Department      |  CGP   |\n");
                printf("+------------------+-----------+----------+-----------------+----------------------+----------------------+--------+\n");
                printf("| %-16s | %-9s | %-8d | %-15s | %-20s | %-20s | %-6.2f |\n", s[Id].firstName, s[Id].lastName, s[Id].Id, s[Id].dob, s[Id].section, s[Id].dept, s[Id].cgp);
                printf("+------------------+-----------+----------+-----------------+----------------------+----------------------+--------+\n\n");
            } else {
                printf("Student with that ID not found.\n");
            }
        } else if (strcmp(command, "list") == 0) {
            printf("+------------------+-----------+----------+-----------------+----------------------+----------------------+--------+\n");
            printf("|     First Name   | Last Name |    ID    |   Date of Birth |      Section         |      Department      |  CGP   |\n");
            printf("+------------------+-----------+----------+-----------------+----------------------+----------------------+--------+\n");
            for (int Id = 0; Id < N; Id++) {
                if (flagarr[Id] == 1) {
                    printf("| %-16s | %-9s | %-8d | %-15s | %-20s | %-20s | %-6.2f |\n", s[Id].firstName, s[Id].lastName, s[Id].Id, s[Id].dob, s[Id].section, s[Id].dept, s[Id].cgp);
                }
            }
            printf("+------------------+-----------+----------+-----------------+----------------------+----------------------+--------+\n\n");
        } else if (strcmp(command, "remove") == 0) {
            int Id;
            printf("Enter student ID to remove: ");
            scanf("%d", &Id);
            if (flagarr[Id] == 1) {
                flagarr[Id] = 0;
                free(s[Id].firstName);
                free(s[Id].lastName);
                free(s[Id].dob);
                free(s[Id].section);
                free(s[Id].dept);
                printf("Student removed successfully.\n");
            } else {
                printf("Student with that ID not found.\n");
            }
        } else if (strcmp(command, "rank") == 0) {
            student sorted[N];
            int count = 0;
            for (int Id = 0; Id < N; Id++) {
                if (flagarr[Id] == 1) {
                    sorted[count++] = s[Id];
                }
            }
            qsort(sorted, count, sizeof(student), compareCGPA);
            printf("+------------------+-----------+----------+-----------------+----------------------+----------------------+--------+\n");
            printf("|     First Name   | Last Name |    ID    |   Date of Birth |      Section         |      Department      |  CGP   |\n");
            printf("+------------------+-----------+----------+-----------------+----------------------+----------------------+--------+\n");
            for (int i = 0; i < count; i++) {
                printf("| %-16s | %-9s | %-8d | %-15s | %-20s | %-20s | %-6.2f |\n", sorted[i].firstName, sorted[i].lastName, sorted[i].Id, sorted[i].dob, sorted[i].section, sorted[i].dept, sorted[i].cgp);
            }
            printf("+------------------+-----------+----------+-----------------+----------------------+----------------------+--------+\n\n");
       
        } else if (strcmp(command, "exit") == 0) {
            break;
        }
    }

    return 0;
}