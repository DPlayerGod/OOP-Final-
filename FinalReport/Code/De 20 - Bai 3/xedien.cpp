#include "xeDien.h"

xeDien::xeDien() {}

double xeDien::ThueTieuThuDB() {
    return 0.5 * (giaNhapKhau + 0.7 * giaNhapKhau);
}
