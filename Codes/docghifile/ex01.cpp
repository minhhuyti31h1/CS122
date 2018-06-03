#include <iostream>
using namespace std;
#include <fstream>

int main(int argc, char const *argv[])
 {
 	fstream fin("CS122.txt",ios::in);
 	while(!fin.eof())
 	{
 		int item;
 		for (int j = 0; j < 5; ++j)
 		{
 			fin>>item;
 			if(j < 4 )
 				cout<<item<<"+";
 			else
 				cout<<item;
 		}
 		fin>>item;
 		cout<<"="<<item<<endl;
 	}
 	fin.close();
 	return 0;
 } 