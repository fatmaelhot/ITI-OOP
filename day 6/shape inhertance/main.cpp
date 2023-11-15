#include <iostream>
#include <graphics.h>

using namespace std;

class Shape {
protected:
    double point1;
    double point2;

public:
    virtual void draw() {
        cout << "Drawing a shape" << endl;
    }

    friend istream& operator>>(istream& in, Shape& s) {
        cout << "Enter point1: ";
        in >> s.point1;
        cout << "Enter point2: ";
        in >> s.point2;
        return in;
    }

    friend ostream& operator<<(ostream& out, const Shape& s) {
        out << "Point1: " << s.point1 << ", Point2: " << s.point2;
        return out;
    }
};

class Line : public Shape {
public:
    void draw() override {
        setcolor(14);
        line(static_cast<int>(point1), static_cast<int>(point2), static_cast<int>(point1) + 50, static_cast<int>(point2));
    }
};

class Circle : public Shape {
    double radius;

public:
    void setRadius(double r) {
        radius = r;
    }

    double getRadius() const {
        return radius;
    }

    void draw() override {
        setcolor(14);
        circle(static_cast<int>(point1), static_cast<int>(point2), static_cast<int>(radius));
    }
};

class Rectangle1 : public Shape {
public:
    void draw() override {
        setcolor(14);
        rectangle(static_cast<int>(point1), static_cast<int>(point2),
                  static_cast<int>(point1) + 50, static_cast<int>(point2) + 30);
    }
};

int main() {
    int gd, gm = DETECT;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    char choice;
    Shape* shape;

    do {
        cout << "Enter 'L' for Line, 'C' for Circle, 'R' for Rectangle, or 'Q' to quit: ";
        cin >> choice;

        switch (choice) {
            case 'L':
                shape = new Line;
                break;
            case 'C':
                shape = new Circle;
                double radius;
                cout << "Enter radius for the circle: ";
                cin >> radius;
                static_cast<Circle*>(shape)->setRadius(radius);
                break;
            case 'R':
                shape = new Rectangle1;
                break;
           // case 'Q':
              //  break; // Quit the loop
            default:
                cerr << "Invalid choice" << endl;
                continue; // Ask for input again
        }

        cout << "Enter information for the shape:" << endl;
        cin >> *shape;

        cout << endl << "Drawing shape:" << endl;
        shape->draw();

        delete shape;
    } while (choice != 'Q');

    // Close the graphics window at the end of the program
    delay(5000); // Delay to keep the window open for 5 seconds (adjust as needed)
    closegraph();

    return 0;
}
