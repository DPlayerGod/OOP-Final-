#include "xeDien.h"

xeDien::xeDien(string soKhung, string soMay, double dungTich, string mauSac, string tenHangSX,
               int soChoNgoi, int namSX, string xuatXu, double giaNhapKhau)
    : Car(soKhung, soMay, dungTich, mauSac, tenHangSX, soChoNgoi, namSX, xuatXu, giaNhapKhau) {}
    
double xeDien::ThueTieuThuDB() {
    return 0.5 * (giaNhapKhau + 0.7 * giaNhapKhau);
}