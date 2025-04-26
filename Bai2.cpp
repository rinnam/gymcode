#include <iostream>
#include <limits>
using namespace std;

int main() {
    int n;

    while (true) {
        cout << "Nhap n: ";
        cin >> n;
        if (n <= 0) {
            cout << "n la so nguyen duong, nhap lai\n";
        } else {
            break;
        }
    }

    int arr[n];
    cout << "Nhap cac so nguyen:" ;


    for (int i = 0; i < n; ++i) {
        while (true) {
            cout << "so thu "  << i << ": ";
            cin >> arr[i];

                break;
        }
    }

    int maxDiv3 ;
    bool found = false;

    for (int i = 0; i < n; ++i) {
        if (arr[i] % 3 == 0) {
            if (!found || arr[i] > maxDiv3) {
                maxDiv3 = arr[i];
                found = true;
            }
        }
    }

    if (found) {
        cout << "So lon nhat chia het cho 3: " << maxDiv3 << endl;
    } else {
        cout << "Khong co" << endl;
    }

    return 0;
}

