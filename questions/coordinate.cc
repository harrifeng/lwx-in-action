#include <iostream>

class Point {
public:
    int x;
    int y;
};

int main(int argc, char *argv[])
{
    Point p;
    p.x = 1;
    p.y = 2;

    std::cout << p.x << std::endl;
    std::cout << p.y << std::endl;
    return 0;
}
