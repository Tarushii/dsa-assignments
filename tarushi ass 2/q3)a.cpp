#include <iostream>
using namespace std;

int findMissingLinear(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        if (arr[i] != i + 1) {
            return i + 1;  // missing number found
        }
    }
    return n;  // if no missing number found in loop, then last number is missing
}

int main() {
    int n;
    cout << "Enter the value of n: ";
    cin >> n;

    int arr[n - 1];
    cout << "Enter " << n - 1 << " sorted numbers from 1 to " << n << " with one missing:\n";
    for (int i = 0; i < n - 1; i++) {
        cin >> arr[i];
    }

    int missing = findMissingLinear(arr, n);
    cout << "Missing number is: " << missing << endl;

    return 0;
}
