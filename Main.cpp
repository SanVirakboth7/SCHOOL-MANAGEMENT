#include <iostream>
#include <vector>
#include "Student.h"
#include "Course.h"
#include "Teacher.h"
#include "StudentFunctions.h"
#include "CourseFunctions.h"
#include "TeacherFunctions.h"
using namespace std;

int main() {
   
    vector<Student> students;
    vector<Course> courses;
    vector<Teacher> teachers;

    try {
        
        teachers.emplace_back("teacher1", "password");

        string enteredUsername, enteredPassword;
        cout << "Enter username: ";
        cin >> enteredUsername;
        cout << "Enter password: ";
        cin >> enteredPassword;

        validateTeacher(teachers, enteredUsername, enteredPassword);

        while (true) {
            int choice;
            cout << "Teacher Menu:\n";
            cout << "1. Add Student to Course\n";
            cout << "2. View Student Information\n";
            cout << "3. Search Student in Course\n";
            cout << "4. Sort Students in Course\n";
            cout << "5. Update Student GPA\n";
            cout << "6. Delete Student from Course\n";
            cout << "7. Display University Information\n";
            cout << "8. Logout\n";
            cout << "Enter your choice: ";
            cin >> choice;

            switch (choice) {
            case 1: {
                
                Student newStudent;
                string courseName;

                
                inputStudentDetails(newStudent);

                cout << "Enter course name: ";
                cin >> courseName;

               
                addStudentToCourse(students, courses, newStudent, courseName);
                cout << "Student added to the course.\n";
                break;
            }
            case 2: {
                
                int studentId;
                cout << "Enter student ID: ";
                cin >> studentId;

      
                viewStudentInformation(students, studentId);
                break;
            }
            case 3: {
                
                int studentId;
                string courseName;

                cout << "Enter student ID: ";
                cin >> studentId;

                cout << "Enter course name: ";
                cin >> courseName;

                
                searchStudentInCourse(students, courses, studentId, courseName);
                break;
            }
            case 4: {
               
                string courseName;
                cout << "Enter course name: ";
                cin >> courseName;

                
                sortStudentsInCourse(courses, courseName);
                cout << "Students in the course sorted.\n";
                break;
            }
            case 5: {
                
                int studentId;
                double newGPA;

                cout << "Enter student ID: ";
                cin >> studentId;

                cout << "Enter new GPA: ";
                cin >> newGPA;

                
                updateStudentGPA(students, studentId, newGPA);
                cout << "Student GPA updated.\n";
                break;
            }
            case 6: {
                
                int studentId;
                string courseName;

                cout << "Enter student ID: ";
                cin >> studentId;

                cout << "Enter course name: ";
                cin >> courseName;

               
                deleteStudentFromCourse(students, courses, studentId, courseName);
                cout << "Student deleted from the course.\n";
                break;
            }
            case 7: {
                
                displayUniversityInformation(courses);
                break;
            }
            case 8: {
                cout << "Logging out.\n";
                return 0;
            }
            default:
                cout << "Invalid choice. Please try again.\n";
            }
        }
    }
    catch (const exception& e) {
        cout << "Error: " << e.what() << "\n";
    }

    return 0;
}