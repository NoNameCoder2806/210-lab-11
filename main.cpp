// COMSC-210 | Lab 11 | Dat Hoang Vien
// IDE used: Visual Code Studio

// Libraries and header files
#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

// Constants
const int ARRAY_SIZE = 100;

// Function prototypes
void addStudent(Student* studentArr, int& count);            // Add a new Student to the array

void displayStudent(const Student& student);     // Display the information of a Student object

int main ()
{
    // Dynamically create an array of Student type objects
    Student* studentArr = nullptr;
    studentArr = new Student[ARRAY_SIZE];

    return 0;
}

// Function implementations
/*
    addStudent()
    Add a new Student object to the existing array
    Arguments: a Student array pointer, a count integer to keep track of the array size
    Returns: none
*/
void addStudent(Student* studentArr, int& count)
{

}

/*
    displayStudent()
    Display all the information of a Student struct.
    Arguments: a Student struct
    Returns: none
*/
void displayStudent(const Student& student)
{

}