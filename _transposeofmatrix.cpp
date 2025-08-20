#include <iostream>
using namespace std;

int main() {
    int a[10][10], n, m;
    cout << "Enter rows and columns: ";
    cin >> n >> m;

    cout << "Enter matrix: \n";
    for (int i = 0; i < n; i++)
        for (int j = 0; j < m; j++)
            cin >> a[i][j];

    cout << "Transpose:\n";
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++)
            cout << a[j][i] << " ";
        cout << endl;
    }

    return 0;
}
