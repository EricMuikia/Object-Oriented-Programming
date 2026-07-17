//ERICMUIKIA


#include<iostream>
#include<iomanip>
using namespace std;

int main() {
    double balance, withdrawalAmount;

    cout << "Enter your account balance: ";
    cin >> balance;

    cout << fixed << setprecision(2);

    while (balance > 0) {
        cout << "\nCurrent balance: " <<  balance << endl;
        cout << "Enter withdrawal amount (or a number greater than balance to stop): ";
        cin >> withdrawalAmount;

        if (withdrawalAmount > balance) {
            cout << "Withdarawal amount exceeds balance. Transaction stopped: " << endl;
            break;
        }
    balance -= withdrawalAmount;
    cout << "Withdrawal successful. Remaining balance: " << balance << endl;

    if (balance == 0) {
        cout << "Blance is now Zero. No further withdrawals possible." << endl;
    }
    }

    cout << "\nSession ended. Final balance: "<< balance << endl;

    return 0;
}
