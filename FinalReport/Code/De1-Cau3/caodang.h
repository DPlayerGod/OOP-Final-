#include "sinhvien.h"

// Lop CaoDang ke thua lop SinhVien
class CaoDang : public SinhVien {
 private:
    double diemTN;      // Diem thi tot nghiep cua sinh vien cao dang
 public:
    CaoDang();          // Constructor mac dinh
    bool DKTN();        // Phuong thuc kiem tra dieu kien tot nghiep cho sinh vien cao dang
    void Nhap();        // Phuong thuc nhap thong tin sinh vien cao dang
    void Xuat();        // Phuong thuc xuat thong tin sinh vien cao dang
    int getLoai();      // Phuong thuc tra ve loai sinh vien (loai cao dang)
};
