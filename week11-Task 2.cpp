#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Student { 
    private:
        string studentName;
        string admissionNumber;
        double feeBalance;

    public:
        void inputStudentData() {
            cout << "Enter student name: ";
            getline(cin, studentName);

            cout << "Enter admission number: ";
            getline(cin, admissionNumber);

            cout << "Enter fee balance: ";
            cin >> feeBalance;
        }

        void makePayment() {
            double amount;
            cout << "Enter payment amount: ";
            cin >> amount;

            if (amount > feeBalance) {
                cout << "Amount exceeds balance. Only remaining balance will be cleared." << endl;
                feeBalance = 0;
            } else {
                feeBalance -= amount;
            }
            cout << "Payment processed successfully!" << endl;

        }

        void displayStatus() {
            cout << fixed << setprecision(2);
            cout << "\n----- STUDENT FEE STATUS -----\n";
            cout << "Name             : " << studentName << endl;
            cout << "Admission Number : " << admissionNumber << endl;
            cout << "Remaining Balance : " << feeBalance << endl;

        }

};

int main() {
    Student student;

    student.inputStudentData();
    student.makePayment();
    student.displayStatus();

    return 0;
}