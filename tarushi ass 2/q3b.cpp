#include <iostream>
using namespace std;

int findMissingBinary(int arr[], int n) {
    int start = 0, end = n - 2; // array size = n-1
    while (start <= end) {
        int mid = (start + end) / 2;
        if (arr[mid] == mid + 1) {
            start = mid + 1;  // missing number is in right half
        } else {
            end = mid - 1;    // missing number is in left half
        }
    }
    return start + 1;  
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

    int missing = findMissingBinary(arr, n);
    cout << "Missing number is: " << missing << endl;

    return 0;
}
