#include<iostream>
using namespace std;

class Shape {
    public:
        virtual void draw() {
            cout << "Drawing generic Shape" << endl;
        }
        virtual ~Shape() {}
};

class Circle : public Shape {
    public:
        void draw() override {
            cout << "Drawing Circle" << endl;
        }
};

class Rectangle : public Shape {
    public:void draw() override {
        cout << "Drawing Rectangle" << endl;
    }
};

class Triangle : public Shape {
    public:
        void draw() {
            cout << "Drawing Triangle" << endl;
        }
};

int main() {
    Shape* shapePtr;

    Circle circle;
    Rectangle rectangle;
    Triangle triangle;

    shapePtr = &circle;
    shapePtr->draw();

    shapePtr = &rectangle;
    shapePtr->draw();

    shapePtr = &triangle;
    shapePtr->draw();

    return 0;
}