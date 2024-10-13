#include "DynamicQ.h"
int main() {
    int n;
    int a;
    cout << "Enter size of queue: ";
    cin >> n;
    DynamicQ x(n);

    for (int i = 0; i < n; i++) {
        cout << "Insert Value " << i + 1 << ": ";
        cin >> a;
        x.insert(a);
    }

    cout << "Current size: " << x.size() << endl;

    char choice;
    cout << "Do you want to remove elements? (y/n): ";
    cin >> choice;
    while (choice == 'y' || choice == 'Y') {
        int r;
        cout << "How many elements do you want to remove? ";
        cin >> r;

        for (int i = 0; i < r; i++) {
            x.remove();

            cout << "Current size after removals: " << x.size() << endl;
            return 0;
        }
    }
}
