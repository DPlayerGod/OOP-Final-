#include "xeLaiXangDien.h"

xeLaiXangDien::xeLaiXangDien(string soKhung, string soMay, double dungTich, string mauSac, string tenHangSX,
               int soChoNgoi, int namSX, string xuatXu, double giaNhapKhau)
    : Car(soKhung, soMay, dungTich, mauSac, tenHangSX, soChoNgoi, namSX, xuatXu, giaNhapKhau) {}
    
double xeLaiXangDien::ThueTieuThuDB() {
    return 0.55 * (giaNhapKhau + 0.7 * giaNhapKhau);
}