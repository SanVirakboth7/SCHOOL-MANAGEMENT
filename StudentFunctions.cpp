#include <iostream>
#include <stdexcept>
#include "StudentFunctions.h"

void validateGPA(double gpa) {
    if (gpa < 0 || gpa > 4.0) {
        throw invalid_argument("Invalid GPA. Must be between 0 and 4.0");
    }
}

void viewStudentInfo(const Student& student) {
    cout << "Student Information:\n";
    cout << "Name: " << student.getName() << "\n";
    cout << "ID: " << student.getStudentId() << "\n";
    cout << "GPA: " << student.getGPA() << "\n";
}

void updateStudentGPA(Student& student, double newGPA) {
    validateGPA(newGPA);
    student.setGPA(newGPA);
}