#include <iostream>
using namespace std;
#include <fstream>

int main(int argc, char const *argv[])
 {
 	fstream fout("CS122.txt",ios::out);
 	for (int i = 0; i < 2; ++i)
 	{
 		int tong = 0;
 		for (int j = 0; j < 5; ++j)
 		{
 			int item;
 			cin>>item;
 			tong += item;
 			fout<<item<<" ";
 		}
 		fout<<tong<<endl;

 	}
 	fout.close();
 	return 0;
 } 