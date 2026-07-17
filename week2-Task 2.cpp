//ERICMUIKIA


#include<iostream>
#include<string>
using namespace std;

int main() {
    string studentName;
    int age;
    double examScore;

    cout << "Enter stdent name: ";
    getline(cin, studentName);

    cout << "Enter age: ";
    cin >> age;

    cout << "Enter exam score: ";
    cin >> examScore;

    string decision;
    
    if (age >= 18) {
        if (examScore >= 50){
            decision = "Admitted";
        }
    else {
        decision = "Not admitted: Low Score";
    }
    } else {
        decision = "Not admitted: Underage";
    }

    cout << "\n----- ADMISSION RESULT -----\n";
    cout << "Student Name : " << studentName << endl;
    cout << "Age          : " << age << endl;
    cout << "Exam Score   : " << examScore << endl;
    cout << "Decision     : " << decision << endl;


return 0;
}