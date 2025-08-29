#include <iostream>
using namespace std;


class Shape {
public:
    virtual void area() = 0;
    virtual void print() = 0;
};


class Circle : public Shape {
private:
    int r;
public:
  
    Circle(int radius) : r(radius) {}

  
    void area() override {
        double circleArea = 3.14 * r * r;
       cout << "Area of the Circle is: " << circleArea <<endl;
    }

    void print() override {
        cout << "This is a Circle with radius " << r <<endl;
    }
};


class Rectangle : public Shape {
private:
    int length;
    int width;
public:
    
    Rectangle(int l, int w) : length(l), width(w) {}

    void area() override {
        int rectArea = length * width;
       cout << "Area of the Rectangle is: " << rectArea <<endl;
    }

   
    void print() override {
        cout << "This is a Rectangle with length " << length << " and width " << width <<endl;
    }
};

int main() {
   
    Circle myCircle(5);
    Rectangle myRectangle(4, 6);

 
    Shape* s1 = &myCircle;
    Shape* s2 = &myRectangle;


    s1->print();
    s1->area();

    cout << "--------------------" <<endl;

    s2->print();
    s2->area();

    return 0;
}