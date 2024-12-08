#include "xeXang.h"

xeXang::xeXang() {}

double xeXang::ThueTieuThuDB() {
    return 0.6 * (giaNhapKhau + 0.7 * giaNhapKhau);
}
