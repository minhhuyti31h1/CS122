#include <iostream>
using namespace std;
#include <fstream>

int main(int argc, char const *argv[])
 {
 	fstream fin("CS122.txt",ios::in);
 	int N, M;
 	fin>>N>>M;
 	for (int i = 0; i < N; ++i)
 	{
 		for (int j = 0; j < M; ++j)
 		{
 			int item;
 			fin>>item;
 			cout<<item<<" ";
 		}
 		cout<<endl;
 	}
 	fin.close();
 	return 0;
 } 