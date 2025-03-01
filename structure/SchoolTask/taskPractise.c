#include <stdio.h>
#include <stdlib.h>
#include <string.h>

const int N = 1000;
int flagarr[N];

typedef struct student {
    int Id;
    char *name;
    char *dept;
    float cgp;
} student;

// Function to compare two students based on CGPA for qsort
int compareCGPA(const void *a, const void *b) {
    return (*(student *)b).cgp - (*(student *)a).cgp;
}

int main() {
    student s[1000];
    while (1) {
        char command[10];
        scanf("%s", command);

        if (strcmp(command, "add") == 0) {
            student temp;
            printf("Enter student ID: ");
            scanf("%d", &temp.Id);

            printf("Enter the name: ");
            temp.name = (char *)malloc(100);
            scanf("%s", temp.name);

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
                printf("+--------------+----------------------+----------+--------+\n");
                printf("|    Name      |      Department      |    ID    |  CGP   |\n");
                printf("+--------------+----------------------+----------+--------+\n");
                printf("| %-12s | %-20s | %-8d | %-6.2f |\n", s[Id].name, s[Id].dept, s[Id].Id, s[Id].cgp);
                printf("+--------------+----------------------+----------+--------+\n\n");
            } else {
                printf("Student with that ID not found.\n");
            }
        } else if (strcmp(command, "list") == 0) {
            printf("+--------------+----------------------+----------+--------+\n");
            printf("|    Name      |      Department      |    ID    |  CGP   |\n");
            printf("+--------------+----------------------+----------+--------+\n");
            for (int Id = 0; Id < N; Id++) {
                if (flagarr[Id] == 1) {
                    printf("| %-12s | %-20s | %-8d | %-6.2f |\n", s[Id].name, s[Id].dept, s[Id].Id, s[Id].cgp);
                }
            }
            printf("+--------------+----------------------+----------+--------+\n\n");
        } else if (strcmp(command, "remove") == 0) {
            int Id;
            printf("Enter student ID to remove: ");
            scanf("%d", &Id);
            if (flagarr[Id] == 1) {
                flagarr[Id] = 0;
                free(s[Id].name);
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
            printf("+--------------+----------------------+----------+--------+\n");
            printf("|    Name      |      Department      |    ID    |  CGP   |\n");
            printf("+--------------+----------------------+----------+--------+\n");
            for (int i = 0; i < count; i++) {
                printf("| %-12s | %-20s | %-8d | %-6.2f |\n", sorted[i].name, sorted[i].dept, sorted[i].Id, sorted[i].cgp);
            }
            printf("+--------------+----------------------+----------+--------+\n\n");
        } else if (strcmp(command, "exit") == 0) {
            break;
        }
    }

    return 0;
}