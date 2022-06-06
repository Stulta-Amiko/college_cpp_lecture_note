#include "Circle.h"
#include <iostream>
#include <string>

using namespace std;

Circle::Circle(int radius){
    this->radius = radius;
}
int Circle::getRadius(){
    return radius;
}
void Circle::setRadius(int radius){
    this->radius = radius;
}
double Circle::getArea(){
    return radius*radius*3.14;
}