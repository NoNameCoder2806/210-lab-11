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
    string name;        // The student's name
    int studentID;      // The student's id
    int age;            // The student's age 
    string address;     // The student's current address 
    string* courses;    // All the courses that the student is currently taking
};