// COMSC-210 | Lab 11 | Dat Hoang Vien
// IDE used: Visual Code Studio

// Libraries and header files
#include <iostream>
#include <string>
#include <iomanip>
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

    // Add a Student object into the array
    addStudent(studentArr, count);

    cout << "Total number of Students: " << count << endl;
    // Display a header for the Student objects
    cout << left << setw(5) << "ID";
    cout << left << setw(20) << "Student Name";
    cout << left << setw(5) << "Age";
    cout << left << setw(50) << "Enrolled Courses";
    cout << endl;

    // Display a === line to separate the header from the rest
    cout << string(5 + 20 + 5 + 50, '=') << endl;

    // Iterate and display all the Student objects in the array
    for (int i = 0; i < count; i++)
    {
        displayStudent(studentArr[i]);
    }

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
    temp.courses = new string[MAX_COURSES];    // Dynamically declare a string array to store all the courses

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
    cout << "Enter the student's name: ";
    getline(cin, temp.name);

    // Check whether the entered name is empty or not
    while (temp.name.length() <= 0) 
    {
        // Display an error message
        cout << "Error! Name cannot be blank! Please enter a name: ";
        getline(cin, temp.name);
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
    cout << "Enter the Student's courses (MAX: 10 courses): " << endl;
    cout << " --- Note: Please enter ONLY 1 course per line! Enter 0 to exit! --- " << endl;

    // Set courseCount to 0
    temp.courseCount = 0;

    // While the total number of courses is fewer than 10
    while (temp.courseCount < 10)
    {
        // Create a temporary string to store the course
        string course = "";

        // Store the input string into the course variable
        getline(cin, course);

        // Check whether the entered course is empty or not
        while (course.length() <= 0)
        {
            // Display an error message
            cout << "Error! Course cannot be blank! Please enter a course: ";
            getline(cin, course);
        }

        // Sentinel case
        if (course == "0")
        {
            break;
        }
        
        // Store the entered course
        temp.courses[temp.courseCount] = course;
        temp.courseCount++;      // Increment the courses count
    }

    // Assign the temp Student struct into the array
    studentArr[count] = temp;
    count++;    // Increment the total number of Students
}

/*
    displayStudent()
    Display all the information of a Student struct.
    Arguments: a Student struct
    Returns: none
*/
void displayStudent(const Student& student)
{
    // Display the basic fields
    cout << left << setw(5) << student.studentID;
    cout << left << setw(20) << student.name;
    cout << left << setw(5) << student.age;
    
    // Iterate and display all the courses
    for (int i = 0; i < student.courseCount; i++)
    {
        // Display the course to the console
        cout << student.courses[i];

        // Add a comma and a space if this is not final course
        if (i != student.courseCount - 1)
        {
            cout << ", ";
        }
    }

    // Enter a new line
    cout << endl;
}