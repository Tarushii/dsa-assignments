#include <iostream>
using namespace std;

int main() {
    int a[10][10], b[10][10], c[10][10];
    int n;
    cout << "Enter size of square matrix: ";
    cin >> n;

    cout << "Enter matrix A: \n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> a[i][j];

    cout << "Enter matrix B: \n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < n; j++)
            cin >> b[i][j];

    // multiplication
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c[i][j] = 0;
            for (int k = 0; k < n; k++) {
                c[i][j] += a[i][k] * b[k][j];
            }
        }
    }

    cout << "Result matrix:\n";
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++)
            cout << c[i][j] << " ";
        cout << endl;
    }

    return 0;
}
