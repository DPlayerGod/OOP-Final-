#include "sinhvien.h"
#include "caodang.h"
#include "daihoc.h"

int main() {
    // Nhap so luong sinh vien
    int n;
    cout << "Nhap so luong sinh vien: "; cin >> n;
    vector<SinhVien*> dssv(n);

    // Cau 1: Nhap danh sach sinh vien
    bool coSVDH = false;
    for (int i = 0; i < n; i++) {
        // Loai sinh vien (1: Cao Dang, 2: Dai Hoc)
        int loai;
        cout << "Nhap loai sinh vien (1: Cao Dang, 2: Dai Hoc): ";
        cin >> loai;
        SinhVien *sv;
        if (loai == 1)
            sv = new CaoDang();
        else if (loai == 2) {
            sv = new DaiHoc();
            coSVDH = true;
        }
        // Nhap thong tin cho sinh vien
        sv->Nhap();
        // Luu doi tuong vao danh sach sinh vien
        dssv[i] = sv;
    }

    // Cau 2: Dem so luong sinh vien du dieu kien tot nghiep
    int cnt = 0;
    // Duyet qua danh sach sinh vien
    for (auto &sv : dssv)
        if (sv->DKTN()) cnt++;
    cout << "So luong sinh vien du dieu kien tot nghiep: " << cnt << endl;

    // Cau 3: Tim sinh vien dai hoc co diem TB cao nhat
    double maxDTB = 0;
    // Neu co sinh vien dai hoc
    if (coSVDH) {
        // Duyet qua danh sach sinh vien
        for (auto &sv: dssv)
            // Kiem tra loai sinh vien dai hoc va cap nhat diem trung binh cao nhat
            if (sv->getLoai() == 2 && sv->getDTB() > maxDTB)
                maxDTB = sv->getDTB();
        cout << "Sinh vien dai hoc co diem trung binh cao nhat:\n";
        // Duyet lai danh sach de xuat thong tin sinh vien co diem trung binh cao nhat
        for (auto &sv: dssv)
            if (sv->getLoai() == 2 && sv->getDTB() == maxDTB)
                sv->Xuat();
    }
    else cout << "Khong co sinh vien dai hoc trong danh sach.\n";

    // Giai phong bo nho
    for (auto &sv : dssv)
        delete sv;

    return 0;
}

