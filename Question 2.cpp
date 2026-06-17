#include <iostream>
#include <cmath>   // needed for M_PI and pow()
using namespace std;

int main() {
    double r;
    
    cout << "Enter radius: ";
    cin >> r;
    
    double area = M_PI * pow(r, 2);  // pi * r^2
    
    cout << "Area of circle: " << area << endl;
    
    return 0;
}
