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
	fstream fin("SanPhamSX.txt",ios::in);
	string a;
	getline(fin,a);
	cout<<a<<endl;
	SanPhamSX *spsx = new SanPhamSX[2];
	int k=0;
	while(!fin.eof())
	{
		fin>>spsx[k];
		k++;
	}
	for (int i = 0; i < k; ++i)
	{
		spsx[i].print();
	}
	return 0;
}

