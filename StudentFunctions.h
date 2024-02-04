#pragma once
#ifndef STUDENT_FUNCTIONS_H
#define STUDENT_FUNCTIONS_H

#include "Student.h"

void validateGPA(double gpa);
void viewStudentInfo(const Student& student);
void updateStudentGPA(Student& student, double newGPA);

#endif 