#include "Car.h"

Car::Car(string soKhung, string soMay, double dungTich, string mauSac, string tenHangSX, int soChoNgoi, int namSX, string xuatXu, double giaNhapKhau)
    : soKhung(soKhung), soMay(soMay), dungTich(dungTich), mauSac(mauSac), tenHangSX(tenHangSX),
      soChoNgoi(soChoNgoi), namSX(namSX), xuatXu(xuatXu), giaNhapKhau(giaNhapKhau) {}

void Car::nhapThongTin() {
    cout << "Nhap so khung:";
    cin >> soKhung;
    cout << "Nhap so may:";
    cin >> soMay;
    cout << "Nhap dung tich:";
    cin >> dungTich;
    cout << "Nhap mau sac:";
    cin >> mauSac;
    cout << "Nhap ten hang SX:";
    cin >> tenHangSX;
    cout << "Nhap so cho ngoi:";
    cin >> soChoNgoi;
    cout << "Nhap nam SX:";
    cin >> namSX;
    cout << "Nhap xuat xu:";
    cin >> xuatXu;
    cout << "Nhap gia nhap khau:";
    cin >> giaNhapKhau;
}

double Car::giaBanXe() {
    double thueNhapKhau = 0.7 * giaNhapKhau;
    double thueTieuThuDB = ThueTieuThuDB();
    double bienLoiNhuan = 0.2 * (giaNhapKhau + thueNhapKhau + thueTieuThuDB);
    double giaXe = giaNhapKhau + thueNhapKhau + thueTieuThuDB + bienLoiNhuan;
    double thueVAT = 0.1 * giaXe;
    double giaBan = giaXe + thueVAT;
    return giaBan;
}

double Car::phiDangKy() {
    return 0.02 * giaBanXe();
}

void Car::ThongTinChung() {
    cout << "So khung: " << soKhung << '\n';
    cout << "So may: " << soMay << '\n';
    cout << "Dung tich: " << dungTich << " cc\n";
    cout << "Mau sac: " << mauSac << '\n';
    cout << "Ten hang SX: " << tenHangSX << '\n';
    cout << "So cho ngoi: " << soChoNgoi << '\n';
    cout << "Nam SX: " << namSX << '\n';
    cout << "Xuat xu: " << xuatXu << '\n';
    cout << "Gia nhap khau: " << giaNhapKhau << " VND\n";
    cout << "Gia ban xe: " << giaBanXe() << " VND\n";
    cout << "Chi phi dang ky: " << phiDangKy() << " VND\n";
}

// Destructor
Car::~Car() {}
