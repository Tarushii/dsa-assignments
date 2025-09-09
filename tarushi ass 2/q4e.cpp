#include <iostream>
using namespace std;

int main() {
    char ch;
    cout << "Enter an uppercase character: ";
    cin >> ch;

    if (ch >= 'A' && ch <= 'Z') {
        // add 32 in ASCII to convert
        ch = ch + 32;
        cout << "Lowercase character: " << ch << endl;
    } else {
        cout << "Not an uppercase character!" << endl;
    }

    return 0;
}
