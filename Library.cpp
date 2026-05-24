#include <iostream>

using namespace std;

int main() {
    int bookID;
    int dueDate;
    int returnDate;
    int daysOverdue;
    int fineRate;
    int fineAmount;

    cout << "Enter Book ID: ";
    cin >> bookID;

    cout << "Enter Due Date (integer): ";
    cin >> dueDate;

    cout << "Enter Return Date (integer): ";
    cin >> returnDate;
    
    daysOverdue = returnDate - dueDate;

    if (daysOverdue <= 7 && daysOverdue > 0) {
        fineRate = 20;
    }
    else if (daysOverdue >= 8 && daysOverdue <= 14) {
        fineRate = 50;
    }
    else if (daysOverdue >= 15) {
        fineRate = 100;
    }
    else {
        fineRate = 0;
    }
    
    fineAmount = daysOverdue * fineRate;
    
    if (fineAmount < 0) {
        fineAmount = 0;
    }
    
    cout << "\n===== Library Fine Details =====" << endl;
    cout << "Book ID: " << bookID << endl;
    cout << "Due Date: " << dueDate << endl;
    cout << "Return Date: " << returnDate << endl;
    cout << "Days Overdue: " << daysOverdue << endl;
    cout << "Fine Rate per Day: Ksh. " << fineRate << endl;
    cout << "Fine Amount: Ksh. " << fineAmount << endl;

    return 0;
}