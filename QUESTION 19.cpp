#include <iostream>
#include <string>
#include <cmath>
#include <iomanip>
using namespace std;

int binToDec(string bin) {
    int dec = 0;
    for (int i = 0; i < bin.length(); i++) {
        if (bin[bin.length() - 1 - i] == '1')
            dec += pow(2, i);
    }
    return dec;
}

int main() {
    string bin;
    cout << "Enter binary number: ";
    cin >> bin;
    
    int dec = binToDec(bin);
    cout << "Decimal: " << dec << endl;
    cout << "Hexadecimal: " << hex << dec << endl;
    cout << "Octal: " << oct << dec << endl;
    return 0;
}
