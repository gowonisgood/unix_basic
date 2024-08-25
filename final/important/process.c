#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "process.h"

void inputStudentInfo(Student* student) {

/* TODO 1
   Fill in the blanks with appropriate answers. */

//==============Your Code==============

printf("Enter student name: ");
scanf("%49[^\n]", student->name); //Store the name in the 'student' struct.
while (getchar() != '\n'); // clear buffer

printf("Enter student age: ");
scanf("%d", &student->age); //Store the age in the 'student' struct.
while (getchar() != '\n'); // clear buffer

printf("Enter student ID: ");
scanf("%d", &student->studentID); //Store the studentID in the 'student' struct.
while (getchar() != '\n'); // clear buffer

//==============Your Code==============
}

void enrollStudentInfo(const Student* student) {

/* TODO 2
   Fill in the blanks with appropriate answers. */

//==============Your Code==============

FILE* file = fopen("result.txt", "a"); //Open the 'result.txt' file using the append mode.
if (file==NULL) { // Verify that the file pointer is not NULL.
    printf("Error opening file.\n");
    return;
}

fprintf(file, "%s %d %d\n", student->name, student->age, student->studentID);
//Print out the name, age, and class number of the 'student' struct to the 'result.txt' file.

fclose(file); // Close the stream.
}

void printAllStudents() {

Student student;
int idx = 1;

/* TODO 3
   Fill in the blanks with appropriate answers. */

//==============Your Code==============

FILE* file = fopen("result.txt", "r"); //Open the 'result.txt' file using the read mode.
if (file==NULL) { // Verify that the file pointer is not NULL.
    printf("No students enrolled yet.\n");
    return;
}

printf("%s %-50s %-3s %-10s\n", "No.", "Name", "Age", "Student ID");

while (fscanf(file, "%49s %d %d", student.name , &student.age, &student.studentID) == 3) { // Store the information in the file to the 'student' struct.
    printf("%02d. %-50s %3d %10d\n", idx, student.name, student.age, student.studentID);
    idx++;
}

fclose(file); // Close the stream.

//==============Your Code==============
}

