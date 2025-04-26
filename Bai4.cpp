#include <iostream>
#include <set>
#include <limits>
using namespace std;

int main() {
    int n;

    while (true) {
        cout << "Nhap n: ";
        cin >> n;

        if (n <= 0) {
            cout << "nhap so nguyen duong\n";
        } else {
            break;
        }
    }

    set<int> tapPhanBiet;
    cout << "Nhap " << n << " so nguyen:\n";

    for (int i = 0; i < n; ++i) {
        int x;
        while (true) {
            cout << "arr[" << i << "] = ";
            cin >> x;
			break;
            
        }
        tapPhanBiet.insert(x);
    }

    cout << "So gia tri phan biet trong mang: " << tapPhanBiet.size() << endl;

    return 0;
}

