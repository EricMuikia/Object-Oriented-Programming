//ERICMUIKIA

#include<iostream>
#include<string>
using namespace std;


class Book {
    private:
        string title;
        string author;
        int copiesAvailable;
    
    public:
        void inputDetails() {
            cout << "Enter book title: ";
            getline(cin, title);

            cout<< "Enter author: ";
            getline(cin, author);

            cout << "Enter number of copies available: ";
            cin >> copiesAvailable;
        }

        void borrowBook () {
            if (copiesAvailable > 0) {
                copiesAvailable--;
                cout << "\nBook borrowed successfully!" << endl;
            } else {
                cout << "\nNocopies available to borrow." << endl;
            }
        }
        
        void displayDetails() {
            cout << "\n----- BOOK DETAILS -----\n";
            cout << "Title             :" << title << endl;
            cout << "Author            :" << author << endl;
            cout << "Copies Available  :" << copiesAvailable << endl;
        }
};

int main() {
    Book myBook;

    myBook.inputDetails();
    myBook.borrowBook();
    myBook.displayDetails();

    return 0;
}