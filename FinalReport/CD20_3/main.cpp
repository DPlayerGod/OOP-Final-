#include<bits/stdc++.h>
#include "Car.h"
#include "xeXang.h"
#include "xeLaiXangDien.h"
#include "xeDien.h"

using namespace std;

int main() {    
    // Danh sach xe
    vector<Car*> cars;

    int n;
    cout << "Nhap so luong xe: ";
    cin >> n;

    /*
        Ta co cac loai xe
        1. Xe xang
        2. Xe lai xang dien
        3. Xe dien
    */


    for (int i = 1; i <= n; i++) {
        cout << "Nhap thong tin xe thu " << i << '\n';
        int loai;
        cin >> loai;

        if (loai == 1) {
            xeXang* a = new xeXang();      
            a->nhapThongTin();
            cout << a->giaBanXe() << '\n';
            cars.push_back(a);
        }
        else if (loai == 2) {
            xeLaiXangDien* a = new xeLaiXangDien();
            a->nhapThongTin();
            cout << a->giaBanXe() << '\n';
            cars.push_back(a);
        }
        else {
            xeDien* a = new xeDien();
            a->nhapThongTin();
            cout << a->giaBanXe() << '\n';
            cars.push_back(a);
        }
    }       

    double tongSoTien = 0.0;

    for (auto it : cars) {
        tongSoTien += it->giaBanXe();
    }

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

    // Giải phóng bộ nhớ
    for (Car* car : cars) {
        delete car;
    }

    return 0;

}
