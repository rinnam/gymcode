#include <iostream>
#include <iomanip>
#include <limits>
#include <string>
using namespace std;

struct SinhVien {
    string ten;
    float toan;
    float ly;
    float hoa;
    float diemTB;
};


void nhapSV(SinhVien &sv) {
    cin.ignore(); 
    cout << "Nhap ten sinh vien: ";
    getline(cin, sv.ten);

    while (true) {
        cout << "Nhap diem Toan: ";
        cin >> sv.toan;
        cout << "Nhap diem Ly: ";
        cin >> sv.ly;
        cout << "Nhap diem Hoa: ";
        cin >> sv.hoa;

        if (cin.fail() || sv.toan < 0 || sv.ly < 0 || sv.hoa < 0 || sv.toan > 10 || sv.ly > 10 || sv.hoa > 10) {
            cout << "Diem khong hop le! Nhap lai 3 diem tu 0 den 10.\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else {
            break;
        }
    }

    sv.diemTB = (sv.toan + sv.ly + sv.hoa) / 3;
}

void inSV(const SinhVien &sv) {
    cout << setw(20) << left << sv.ten
         << setw(8) << fixed << setprecision(2) << sv.diemTB << endl;
}

int main() {
    int n;

    while (true) {
        cout << "Nhap so luong sinh vien: ";
        cin >> n;
        if (cin.fail() || n <= 0) {
            cout << "Loi: Nhap so nguyen duong!\n";
            cin.clear();
            cin.ignore(numeric_limits<streamsize>::max(), '\n');
        } else break;
    }

    SinhVien ds[n];

    for (int i = 0; i < n; ++i) {
        cout << "\nNhap thong tin sinh vien thu " << i + 1 << ":\n";
        nhapSV(ds[i]);
    }


    cout << "\nSinh vien co diem trung binh tren 8:\n";
    cout << setw(20) << left << "Ten"
         << setw(8) << "DiemTB" << endl;
    cout << "-------------------------------\n";

    bool found = false;
    for (int i = 0; i < n; ++i) {
        if (ds[i].diemTB > 8) {
            inSV(ds[i]);
            found = true;
        }
    }

    if (!found) {
        cout << "Khong co sinh vien nao diem trung binh > 8." << endl;
    }

    return 0;
}

