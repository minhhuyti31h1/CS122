#include "QuanLyKhachHang.h"
#include <iostream>
#include <string.h>
using namespace std;

int main(){
	QuanLyKhachHang B;

	B.ThemTaiKhoan("TK", "01244234y4", 2030000, 6.8);
	B.ThemTaiKhoan("VLai", "34234242424", 728738273, "01244234y4")
	
	B.print();

	///rut tien
	B.LayTaiKhoan("34234242424") -> RutTien(1000000);
	B.LayTaiKhoan("34234242424") -> RutTien(10000000);
	B.LayTaiKhoan("34234242424") -> RutTien(30000000);


}