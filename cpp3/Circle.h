#ifndef CIRCLE
#define CIRCLE
#include <string>
using namespace std;

class Circle{
    int radius;
    public:
        Circle(int radius = 0);
        int getRadius();
        void setRadius(int radius);
        double getArea();
};

#endif