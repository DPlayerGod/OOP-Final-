#include<bits/stdc++.h>
#include "car.h"
#include "xeXang.h"
#include "xeLaiXangDien.h"
#include "xeDien.h"

using namespace std;

int main() {
    // Danh sach xe
    vector<Car*> cars;
    int n;
    cout << "Nhap so luong xe: "; cin >> n;

    /*
        Ta co cac loai xe
        1. Xe xang
        2. Xe lai xang dien
        3. Xe dien
    */

    for (int i = 1; i <= n; i++) {
        cout << "Nhap thong tin xe thu " << i << ":\n";
        cout << "Nhap loai xe: ";
        int loai;
        cin >> loai;
        Car* a;
        if (loai == 1)
            a = new xeXang();
        else if (loai == 2)
            a = new xeLaiXangDien();
        else a = new xeDien();
        a->nhapThongTin();
        cars.push_back(a);
    }

    double tongSoTien = 0.0;
    for (auto it : cars)
        tongSoTien += it->giaBanXe();
    cout << "Tong so tien: " << tongSoTien << '\n';

    Car* maxCar = nullptr;
    for (auto it : cars) {
        if (maxCar == nullptr || maxCar->giaBanXe() < it->giaBanXe()) {
            maxCar = it;
        }
    }

    if (maxCar != nullptr) {
        cout << "Thong tin xe co gia cao nhat: " << '\n';
        maxCar->ThongTinChung();
    }

    // Giai phong bo nho
    for (Car* car : cars)
        delete car;

    return 0;

}
