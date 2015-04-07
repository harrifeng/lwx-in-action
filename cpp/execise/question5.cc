#include <iostream>
using namespace std;

class Point {
private:
    double x;
    double y;
public:
    Point():x(0.0), y(2.0){};
    Point(double dx, double dy):x(dx), y(dy){};
    Point(const Point& other) {
        x = other.x;
        y = other.y;
    }
};

class Line{
private:
    Point a;
    Point b;
public:
    Line(Point pa, Point pb): a(pa), b(pb){}
    Line(const Line& other) {
        a = Point(other.a);
        b = Point(other.b);
    }
};
class Triangle {
private:
    Line l1;
    Line l2;
    Line l3;
public:
    Triangle(Line la, Line lb, Line lc): l1(la), l2(lb), l3(lc) {}
    // Triangle(const Triangle& other) {
    //     l1 = Line(other.l1);
    //     l2 = Line(other.l2);
    //     l3 = Line(other.l3);
    // }
    bool isTriangle();
    double triangleSize();
    void display();
};

bool Triangle::isTriangle() {
    // Write code to determine whether the lines can create one triangle
    return false;
}

double Triangle::triangleSize() {
    ///////////////////////////////
    // the use of this pointer!! //
    ///////////////////////////////
    if (!this->isTriangle()) {
        return -1;
    }
}
void Triangle::display() {
    double size = this->triangleSize();
    std::cout << "Ths size is " << size << std::endl;
}

int main(int argc, char *argv[])
{
    Point pa(0, 0);
    Point pb(1, 2);
    Point pc(5, 2);

    Line la(pa, pb);
    Line lb(pb, pc);
    Line lc(pc, pa);

    Triangle t(la, lb, lc);
    return 0;
}
