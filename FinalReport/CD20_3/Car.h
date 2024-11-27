#include<bits/stdc++.h>
#pragma once

using namespace std;


// Lop co so Car chua cac thong tin chung ve xe
class Car {
protected:
    string soKhung;
    string soMay;
    double dungTich;
    string mauSac;
    string tenHangSX;
    int soChoNgoi;
    int namSX;
    string xuatXu;
    double giaNhapKhau;

public:
    // Constructor
    Car (string soKhung, string soMay, double dungTich, string mauSac, string tenHangSX, int soChoNgoi, int namSX, string xuatXu, double giaNhapKhau);
    virtual void nhapThongTin();

    virtual double ThueTieuThuDB() = 0;

    double giaBanXe();

    double phiDangKy();
    virtual void ThongTinChung();
    virtual ~Car();
};
