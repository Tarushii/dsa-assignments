#include <iostream>
using namespace std;

struct Element {
    int row, col, val;
};

int main() {
    int n1, n2;
    cout << "Enter number of non-zero elements in Matrix 1: ";
    cin >> n1;
    Element A[20];
    cout << "Enter row, col, value for Matrix 1:\n";
    for (int i = 0; i < n1; i++)
        cin >> A[i].row >> A[i].col >> A[i].val;

    cout << "Enter number of non-zero elements in Matrix 2: ";
    cin >> n2;
    Element B[20];
    cout << "Enter row, col, value for Matrix 2:\n";
    for (int i = 0; i < n2; i++)
        cin >> B[i].row >> B[i].col >> B[i].val;

    Element C[40];
    int i = 0, j = 0, k = 0;

    // assume both lists are sorted by row, then column
    while (i < n1 && j < n2) {
        if (A[i].row == B[j].row && A[i].col == B[j].col) {
            C[k].row = A[i].row;
            C[k].col = A[i].col;
            C[k].val = A[i].val + B[j].val;
            i++; j++; k++;
        } else if (A[i].row < B[j].row || 
                  (A[i].row == B[j].row && A[i].col < B[j].col)) {
            C[k++] = A[i++];
        } else {
            C[k++] = B[j++];
        }
    }

    while (i < n1) C[k++] = A[i++];
    while (j < n2) C[k++] = B[j++];

    cout << "Result of addition (triplet form):\n";
    for (int p = 0; p < k; p++) {
        cout << C[p].row << " " << C[p].col << " " << C[p].val << endl;
    }

    return 0;
}
