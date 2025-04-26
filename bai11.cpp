#include <iostream>
#include <cmath>
using namespace std;

bool snt(int n) {
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}

int main() {
    int N;
    cout << "Nhap so nguyen duong N: ";
    cin >> N;

    if (N <= 2) {
        cout << "Khong co so nguyen to" << endl;
    } else {
        cout << "Cac so nguyen to nho hon " << N << " la: ";
        for (int i = 2; i < N; ++i) {
            if (snt(i)) {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

