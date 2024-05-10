#include <iostream>
#include "RECTANGLE.h"
using namespace std;
Rectangle::Rectangle()length(0.0)widith(0.0);
void Rectangle::setlength(float l) {
    length = l;
}
void Rectangle::setwidith(float w) {
    widith = w;
} 
float Rectangle::getwidith() return widith;
float Rectangle::getlength() return lenght;
float Rectangle::CalculateTheArea()
return length*widith;