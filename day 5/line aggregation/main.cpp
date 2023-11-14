#include <iostream>
#include <graphics.h>
//aggregation
class Point {
public:
    Point(int x, int y) : x_(x), y_(y) {}

    int getX() const {
        return x_;
    }

    int getY() const {
        return y_;
    }

private:
    int x_;
    int y_;
};

class Line {
public:
    Line(const Point& start, const Point& end) : start_(start), end_(end) {}

    void draw() const {
        line(start_.getX(), start_.getY(), end_.getX(), end_.getY());
    }

private:
    Point start_;
    Point end_;
};

int main() {
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "C:\\Turboc3\\BGI");

    Point startPoint(100, 100);
    Point endPoint(500, 400);

    Line myLine(startPoint, endPoint);

    myLine.draw();

    delay(5000); // Pause for 5000 milliseconds (5 seconds)

    closegraph();

    return 0;
}
