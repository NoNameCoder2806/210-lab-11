// COMSC-210 | Lab 11 | Dat Hoang Vien
// IDE used: Visual Code Studio

// Libraries and header files
#include <iostream>
#include <string>
#include "Student.h"
using namespace std;

// Constants
const int ARRAY_SIZE = 100;
const int MIN_AGE = 5;
const int MAX_AGE = 100;
const int MAX_COURSES = 10;

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
    // Use a temporary Student struct object to store the input
    Student temp;

    // Calculate Student's ID based on the counter variable
    if (count + 1 < 10)
    {
        // Convert count + 1 to string (Add 2 zeros if the id is smaller than 10)
        temp.studentID = "00" + to_string(count + 1);
    }
    else if (count + 1 < 100)
    {
        // Convert count + 1 to string (Add 1 zero if the id is smaller than 100)
        temp.studentID = "0" + to_string(count + 1);
    }
    else if (count + 1 == 100)
    {
        // Convert count + 1 to string
        temp.studentID = to_string(count + 1);
    }

    // Prompt the user to enter the Student's name
    cout << "Enter the student's name:";
    cin >> temp.name;
    cin.ignore(1000, 10);

    // Check whether the entered name is empty or not
    while (temp.name.length() <= 0) 
    {
        // Display an error message
        cout << "Error! Name cannot be blank! Please enter a name: ";
        cin >> temp.name;
        cin.ignore(1000, 10);
    }

    // Prompt the user to enter Student's age
    cout << "Enter the student's age: ";
    cin >> temp.age;
    cin.ignore(1000, 10);
    
    // Check whether the entered age is valid or not
    while (temp.age < 5 || temp.age > 100)
    {
        // Display an error message
        cout << "Error! Please enter a valid age (between 5 and 100): ";
        cin >> temp.age;
        cin.ignore(1000, 10);
    }

    // Prompt the user to enter Student's enrolled courses
    cout << "Enter the Student's courses (MAX: 10 courses): ";
    while (true)
    {
        // Declare a coursesCount variable to keep track of the number of courses
        int coursesCount = 0;
        cin >> temp.courses[coursesCount];
    }
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