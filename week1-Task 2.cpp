//ERICMUIKIA

#include<iostream>
#include<iomanip>
#include <string>
using namespace std;

int main() {
    string studentName;
    double theoryMarks, practicalMarks;

    cout <<"Enter student name: ";
    getline(cin, studentName);

    cout << "Enter theory test marks: ";
    cin >> theoryMarks;

    cout <<"Enter practical test marks: ";
    cin >> practicalMarks;

    double averageScore = (theoryMarks + practicalMarks) / 2;

    cout <<fixed<<setprecision(2);
    cout << "\n----- DRIVING TEST RESULT -----\n";
    cout <<"Student Name: "<<studentName << endl;
    cout <<"Theory Marks: "<<theoryMarks << endl;
    cout <<"Practical Marks: "<<practicalMarks << endl;
    cout <<"Average Score: "<< averageScore<< endl;


    if (averageScore >=50)
       cout << "Result    : PASSED"<< endl;
    else
       cout <<" Result    : FAILED" << endl;
    
    return 0;
}