//ERICMUIKIA


#include<iostream>
#include<string>
using namespace std;

int main() {
    string studentName;
    double marks;

    cout << "Enter student name: ";
    getline(cin, studentName);

    cout << "Enter marks: ";
    cin >> marks;

    char grade;
    if (marks >= 70 && marks <=100)
        grade = 'A';
    else if (marks >= 60)
        grade = 'B';
    else if (marks >= 50)
        grade = 'C';
    else if (marks >= 40)
        grade = 'D';
    else
        grade = 'E';
    
    cout << "\n----- GRADE REPORT -----\n";
    cout << "Student Name: " << studentName << endl;
    cout << "Marks: " << marks << endl;
    cout << "Grade: " << grade << endl;
    
    return 0;

}

