#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter size of tri-diagonal matrix: ";
    cin >> n;

    int size = 3*n - 2;
    int tri[size];

    cout << "Enter " << size << " non-zero elements:\n";
    for (int i = 0; i < size; i++) {
        cin >> tri[i];
    }

    cout << "Matrix form:\n";
    int k = 0, l = n, m = 2*n - 1;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (i == j) cout << tri[i] << " ";             // main diag
            else if (i == j+1) cout << tri[l++] << " ";    // below diag
            else if (j == i+1) cout << tri[m++] << " ";    // above diag
            else cout << "0 ";
        }
        cout << endl;
    }

    return 0;
}
