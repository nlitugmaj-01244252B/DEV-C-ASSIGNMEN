#include <iostream>
using namespace std;

int main() {
    int n;
    
    cout << "Enter an integer: ";
    cin >> n;
    
    if (n % 2 != 0)
        cout << "Odd number" << endl;
    else
        cout << "Even number" << endl;
        
    return 0;
}
