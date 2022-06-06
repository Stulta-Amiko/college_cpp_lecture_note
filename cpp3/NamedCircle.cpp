#include "NamedCircle.h"
#include <iostream>
#include <string>

using namespace std;

NamedCircle::NamedCircle(int radius,string name):Circle(radius){
    this->name = name;
}
void NamedCircle::setRadius(int radius){
    Circle::setRadius(radius);
}
void NamedCircle::setName(string name){
    this->name = name;
}
string NamedCircle::getName(){
    return name;
}