#include "xeLaiXangDien.h"

xeLaiXangDien::xeLaiXangDien() {}

double xeLaiXangDien::ThueTieuThuDB() {
    return 0.55 * (giaNhapKhau + 0.7 * giaNhapKhau);
}
