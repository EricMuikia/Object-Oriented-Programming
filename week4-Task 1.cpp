//ERICMUIKIA

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main() {
    const int NUM_EMPLOYEES = 5;
    string names[NUM_EMPLOYEES];
    double basicSalaries[NUM_EMPLOYEES];
    double bonuses[NUM_EMPLOYEES];
    double totalSalaries[NUM_EMPLOYEES];

    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        cout << "\n--- Employee" << (i + 1) << "---\n";
        cout << "Enter employee name: ";
        getline(cin, names[i]);

        cout << "Enter basic salary: ";
        cin >> basicSalaries[i];
        
        bonuses[i] = 0.05 * basicSalaries[i];
        totalSalaries[i] = basicSalaries[i] + bonuses[i];
    }

    cout << fixed << setprecision(2);
    cout << "----- BONUS REPORT -----\n";
    for (int i = 0; i < NUM_EMPLOYEES; i++) {
        cout << "Name: "<< names[i]
             << " | Basic Salary: " << basicSalaries[i]
             << " | Bonus: " << bonuses[i]
             << " | Total Salary: " << totalSalaries[i] << endl;

    }

return 0;
}