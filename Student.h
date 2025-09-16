// COMSC-210 | Lab 11 | Dat Hoang Vien
// IDE used: Visual Code Studio

#pragma once

// Libraries
#include <iostream>
#include <string>
using namespace std;

// Student structure
struct Student
{
    string studentID;      // The student's id
    string name;           // The student's name
    int age;               // The student's age 
    string* courses;       // All the courses that the student is currently taking
};