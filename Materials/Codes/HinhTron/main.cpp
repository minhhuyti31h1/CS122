#include <iostream>
using namespace std;
#include "Diem.h"
#include "HinhTron.h"
#include <fstream>
#define MAX 5
int main(int argc, char const *argv[])
{
	HinhTron htr[MAX];
	for (int i = 0; i < MAX; ++i)
	{
		cin>>htr[i];
	}
	HinhTron max = htr[0];
	for (int i = 1; i < MAX; ++i)
	{
		if (max < htr[i])
		{
			max = htr[i];
		}
	}
	cout<<max<<endl;
	fstream fin("DuLieuToDo.txt",ios::in);
	if(!fin)
	{
		cout<<"Khong mo duoc file"<<endl;
		return 0;
	}
	int N;
	fin>>N;
	Diem *tap = new Diem[N];
	for (int i = 0; i < N; ++i)
	{
		fin>>tap[i];
		if (max.ktThuoc(tap[i]))
		{
			cout<<tap[i]<<endl;
		}
	}
	fin.close();
	return 0;
}