#include <string>
#include "Circle.h"
using namespace std;

class NamedCircle : public Circle{
     string name;
    public:
        NamedCircle(int radius=0,string name="");
        void setRadius(int radius);
        void setName(string name);
        string getName();
};