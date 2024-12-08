#include "daihoc.h"

// Constructor mac dinh cua lop DaiHoc, ke thua tu SinhVien
DaiHoc::DaiHoc() {}

/** Phuong thuc kiem tra dieu kien tot nghiep cua sinh vien dai hoc
    Output: Tra ve true neu sinh vien thoa man dieu kien tot nghiep, nguoc lai tra ve false
    Solution: Kiem tra tong tin chi >= 170, diem trung binh >= 5, diem luan van >= 5 */
bool DaiHoc::DKTN() {
    if (tongTinchi >= 170 && DTB >= 5 && diemLV >= 5) return true;
    return false;
}

/** Phuong thuc nhap thong tin cho sinh vien dai hoc
    Input: Nhap ma so sinh vien, ho ten, dia chi, tong so tin chi,
          diem trung binh, ten luan van, diem luan van
    Solution: Goi Nhap() cua SinhVien va nhap them ten luan van, diem luan van */
void DaiHoc::Nhap() {
    SinhVien::Nhap();
    cin.ignore();
    cout << "Nhap ten luan van: "; getline(cin, tenLV);
    cout << "Nhap diem luan van: "; cin >> diemLV;
}

/** Phuong thuc xuat thong tin sinh vien dai hoc
    Output: Xuat thong tin sinh vien dai hoc (ma so, ho ten, dia chi,
           tong tin chi, diem trung binh, ten luan van, diem luan van)
    Solution: Goi Xuat() cua Sinh Vien va xuat them ten luan van, diem luan van */
void DaiHoc::Xuat() {
    SinhVien::Xuat();
    cout << "Ten luan van: " << tenLV << endl;
    cout << "Diem luan van: " << diemLV << endl;
}

/** Phuong thuc tra ve loai sinh vien (2 cho sinh vien dai hoc)
    Output: Tra ve gia tri 2, dai dien cho loai sinh vien dai hoc */
int DaiHoc::getLoai() {
    return 2;
}
