//ERICMUIKIA

#include<iostream>
#include<iomanip>
#include<string>
using namespace std;

int main () {
    
    string customerName, phoneModel;
    int quantity;
    double pricePerPhone;

    cout <<"Enter customer name: ";
    getline(cin, customerName);

    cout << "Enter phone model purchased: ";
    getline(cin, phoneModel);
    
    cout << "Enter quantiy bought: ";
    cin >> quantity;

    cout << "Enter price per phone: ";
    cin >> pricePerPhone;

    double totalSalesAmount = quantity * pricePerPhone;

    cout <<fixed << setprecision(2);
    cout << "\n----- SALES REPORT -----\n";
    cout << "Customer Name  :" << customerName << endl;
    cout << "Phone Model    :" << phoneModel << endl;
    cout << "Quantity Bought  :" << quantity << endl;
    cout << "Price Per Phone   :" << pricePerPhone << endl;
    cout << "Total Sales       :" << totalSalesAmount << endl;
    cout << "---------------------------------------------\n";



    return 0;
}