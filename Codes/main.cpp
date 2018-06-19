#include <string>
#include <iostream>
using namespace std;
#include <fstream>
#include "CanBo.h"
#include "GiangVien.h"
#include "NhanVienHanhChinh.h"
#define MAX 100
int main()
{
	CanBo * dscb[MAX];
	int chon;
	int n = 0;
	do
	{
		cout << "1. Nhap giang vien." << endl;
		cout << "2. Nhap nhan vien hanh chinh." << endl;
		cout << "3. Thoat." << endl;
		cin >> chon;
		if (chon == 1)
		{
			GiangVien *a = new GiangVien();
			cin >> *a;
			dscb[n] = a;
		}else if (chon == 2)
		{
			NhanVienHanhChinh *a = new NhanVienHanhChinh();
			cin >> *a;
			dscb[n] = a;
		}
		n++;
	}while (chon != 3);
	for (int i = 0; i < n; i++)
	{
		dscb[i]->print();
	}
	cin >> n;
}