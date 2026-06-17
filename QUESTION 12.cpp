#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter a number: ";
    cin >> n;
    
    if (n % 2 != 0 && n % 3 == 0)
        cout << "Number is both odd and divisible by 3" << endl;
    else
        cout << "Condition not met" << endl;
    return 0;
}
