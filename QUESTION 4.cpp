#include <iostream>
#include <string>
using namespace std;

int main() {
    string s;
    
    cout << "Enter a string: ";
    cin >> s;
    
    if (s == "hello")
        cout << "Hello!" << endl;
    else
        cout << "Goodbye!" << endl;
        
    return 0;
}
