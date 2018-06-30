#include "KhachHang.h"
#include <iostream>
#include <string>
using namespace std;

int main(){
	KhachHang B;

	B.themTaiKhoan("TK", "01244234y4", 2030000, 6.8);
	B.themTaiKhoan("VLai", "34234242424", 738273);
	B.lienKetTaiKhoan("34234242424","01244234y4");
	B.print();
	cout<<endl;
	///rut tien
	cout<<B.layTaiKhoanvl("34234242424") -> RutTien(1000000);
	cout<<B.layTaiKhoanvl("34234242424") -> RutTien(1000000);
	cout<<B.layTaiKhoanvl("34234242424") -> RutTien(3000000)<<endl;
	B.print();

}