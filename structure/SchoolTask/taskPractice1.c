
#include <stdio.h>       // Include standard input/output header file
#include <stdlib.h>      // Include standard library header file
#include <string.h>      // Include string manipulation functions

const int N = 1000;      // Constant integer N to define the size of arrays
int flagarr[N];          // Array to keep track of whether a student with a particular ID exists

typedef struct student {  // Define a structure to represent a student
    int Id;               // Student ID
    char *firstName;      // First name of the student
    char *lastName;       // Last name of the student
    char *dob;            // Date of birth of the student
    char *section;        // Section of the student
    char *dept;           // Department of the student
    float cgp;            // CGPA of the student
} student;

// Function to compare two students based on CGPA for qsort
int compareCGPA(const void *a, const void *b) {
    return (*(student *)b).cgp - (*(student *)a).cgp;  // Compare CGPA of two students
}

// Function to compare two students based on ID for qsort
int compareID(const void *a, const void *b) {
    return (*(student *)a).Id - (*(student *)b).Id;    // Compare ID of two students
}

int main() {
    student s[1000];     // Array to store student objects
    while (1) {
        char command[10];  // Array to store the user command
        scanf("%s", command);  // Read user command
        
        if (strcmp(command, "add") == 0) {  // Check if the command is "add"
            student temp;  // Create a temporary student object
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
            s[temp.Id] = temp;  // Store the student object in the array
            flagarr[temp.Id] = 1;  // Set the flag to indicate that a student with this ID exists
            printf("Student data stored successfully.\n");
        } else if (strcmp(command, "find") == 0) {  // Check if the command is "find"
            int Id;
            printf("Enter student ID for searching: ");
            scanf("%d", &Id);
            if (flagarr[Id] == 1) {  // Check if the student with the given ID exists
                // Print the details of the student
                printf("Student Found\n\n");
                printf("+------------------+-----------+----------+-----------------+----------------------+----------------------+--------+\n");
                printf("|     First Name   | Last Name |    ID    |   Date of Birth |      Section         |      Department      |  CGP   |\n");
                printf("+------------------+-----------+----------+-----------------+----------------------+----------------------+--------+\n");
                printf("| %-16s | %-9s | %-8d | %-15s | %-20s | %-20s | %-6.2f |\n", s[Id].firstName, s[Id].lastName, s[Id].Id, s[Id].dob, s[Id].section, s[Id].dept, s[Id].cgp);
                printf("+------------------+-----------+----------+-----------------+----------------------+----------------------+--------+\n\n");
            } else {
                printf("Student with that ID not found.\n");
            }
        } else if (strcmp(command, "list") == 0) {  // Check if the command is "list"
            // Print the details of all students
            printf("+------------------+-----------+----------+-----------------+----------------------+----------------------+--------+\n");
            printf("|     First Name   | Last Name |    ID    |   Date of Birth |      Section         |      Department      |  CGP   |\n");
            printf("+------------------+-----------+----------+-----------------+----------------------+----------------------+--------+\n");
            for (int Id = 0; Id < N; Id++) {
                if (flagarr[Id] == 1) {
                    printf("| %-16s | %-9s | %-8d | %-15s | %-20s | %-20s | %-6.2f |\n", s[Id].firstName, s[Id].lastName, s[Id].Id, s[Id].dob, s[Id].section, s[Id].dept, s[Id].cgp);
                }
            }
            printf("+------------------+-----------+----------+-----------------+----------------------+----------------------+--------+\n\n");
        } else if (strcmp(command, "remove") == 0) {  // Check if the command is "remove"
            int Id;
            printf("Enter student ID to remove: ");
            scanf("%d", &Id);
            if (flagarr[Id] == 1) {  // Check if the student with the given ID exists
                flagarr[Id] = 0;  // Reset the flag to indicate that the student has been removed
                // Free the memory allocated for the student's details
                free(s[Id].firstName);
                free(s[Id].lastName);
                free(s[Id].dob);
                free(s[Id].section);
                free(s[Id].dept);
                printf("Student removed successfully.\n");
            } else {
                printf("Student with that ID not found.\n");
            }
        } else if (strcmp(command, "rank") == 0) {  // Check if the command is "rank"
            student sorted[N];  // Array to store sorted students
            int count = 0;
            for (int Id = 0; Id < N; Id++) {
                if (flagarr[Id] == 1) {
                    sorted[count++] = s[Id];  // Copy the student to the sorted array
                }
            }
            qsort(sorted, count, sizeof(student), compareCGPA);  // Sort students based on CGPA
            // Print the details of students in ranked order
            printf("+------------------+-----------+----------+-----------------+----------------------+----------------------+--------+\n");
            printf("|     First Name   | Last Name |    ID    |   Date of Birth |      Section         |      Department      |  CGP   |\n");
            printf("+------------------+-----------+----------+-----------------+----------------------+----------------------+--------+\n");
            for (int i = 0s);
            }