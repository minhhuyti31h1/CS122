#include <iostream>
#include <math.h>
using namespace std;
#include "sophuc.h"
int main()
{
	sophuc a(3);
	int n;
	cin>>n;
	for (int i= 1; i<= n ; i++)
	{
		a= a + sophuc(0, i);
	}
	cout<<a.modul()<<endl;
	return 0;
}
