#include "sinhvien.h"

// Constructor mac dinh
SinhVien::SinhVien() {}

/** Phuong thuc nhap thong tin cho sinh vien
    Input: Nhap ma so sinh vien (MSSV), ho ten, dia chi,
           tong so tin chi, diem trung binh*/
void SinhVien::Nhap() {
    cout << "Nhap ma so sinh vien: "; cin >> MSSV;
    cin.ignore();
    cout << "Nhap ho ten: "; getline(cin, hoTen);
    cout << "Nhap dia chi: "; getline(cin, diaChi);
    cout << "Nhap tong so tin chi: "; cin >> tongTinchi;
    cout << "Nhap diem trung binh: "; cin >> DTB;
}

/** Phuong thuc xuat thong tin sinh vien
    Output: Xuat thong tin cua sinh vien (MSSV, ho ten,
            dia chi, tong tin chi, diem trung binh) */
void SinhVien::Xuat() {
    cout << "Ma so sinh vien: " << MSSV << endl;
    cout << "Ho ten: " << hoTen << endl;
    cout << "Dia chi: " << diaChi << endl;
    cout << "Tong so tin chi: " << tongTinchi << endl;
    cout << "Diem trung binh: " << DTB << endl;
}

/** Phuong thuc lay diem trung binh cua sinh vien
    Output: Tra ve diem trung binh (DTB) cua sinh vien */
double SinhVien::getDTB() {
    return DTB;
}
