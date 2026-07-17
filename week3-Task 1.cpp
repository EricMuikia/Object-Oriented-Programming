//ERICMUIKIA


#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

const double RATE_PER_HOUR = 200.0;

void getEmployeeDetails(string &name, double &basicSalary, double &overtimeHours) {
    cout << "Enter employee name: ";
    getline(cin, name);

    cout << "Enter basic salary: ";
    cin >> basicSalary;

    cout << "Enter overtime hours: ";
    cin >> overtimeHours;

}

double calculateOvertimePay(double overtimeHours) {
    return overtimeHours * RATE_PER_HOUR;
}

double calculateNetSalary(double basicSalary, double overtimePay) {
    return basicSalary + overtimePay;
}
void displayPayslip(const string &name, double basicSalary, double overtimeHours, double overtimePay, double netSalary) {
    cout << fixed << setprecision(2);
    cout << "\n------ PAYSLIP -----\n";
    cout << "Employee Name     :" << name << endl;
    cout << "Basic Salary      :" << basicSalary << endl;
    cout << "Overtime Hours    :" << overtimeHours << endl;
    cout << "Overtime Pay      :" << overtimePay << endl;
    cout << "Net Salary        :" << netSalary << endl;

}

int main() {
    string name;
    double basicSalary, overtimeHours;
    
    getEmployeeDetails(name, basicSalary, overtimeHours);
    double overtimePay = calculateOvertimePay(overtimeHours);
    double netSalary = calculateNetSalary(basicSalary, overtimePay);
    displayPayslip(name, basicSalary, overtimeHours, overtimePay, netSalary);

    return 0;

}
