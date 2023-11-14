#include <iostream>
#include <cmath>
#include <graphics.h>

using namespace std;

class Point {
public:
    Point(double x, double y) : x_(x), y_(y) {}

    double getX() const {
        return x_;
    }

    double getY() const {
        return y_;
    }

private:
    double x_;
    double y_;
};

class Circle {
public:
    Circle(const Point& center, double radius) : center_(center), radius_(radius) {}

    double getRadius() const {
        return radius_;
    }

    const Point& getCenter() const {
        return center_;
    }

    void draw() const {
        int gd = DETECT, gm;
        initgraph(&gd, &gm, "C:\\Turboc3\\BGI"); // Change the path accordingly

        int centerX = static_cast<int>(center_.getX());
        int centerY = static_cast<int>(center_.getY());
        int radius = static_cast<int>(radius_);

        circle(centerX, centerY, radius);

        delay(5000); // Pause for 5000 milliseconds (5 seconds)

        closegraph();
    }

private:
    Point center_;
    double radius_;
};

int main() {
    Point center(20.0, 20.0);
    double radius = 10.0;

    Circle circle(center, radius);
    circle.draw();

    return 0;
}
