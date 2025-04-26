#include <iostream>
#include <limits>
using namespace std;

int fbc(int n) {
    if (n <= 2)
        return 1;
    return fbc(n - 1) + fbc(n - 2);
}

int main() {
    int n;

    while (true) {
        cout << "Nhap n(1-30)): ";
        cin >> n;

        if (n <= 0 || n > 30) {
            cout << "nhap khong dung dieu kien, nhap lai\n";
        } else {
            break;
        }
    }

    cout << "day fibnacci tu F1 den F" << n << " la:\n";
    for (int i = 1; i <= n; ++i) {
        cout << fbc(i) << " ";.
    }
    cout << endl;

    return 0;
}

