#include <iostream>
using namespace std;

int main() {
    char str1[100], str2[50];
    int i = 0, j = 0;

    cout << "Enter first string: ";
    cin.getline(str1, 100);

    cout << "Enter second string: ";
    cin.getline(str2, 50);

    // move i to the end of str1
    while (str1[i] != '\0') {
        i++;
    }

    // copy str2 into str1
    while (str2[j] != '\0') {
        str1[i] = str2[j];
        i++;
        j++;
    }

    str1[i] = '\0';  // end of string

    cout << "Concatenated string: " << str1 << endl;

    return 0;
}
