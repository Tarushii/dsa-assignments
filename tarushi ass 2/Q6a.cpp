#include <iostream>
using namespace std;

struct Element {
    int row, col, val;
};

int main() {
    int n;
    cout << "Enter number of non-zero elements: ";
    cin >> n;

    Element mat[20], trans[20];

    cout << "Enter row, col and value for each non-zero element:\n";
    for (int i = 0; i < n; i++) {
        cin >> mat[i].row >> mat[i].col >> mat[i].val;
    }

    // transpose: just swap row and col
    for (int i = 0; i < n; i++) {
        trans[i].row = mat[i].col;
        trans[i].col = mat[i].row;
        trans[i].val = mat[i].val;
    }

    cout << "Transpose in triplet form:\n";
    for (int i = 0; i < n; i++) {
        cout << trans[i].row << " " << trans[i].col << " " << trans[i].val << endl;
    }

    return 0;
}
