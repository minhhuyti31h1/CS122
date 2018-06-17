#include <iostream>
using namespace std;
#include <string>
#include "SanPham.h"
#include "SanPhamSX.h"
#include "SanPhamNK.h"
#include <iomanip>
#include <fstream>

int main(int argc, char const *argv[])
{
	int n;
	cout<<"Moi nhap vao so n: ";cin>>n;
	SanPhamSX *spsx = new SanPhamSX[n];//=> SanPhamSX spsx[n];
	for (int i = 0; i < n; ++i)
	{
		cout<<"Nhap san pham thu "<<i+1<<endl;
		cin>>spsx[i];
	}
	cout<<left<<setw(15)<<"Ma San Pham"<<setw(15)<<"Ten San Pham"<<setw(15)<<"Loai San Pham"<<setw(15)<<"Gia San Pham"<<setw(15)<<"Nam san xuat"<<endl;
	for (int i = 0; i < n; ++i)
	{
		spsx[i].print();
	}

	fstream fout("SanPhamSX.txt",ios::out);
	//fout<<left<<"Ma San Pham"<<","<<"Ten San Pham"<<","<<"Loai San Pham"<<","<<"Gia San Pham"<<","<<"Nam san xuat"<<endl;
	for (int i = 0; i < n; ++i)
	{
		fout<<spsx[i]<<endl;
	}
	fout.close();

	return 0;
}

