#include<iostream>
#include<string>
using namespace std;

class Vehicle {
    protected:
        string brand;
        int yearOfManufacture;

    public:
        void inputVehicle() {
            cout << "Enter brand: ";
            getline(cin, brand);

            cout << "Enter year of manufacture: ";
            cin >> yearOfManufacture;
        }
        
        void displayVehicle() {
            cout << "Brand                 :" << brand << endl;
            cout << "YEar of Manufacture   :" << yearOfManufacture << endl;

        }
};

class Car : public Vehicle {
    private:
        int numberOfDoors;
        double engineCapacity;

    public:
        void inputCar() {
            inputVehicle();

            cout << "Enter number of doors: ";
            cin >> numberOfDoors;

            cout << "Enter engine capacity (litres): ";
            cin >> engineCapacity;
        }

        void displayCar() {
            cout << "\n----- CAR DETAILS -----\n";
            displayVehicle();
            cout << "Number of Doors     :" << numberOfDoors << endl;
            cout << "Engine Cpacity      :" << engineCapacity << " L" << endl;
        }
};

int main() {
    Car car;

    car.inputCar();
    car.displayCar();

    return 0;
}