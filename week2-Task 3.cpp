//ERICMUIKIA


#include<iostream>
using namespace std;

int main() {
    double num1, num2, result;
    char op;

    cout << "Enter first number: ";
    cin >> num1;
    
    cout << "Enter operator (+, -, *, /): ";
    cin >> op;

    cout << "Entersecond number: ";
    cin >> num2;

    bool validOperation = true;
    
    switch (op) {
        case '+':
            result = num1 + num2;
            break;
        case '-':
            result = num1 - num2;
            break;
        case '*':
            result = num1 * num2;
            break;
        case '/':
            if (num2 == 0){
                cout << "Error: Divicion by zero is not allowed." <<endl;
                validOperation = false;

            } else {
                result = num1 / num2;
            }            
            break;
        default:
              cout << "Error: Inalid Operator." << endl;
              validOperation = false;
    }

    if (validOperation) {
        cout << "\n Result: " << num1 << " " << op << " " << num2 << " = " << result << endl;
    }


return 0;
}
