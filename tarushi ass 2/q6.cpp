#include <iostream>
using namespace std;

struct Element {
    int row, col, val;
};

int main() {
    int n1, n2;
    cout << "Enter number of non-zero elements in Matrix A: ";
    cin >> n1;
    Element A[20];
    cout << "Enter row, col, value for Matrix A:\n";
    for (int i = 0; i < n1; i++)
        cin >> A[i].row >> A[i].col >> A[i].val;

    cout << "Enter number of non-zero elements in Matrix B: ";
    cin >> n2;
    Element B[20];
    cout << "Enter row, col, value for Matrix B:\n";
    for (int i = 0; i < n2; i++)
        cin >> B[i].row >> B[i].col >> B[i].val;

    Element C[100];
    int k = 0;

    // Multiply
    for (int i = 0; i < n1; i++) {
        for (int j = 0; j < n2; j++) {
            if (A[i].col == B[j].row) {
                int r = A[i].row;
                int c = B[j].col;
                int val = A[i].val * B[j].val;

                // check if (r,c) already exists in C
                int found = -1;
                for (int x = 0; x < k; x++) {
                    if (C[x].row == r && C[x].col == c) {
                        found = x;
                        break;
                    }
                }
                if (found != -1) {
                    C[found].val += val; // add to existing value
                } else {
                    C[k].row = r;
                    C[k].col = c;
                    C[k].val = val;
                    k++;
                }
            }
        }
    }

    cout << "Result of multiplication (triplet form):\n";
    for (int i = 0; i < k; i++) {
        cout << C[i].row << " " << C[i].col << " " << C[i].val << endl;
    }

    return 0;
}
