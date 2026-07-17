//ERICMUIKIA

#include<iostream>
#include<string>
using namespace std;


int main() {
    const string CORRECT_USERNAME = "admin";
    const string CORRECT_PASSWORD = "pass123";

    string username, password;
    
    do {
        cout << "Enter username: ";
        cin >> username;

        cout<< "Enter password: ";
        cin >> password;
        
        if ( username == CORRECT_USERNAME && password == CORRECT_PASSWORD) {
            cout << "Access Granted" << endl;
            break;
        }else {
            cout << "Incorrect credentials, try again" << endl;
        }
    } while (true);



    return 0;
}