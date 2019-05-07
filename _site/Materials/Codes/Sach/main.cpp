/*
g++ -std=c++11 main.cpp
*/
#include <iostream>
#include <string>
using namespace std;
#include "Sach.h"
#include "SachTinHoc.h"
#include "SachKinhTe.h"
#define MAX 6
int main(int argc, char const *argv[])
{
	//version THONG THAI (DUNG)
	Sach *book[MAX];
	for (int i = 0; i < MAX; ++i)
	{
		if(i % 2 != 0)
		{
			cout<<"Sach Kinh Te "<<i<<endl;
			SachKinhTe *a = new SachKinhTe();
			cin>>*a;
			book[i] = a;
		}
		else
		{
			cout<<"Sach Tinh Hoc "<<i<<endl;
			SachTinHoc *a = new SachTinHoc();
			cin>>*a;
			book[i] = a;
		}
	}
	//version NGU (SAI)
	Sach *book[MAX];
	for (int i = 0; i < MAX; ++i)
	{
		if(i % 2 != 0)
		{
			cout<<"Sach Kinh Te "<<i<<endl;
			SachKinhTe a;
			cin>>a;
			book[i] = &a;
		}
		else
		{
			cout<<"Sach Tinh Hoc "<<i<<endl;
			SachTinHoc a;
			cin>>a;
			book[i] = &a;
		}
	}
	cout<<"DONE";
	for (int i = 0; i <MAX; ++i)
	{
		book[i] -> print();
	}
	return 0;
}