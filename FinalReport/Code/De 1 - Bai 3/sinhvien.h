#include <iostream>
#include <string>
#include <iomanip>
#include <vector>
#pragma once
using namespace std;

// Lop co so SinhVien
class SinhVien {
 protected:
    string MSSV;       // Ma so sinh vien
    string hoTen;      // Ho ten sinh vien
    string diaChi;     // Dia chi sinh vien
    int tongTinchi;    // Tong so tin chi
    double DTB;        // Diem trung binh
 public:
    SinhVien();                 // Constructor mac dinh
    virtual void Nhap();        // Phuong thuc ao de nhap thong tin
    virtual void Xuat();        // Phuong thuc ao de xuat thong tin
    virtual bool DKTN() = 0;    // Phuong thuc ao thuan tuy de kiem tra dieu kien tot nghiep
    virtual int getLoai() = 0;  // Phuong thuc ao thuan tuy de lay loai sinh vien
    double getDTB();            // Phuong thuc lay diem trung binh
};
