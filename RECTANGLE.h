#include <iostream>
using namespace std;
class Rectangle {
    private :
    float length;
    float widith;

    public :
    Rectangle ();
    ~Rectangle ();
    void setlenght(float l);
    void setwidith(float w);
    float getlength();
    float getwidith();
    float CalculateTheArea();
};