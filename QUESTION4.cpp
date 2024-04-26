#include <iostream>
using namespace std;
int main() {
    int x;
    while(true) {
        cout << "Enter an integer between 5 and 10"<< endl;
        cin >>x;
        if (x >= 5 && x <= 10) {
            cout <<"your input value has been accepted"<< endl;
        } else{
            cout <<"you entered " << x <<"please enter a number between 5 and 10" <<endl;

        }
        return 0;
        }
    }
