#include "caodang.h"

// Constructor mac dinh cua lop CaoDang, ke thua tu SinhVien
CaoDang::CaoDang() {}

/** Phuong thuc kiem tra dieu kien tot nghiep cua sinh vien cao dang
    Output: Tra ve true neu sinh vien thoa man dieu kien tot nghiep, nguoc lai tra ve false
    Solution: Kiem tra tong tin chi >= 120, diem trung binh >= 5, diem thi tot nghiep >= 5 */
bool CaoDang::DKTN() {
    if (tongTinchi >= 120 && DTB >= 5 && diemTN >= 5) return true;
    return false;
}

/** Phuong thuc nhap thong tin cho sinh vien cao dang
    Input: Nhap ma so sinh vien, ho ten, dia chi, tong so tin chi,
           diem trung binh, diem thi tot nghiep
    Solution: Goi Nhap() cua SinhVien va nhap them diem tot nghiep */
void CaoDang::Nhap() {
    SinhVien::Nhap();
    cout << "Nhap diem thi tot nghiep: ";
    cin >> diemTN;
}

/** Phuong thuc xuat thong tin sinh vien cao dang
    Output: Xuat thong tin sinh vien cao dang (ma so, ho ten, dia chi,
            tong tin chi, diem trung binh, diem thi tot nghiep)
    Solution: Goi Xuat() cua SinhVien va xuat them diem tot nghiep */
void CaoDang::Xuat() {
    SinhVien::Xuat();
    cout << "Diem thi tot nghiep: " << diemTN << endl;
}

/** Phuong thuc tra ve loai sinh vien (1 cho sinh vien cao dang)
    Output: Tra ve gia tri 1, dai dien cho loai sinh vien cao dang */
int CaoDang::getLoai() {
    return 1;
}
