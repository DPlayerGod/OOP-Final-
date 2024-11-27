#pragma once
#include "Car.h" 

class xeLaiXangDien : public Car {
public:
    // Constructor
    xeLaiXangDien(string soKhung = "", string soMay = "", double dungTich = 0, string mauSac = "", string tenHangSX = "",
           int soChoNgoi = 0, int namSX = 0, string xuatXu = "", double giaNhapKhau = 0);

    double ThueTieuThuDB() override;
};