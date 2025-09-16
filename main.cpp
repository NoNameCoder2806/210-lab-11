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
void addStudent(Student* studentArr, int& count);      // Add a new Student to the array

void displayStudent(const Student& student);           // Display the information of a Student object

int main ()
{
    // Dynamically create an array of Student type objects
    Student* studentArr = nullptr;
    studentArr = new Student[ARRAY_SIZE];

    // Declare a counter to keep track of the array's size
    int count = 0;

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
    // Prompt the user to enter the student's name
    cout << "Enter name for student:";
    cin >> studentArr[count].name;
    cin.ignore(1000, 10);

    // Check whether the entered name is empty or not
    while (studentArr[count].name.length() <= 0) 
    {
        // Display an error message
        cout << "Error! Name cannot be blank! Please enter a name: ";
        cin >> studentArr[count].name;
        cin.ignore(1000, 10);
    }

    // Prompt the user to enter the student's id
    cout << "Enter the student id: ";
    cin >> studentArr[count].studentID;
    cin.ignore(1000, 10);
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