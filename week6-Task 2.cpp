//ERICMUIKIA


#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Student {
    private:
        string name;
        string admissionNumber;
        double feeBalance;

    public:
        void inputStudent() {
            cout << "Enter student name: ";
            getline(cin, name);

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
                cout << "Payment exceeds fee balance. Only balance amount will be cleared." << endl;
                feeBalance = 0;
            } else {
                feeBalance -= amount;
            }
            cout << "Payment processed successfully!" << endl;
        }

        void displayStatus(){
            cout << fixed << setprecision(2);
            cout << "\n----- STUDENT FEE STATUS -----\n";
            cout << "Name             :" << name << endl;
            cout << "Admission Number :" << admissionNumber << endl;
            cout << "Remaining Balance:" << feeBalance << endl;

        }

};

int main() {
    Student student;

    student.inputStudent();
    student.makePayment();
    student.displayStatus();
    

    return 0;
}
