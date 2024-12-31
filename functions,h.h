#ifndef FUNCTIONS_H
#define FUNCTIONS_H
#include "datatypes.h"
#define MAX_STUDENTS 100
// Khai báo các hàm
void displayAdminMenu();
void adminMenu();
void listStudents(Student students[], int count);
void addStudent(Student students[], int *count);
void updateStudent(Student students[], int count);
void deleteStudent(Student students[], int *count);
void searchStudent(Student students[], int count);
void sortStudents(Student students[], int count);

#endif // FUNCTIONS_H

