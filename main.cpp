#include <iostream>
#include "gradebook.h"

using namespace std;

int main(int argc, char *argv[])
{
    GradeBook gradeBook1("CS101 Introduction to Programming in C++");
    GradeBook gradeBook2("CS102 C++ Data Structures");

    cout << "gradeBook1's initial course name is: "
         << gradeBook1.getCourseName()
         << "\ngradeBook2's initial course name is: "
         << gradeBook2.getCourseName() << endl;
    gradeBook1.setCourseName("CS101 C++ Programming");

    cout << "\ngradeBook1's course name is: " << gradeBook1.getCourseName()
         << "\ngradeBook2's course name is: " << gradeBook2.getCourseName() << endl;

//    gradeBook1.determineClassAverage();
    gradeBook1.inputGrades();
    gradeBook1.displayGradeReport();
    return 0;
}
