#include <iostream>
#include <cmath>
using namespace std;
int main() {
    int n;
    cin >> n;

    if (n <= 2) {
        cout << "Ko co so nguyen to" << endl;
    } else {
        cout << "cac so nguyen to nho hon " << n;
        for (int i = 2; i < n; ++i) {
            if (snt(i)) {
                cout << i << " ";
            }
        }
        cout << endl;
    }

    return 0;
}

bool snt(int n){
	if (n<=2){
		return false;
	}
	for (int i = 2; i <= sqrt(n); ++i) {
        if (n % i == 0)
            return false;
    }
    return true;
}
	

