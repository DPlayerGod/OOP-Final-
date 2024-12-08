#include "sinhvien.h"

// Lop DaiHoc ke thua lop SinhVien
class DaiHoc : public SinhVien {
 private:
    string tenLV;      // Ten luan van
    double diemLV;     // Diem luan van

 public:
    DaiHoc();          // Constructor mac dinh
    bool DKTN();       // Phuong thuc kiem tra dieu kien tot nghiep cho sinh vien dai hoc
    void Nhap();       // Phuong thuc nhap thong tin sinh vien dai hoc
    void Xuat();       // Phuong thuc xuat thong tin sinh vien dai hoc
    int getLoai();     // Phuong thuc tra ve loai sinh vien (loai dai hoc)
};
