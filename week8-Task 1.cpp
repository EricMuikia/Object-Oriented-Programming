//ERICMUIKIA


#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

class BankAccount {
    private:
        string accountHolderName;
        string accountNumber;
        double accountBalance;
    
    public:
        BankAccount(string name, string number, double balance) {
            accountHolderName = name;
            accountNumber = number;
            accountBalance = balance;
            cout << "Account successfully created" << endl;
        }
    
    void displayAccount() {
        cout  << fixed << setprecision(2);
        cout << "\n------ ACCOUNT DETAILS -----";
        cout << "Account Holder    :" << accountHolderName << endl;
        cout << "Account Number    :" << accountNumber << endl;
        cout << "Account Balance   :" << accountBalance << endl;
    }

    ~BankAccount() {
        cout << "Account closed successfully" << endl;
    }
};

int main() {
    string name, number;
    double balance;

    cout << "Enter account holder name: ";
    getline(cin, name);

    cout << " Enter account number: ";
    getline(cin, number);

    cout << "Enter initial balance: ";
    cin >> balance;

    BankAccount account(name, number, balance);
    account.displayAccount();
    
    return 0;
}