#include "xeXang.h"

xeXang::xeXang(string soKhung, string soMay, double dungTich, string mauSac, string tenHangSX,
               int soChoNgoi, int namSX, string xuatXu, double giaNhapKhau)
    : Car(soKhung, soMay, dungTich, mauSac, tenHangSX, soChoNgoi, namSX, xuatXu, giaNhapKhau) {}
    
double xeXang::ThueTieuThuDB() {
    return 0.6 * (giaNhapKhau + 0.7 * giaNhapKhau);
}