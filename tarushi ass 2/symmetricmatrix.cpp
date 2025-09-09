#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of symmetric matrix: ";
    cin >> n;

    int size = n*(n+1)/2;
    int sym[size];

    cout << "Enter " << size << " elements of lower triangle (row-wise):\n";
    for (int i = 0; i < size; i++) {
        cin >> sym[i];
    }

    cout << "Matrix form:\n";
    int k = 0;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i >= j) {
                cout << sym[k++] << " ";
            } else {
                // fetch from symmetric part
                int index = j*(j+1)/2 + i;
                cout << sym[index] << " ";
            }
        }
        cout << endl;
    }

    return 0;
}
