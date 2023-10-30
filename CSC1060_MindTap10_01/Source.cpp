// CSC1060_MIndTap 10-1 Solution to Workshop 4 
/*
* Chapter 9 defined the struct studentType to implement 
* the basic properties of a student. 
* Define the class studentType with the same components 
* as the struct studentType, and add member functions 
* to manipulate the data members. 
* (Note that the data members of the class studentType must be private.)
*/

#include <iostream>
#include <string>
#include "studentType.h"

using namespace std;

int main()
{
    // Instantiate a studentType object with default values
    studentType student; 

    // Instantiate a studentType object with passed parameters
    studentType newStudent("Brain", "Johnson", '*', 85, 95, 3.89);

    // Print the student object with default parameters
    student.print();
    cout << "***************" << endl << endl;

    // Print the student object with passed parameters
    newStudent.print();
    cout << "***************" << endl << endl;

    return 0;
}