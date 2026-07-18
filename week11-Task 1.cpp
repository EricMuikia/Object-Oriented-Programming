#include<iostream>
#include<string>
#include<iomanip>
using namespace std;

class Employee {
    private:
        string employeeName;
        string employeeID;
        double basicSalary;

    public:
        void setEmployeeDetails() {
            cout << "Enter employee name: ";
            getline(cin, employeeName);

            cout << "Enter employee ID: ";
            getline(cin, employeeID);

            cout << "Enter basic salary: ";
            cin >> basicSalary;
        }

        double calculateSalary() {
            return basicSalary + (0.01 * basicSalary);
        }

        void displayEmployeeDetails() {
            double netSalary = calculateSalary();
            cout << fixed << setprecision(2);
            cout << "\n===== EMPLOYEE DETAILS =====\n";
            cout << "Name          : " << employeeName << endl;
            cout << "Employee ID   : " << employeeID << endl;
            cout << "Basic Salary  : " << basicSalary << endl;
            cout <<"Net Salary     : " << netSalary << endl;
        }
    
};

int main() {
    Employee employee;

    employee.setEmployeeDetails();
    employee.displayEmployeeDetails();
   

    
    return 0;
}