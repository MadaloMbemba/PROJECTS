#include <iostream>
using namespace std;
int main() {
    int selection;
    double width, height, length, side, area, base;
    cout << "please select the area of shape to calculate"<< endl;
    cout << "1. rectangle" << endl;
    cout << "2. square" << endl;
    cout << "3. triangle" << endl;
    cout << "4. Quit program" << endl;
    cout << "enter your selection:" << endl;
    cin >> selection;

    if (selection == 1) {
        cout <<"enter the length and widith of a rectangle "<<endl;
        cin >> width >> length;
        area = width * length;
        cout <<"the area of a rectangle is:" << area << endl;
    } else if(selection == 2) {
        cout << "enter the sides of a sqaure"<<endl;
        cin >> side;
        area = side * side;
        cout <<"the area of a square is:" << area << endl;
    } else if(selection == 3) {
        cout << "enter the base and heigth"<<endl;
        cin >> base >>  height;
        area = 0.5 * base * height;
        cout << "the area is of a triangle is:" << area << endl;
    } else {
        cout <<"wrong input";

    }
    return 0;
 }

    