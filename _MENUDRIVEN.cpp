#include <iostream>
using namespace std;

int main() {
    int arr[100], n = 0, choice;

    do {
        cout << "\n---MENU---\n";
        cout << "1. CREATE\n2. DISPLAY\n3. INSERT\n4. DELETE\n5. LINEAR SEARCH\n6. EXIT\n";
        cout << "Enter choice: ";
        cin >> choice;

        if (choice == 1) {
            cout << "Enter size of array: ";
            cin >> n;
            cout << "Enter elements: ";
            for (int i = 0; i < n; i++) cin >> arr[i];
        }
        else if (choice == 2) {
            cout << "Array: ";
            for (int i = 0; i < n; i++) cout << arr[i] << " ";
            cout << endl;
        }
        else if (choice == 3) {
            int pos, val;
            cout << "Enter position and value: ";
            cin >> pos >> val;
            for (int i = n; i > pos; i--) arr[i] = arr[i-1];
            arr[pos] = val;
            n++;
        }
        else if (choice == 4) {
            int pos;
            cout << "Enter position to delete: ";
            cin >> pos;
            for (int i = pos; i < n-1; i++) arr[i] = arr[i+1];
            n--;
        }
        else if (choice == 5) {
            int key, found = -1;
            cout << "Enter value to search: ";
            cin >> key;
            for (int i = 0; i < n; i++) {
                if (arr[i] == key) { found = i; break; }
            }
            if (found != -1) cout << "Found at index " << found << endl;
            else cout << "Not found\n";
        }
    } while (choice != 6);

    return 0;
}
