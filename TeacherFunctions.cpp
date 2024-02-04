#include <iostream>
#include "TeacherFunctions.h"

void validateTeacher(const vector<Teacher>& teachers, const string& enteredUsername, const string& enteredPassword) {
    auto teacherIt = find_if(teachers.begin(), teachers.end(), [enteredUsername, enteredPassword](const Teacher& teacher) {
        return teacher.getUsername() == enteredUsername && teacher.getPassword() == enteredPassword;
        });

    if (teacherIt == teachers.end()) {
        cout << "Invalid credentials. Exiting.\n";
        exit(1);
    }
}