#ifndef PROCESS_H
#define PROCESS_H

/* TODO 4
Fill in the blanks with appropriate answers. */

//==============Your Code==============

 typedef struct _Student { // Type define - The struct name is '_Student'.
char name[50];
int age;
int studentID;
} Student; // The struct alias is 'Student'.

//==============Your Code==============

void inputStudentInfo(Student* student);
void enrollStudentInfo(const Student* student);
void printAllStudents();

#endif // PROCESS_H


