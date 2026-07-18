#include<iostream>
#include<iomanip>
using namespace std;

class Payment {
    public:
        void processPayment(double amount) {
            cout << fixed << setprecision(2);
            cout << "Cash Payment - Final Amount: " << amount << endl;
        }

        void processPayment(double amount, double transactionFee) {
             double finalAmount = amount + transactionFee;
            cout << fixed << setprecision(2);
            cout << "Card Payment - Final Amount: " << finalAmount << endl;
    } 

    void processPayment(double amount, double transactionFee, double discount) {
        double finalAmount = amount + transactionFee - discount;
        cout << fixed << setprecision(2);
        cout << "Mobile Payment - Final Amount: " << finalAmount <<endl;
        
    }
};

int main() {
    Payment payment;

    cout << "--- Cash Payment ---\n";
    payment.processPayment(1000.0);

    cout << "\n--- Card Payment ---\n";
    payment.processPayment(1000.0, 25.0);

    cout << "\n--- Mobile Payment ---\n";
    payment.processPayment(1000.0, 15.0, 50.0);
    
    return 0;
}