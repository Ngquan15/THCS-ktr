#include <iostream>
#include <vector>
#include <string>
using namespace std;

struct ThiSinh {
    int maThiSinh;
    string ten, ngaySinh;
    float diem1, diem2, diem3, tongDiem;
};

int main() {
    int n;
    cin >> n;
    vector<ThiSinh> danhSachThiSinh;

    for (int i = 0; i < n; ++i) {
        ThiSinh ts;
        ts.maThiSinh = i + 1;
        cin.ignore();
        getline(cin, ts.ten);
        getline(cin, ts.ngaySinh);
        cin >> ts.diem1 >> ts.diem2 >> ts.diem3;
        ts.tongDiem = ts.diem1 + ts.diem2 + ts.diem3;
        danhSachThiSinh.push_back(ts);
    }

    float maxDiem = -1;
    for (int i = 0; i < danhSachThiSinh.size(); ++i) {
        if (danhSachThiSinh[i].tongDiem > maxDiem) {
            maxDiem = danhSachThiSinh[i].tongDiem;
        }
    }

    for (int i = 0; i < danhSachThiSinh.size(); ++i) {
        if (danhSachThiSinh[i].tongDiem == maxDiem) {
            cout << danhSachThiSinh[i].maThiSinh << " " 
                 << danhSachThiSinh[i].ten << " " 
                 << danhSachThiSinh[i].ngaySinh << " " 
                 << danhSachThiSinh[i].tongDiem << endl;
        }
    }

    return 0;
}
