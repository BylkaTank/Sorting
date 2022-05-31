#include <iostream>
using namespace std;

int main() {
    float a[15];
    for (int i = 0; i < 15; i++) {
        cout << "Enter an array element under the number " << i + 1 << "\n";
        cin >> a[i];
    }

    for (int i = 0; i < 15; i++) {
        for (int j = 0; j < 14; j++) {
            if (a[j] < a[j + 1]) swap(a[j], a[j+ 1]);
        }
    }

    for (int i = 0; i < 15; i++) {
        cout << a[i] << "\n";
    }
}
