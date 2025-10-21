#include <iostream>
using namespace std;

int main() {
    int a[10][10], n, m;
    cout << "Enter rows and cols: ";
    cin >> n >> m;

    cout << "Enter matrix:\n";
    for (int i=0;i<n;i++)
        for (int j=0;j<m;j++)
            cin >> a[i][j];

    // Row sum
    for (int i=0;i<n;i++) {
        int sum = 0;
        for (int j=0;j<m;j++) sum += a[i][j];
        cout << "Sum of row " << i << " = " << sum << endl;
    }

    // Column sum
    for (int j=0;j<m;j++) {
        int sum = 0;
        for (int i=0;i<n;i++) sum += a[i][j];
        cout << "Sum of col " << j << " = " << sum << endl;
    }
}
