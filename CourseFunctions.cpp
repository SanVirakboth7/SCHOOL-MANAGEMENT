#include <algorithm>
#include "CourseFunctions.h"

void sortStudentsInCourse(Course& course) {
    sort(course.begin(), course.end(), [](const Student& a, const Student& b) {
        return a.getName() < b.getName();
        });
}

void deleteStudentFromCourse(Course& course, int studentId) {
    course.enrolledStudents.erase(remove_if(course.begin(), course.end(), [studentId](const Student& student) {
        return student.getStudentId() == studentId;
        }), course.end());
}