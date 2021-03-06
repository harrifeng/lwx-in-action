#include <iostream>
using namespace std;

class Point {
// data part should be private, use public to be able to output
public:
    double x;
    double y;
public:
    // default constructor
    Point():x(0.0), y(2.0){};
    // constructor with parameter
    Point(double dx, double dy):x(dx), y(dy){};
    // copy constructor
    Point(const Point& other) {
        if (&other != this) {
            x = other.x;
            y = other.y;
        }
    }
};

class Line{
// data part should be private, use public to be able to output
public:
    Point a;
    Point b;
public:
    Line():a(Point()), b(Point()){};
    Line(Point pa, Point pb): a(pa), b(pb){}
    Line(const Line& other) {
        if (&other != this) {
            a = Point(other.a);
            b = Point(other.b);
        }
    }
};
class Triangle {
// data part should be private, use public to be able to output
public:
    Line l1;
    Line l2;
    Line l3;
public:
    Triangle(Line la, Line lb, Line lc): l1(la), l2(lb), l3(lc) {}
    Triangle(const Triangle& other) {
        if (&other != this) {
            l1 = Line(other.l1);
            l2 = Line(other.l2);
            l3 = Line(other.l3);
        }
    }
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
    Point pa(30, 0);
    Point pb(1, 2);
    Point pc(5, 2);

    Line la(pa, pb);
    Line lb(pb, pc);
    Line lc(pc, pa);

    Triangle t(la, lb, lc);
    Triangle t2(t);
    cout << t2.l1.a.x << endl;
    return 0;
}

////////////////////////////////////////////////////
// <===================OUTPUT===================> //
// c:\code\lwx-in-action\cpp\execise>a.exe        //
// a.exe                                          //
// 30                                             //
////////////////////////////////////////////////////
