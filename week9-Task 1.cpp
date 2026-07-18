#include<iostream>
#include<string>
using namespace std;

class Person {
    protected:
        string name;
        int age;

    public:
        void inputPerson() {
            cout << "Enter name: ";
            getline(cin, name);

            cout << "Enter age: ";
            cin >> age;
        }

        void displayPerson() {
            cout << "Name  :" << name << endl;
            cout << "Age   :" << age << endl;
        }
};
class student : public Person {
    private:
        string admissionNumber;
        string studentClass;

    public:
        void inputStudent() {
            inputPerson();

            cout << "Enter admission number: ";
            cin.ignore();
            getline(cin, admissionNumber);
            
            cout << "Enter class: ";
            getline(cin, studentClass);

        }

        void displayStudent() {
            cout << "\n----- STUDENT DETAILS -----\n";
            displayPerson();
            cout << "Admission No.: " << admissionNumber << endl;
            cout <<"Class         : " << studentClass << endl;
        }
};

int main() {
    student student;

    student.inputStudent();
    student.displayStudent();
    
    return 0;
}