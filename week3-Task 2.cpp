//ERICMUIKIA


#include<iostream>
#include <iomanip>
#include<string>
using namespace std;

const double RATE_PER_UNIT = 50.0;

void getCustomerDetails(string &name, double &units) {
    cout << "Enter customer name: ";
    getline(cin, name);

    cout << "Enter number of units consumed: ";
    cin >> units;
}

double calculateBill(double units) {
    return units * RATE_PER_UNIT;
}

double applyDiscount(double units, double bill, double &discount) {
    if (units > 100) {
        discount = bill * 0.10;
    }else {
        discount = 0.0;
    }
    return bill - discount;
}

void displayBill(const string &name, double units, double billBeforeDiscount, double discount, double finalAmount) {
    cout << fixed << setprecision(2);
    cout << "\n----- WATER BILL -----\n";
    cout << "Customer Name          :" << name << endl;
    cout << "Units Consumed         :" << units << endl;
    cout << "Bill Before Discount   :" << billBeforeDiscount << endl;
    cout << "Discount               :" << discount << endl;
    cout << "Final Amunt Payable    :" << finalAmount << endl;

}

int main() {
    string name;
    double units, discount;

    getCustomerDetails(name, units);
    double bill = calculateBill(units);
    double finalAmount = applyDiscount(units, bill, discount);
    displayBill(name, units, bill, discount, finalAmount);


    return 0;
}

