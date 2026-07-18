#include<iostream>
#include<string>
using namespace std;

class RoomBooking {
    private:
        string guestName;
        int roomNumber;
        int daysBooked;

    public:
        RoomBooking(string name, int room, int days) {
            guestName = name;
            roomNumber = room;
            daysBooked =  days;
            cout << "Room booking confirmed" << endl;
        }

    void displayBooking() {
        cout << "\n----BOOKING DETAILS -----\n";
        cout << "Guest Name     :" << guestName << endl;
        cout << "Room Number    :" << roomNumber << endl;
        cout << "Days Booked    :" << daysBooked << endl;

    }

    ~RoomBooking() {
        cout << "Booking ended, room released" << endl;
    }
        
};

int main() {
    string name;
    int room, days;

    cout << "Enter guest name: ";
    getline(cin, name);

    cout << "Enter room number: ";
    cin >> room;

    cout << "Enter number of days booked: ";
    cin >> days;

    RoomBooking booking(name, room, days);
    booking.displayBooking();

    return 0;
}