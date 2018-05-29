/*
g++ -std=c++11 main.cpp
*/
#include <iostream>
#include <string>
using namespace std;
#include "Sach.h"
#include "SachTinHoc.h"
#include "SachKinhTe.h"

int main(int argc, char const *argv[])
{
	Sach *book[6];

	for (int i = 0; i < 6; ++i)
	{
		if(i % 2 == 0)
		{
			string name = "Sachkt"+to_string(i);
			book[i] = new SachKinhTe(name,2018+i,0.2,18000,3000);
		}
		else
		{
			string name = "Sachth"+to_string(i);
			book[i] = new SachTinHoc(name,2018+i,0.2,18000);

		}
	}
	for (int i = 0; i < 6; ++i)
	{
		book[i] -> print();
	}
	return 0;
}