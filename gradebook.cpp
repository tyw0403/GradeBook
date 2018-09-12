#include "gradebook.h"
#include <iostream>
#include <iomanip>
using namespace std;


GradeBook::GradeBook(string name)
    : aCount( 0 ),
      bCount( 0 ),
      cCount( 0 ),
      dCount( 0 ),
      eCount( 0 )
{
    setCourseName(name);
}

void GradeBook::setCourseName(string name)
{
    if ( name.size() <= 25 )
        courseName = name;
    else
    {
        courseName = name.substr( 0, 25 );

        cerr << "Name \"" << name << "\" exceeds maximum length (25).\n"
             << "Limiting courseName to first 25 characters.\n" << endl;
    }
}

string GradeBook::getCourseName() const
{
    return courseName;
}

void GradeBook::displayMessage() const
{
    cout << "Welcome to the grade book for\n" << getCourseName() << "!" << endl;
}

void GradeBook::determineClassAverage() const
{
    int total = 0;
    unsigned int gradeCounter = 0;
    int grade = 0;
    cout << "Enter grade or -1 to quit: ";
    cin >> grade;

    while ( grade != -1 )
    {
        total = total + grade;
        gradeCounter = gradeCounter + 1;
        cout << "Enter grade or -1 to quit: ";
        cin >> grade;
    }

    if ( gradeCounter != 0 )
    {
        double average = static_cast< double >( total ) / gradeCounter;

        cout << "\nTotal of all " << gradeCounter << " grades entered is " << total << endl;
        cout << setprecision( 2 ) << fixed;
        cout << "Class average is " << average << endl;
    }
    else
        cout << "No grades were entered" << endl;

}

void GradeBook::inputGrades()
{
    /*
    int grade;

    cout << "Enter the letter grades." << endl
         << "Enter the EOF character to end input." <<endl;

    while (( grade = cin.get()) != EOF )
    {
        switch ( grade )
        {
        case 'A':
        case 'a':
            ++aCount;
            break;
        case 'B':
        case 'b':
            ++bCount;
            break;
        case 'C':
        case 'c':
            ++cCount;
            break;
        case 'D':
        case 'd':
            ++dCount;
            break;
        case 'E':
        case 'e':
            ++eCount;
            break;
        case '\n':
        case '\t':
        case ' ':
            break;
        default:
            cout << "Incorrect letter grade entered."
                 << "Enter a new grade." << endl;
            break;

        }
    }
    */

    int grade1;
    int grade2;
    int grade3;

    cout << "Enter three integer grades: ";
    cin >> grade1 >> grade2 >> grade3;

    maximumGrade = maximum(grade1, grade2, grade3);

}

void GradeBook::displayGradeReport() const
{
    /*
    cout << "\n\nNumber of students who received each letter grade:"
         << "\nA: " << aCount
         << "\nB: " << bCount
         << "\nC: " << cCount
         << "\nD: " << dCount
         << "\nE: " << eCount
         << endl;
         */
    cout << "Maximum of grades entered: " << maximumGrade << endl;

}

int GradeBook::maximum(int x, int y, int z) const
{
    int maxvalue = x;
    if ( y > maxvalue )
        maxvalue = y;
    if ( z > maxvalue )
        maxvalue = z;

    return maxvalue;
}

