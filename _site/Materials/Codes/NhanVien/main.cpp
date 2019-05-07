#include <iostream>
using namespace std;
#include "Date.h"
#include "Nhanvien.h"
#include "CanBo.h"
#include "GiaoVien.h"
int main(int argc, char const *argv[])
{
	CanBo cb("Nguyen Van A",Date(01,01,1991),"0123456789","CTSV",2.3,1000000);

	cout<<cb.tinhLuong()<<endl;

	return 0;
}