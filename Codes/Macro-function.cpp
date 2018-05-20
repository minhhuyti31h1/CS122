#include <iostream>
using namespace std;
#include <math.h>
#define FOR(i,a,b) for (int i=(a),_b=(b);i<=_b;i++)
#define FORD(i,b,a) for (int i=(b),_a=(a);i>=_a;i--)
#define REP(i,n) for (int i=0,_n=(n);i<_n;i++)
#define DEBUG 1
#define IS_EVEN(n,m) (n % m ==0 ? 1:0)
#define cerr(mess,X) { cout << mess << #X << " = " << (X) << endl; }

int main()
{
	int i,n;
	cin>>n;
	int tong = 0;
	bool flag = false;
	FOR(i,2,int(sqrt(n))+1)
	{
		if(IS_EVEN(n,i))
		{
			cout<<"Khong la so nguyen to"<<endl;
			flag = true;
			#if DEBUG
				cerr("dont pass ",i)
			#endif 
			break;
		}else
		{
			#if DEBUG
				cerr("pass ",i)
			#endif 
		}
		
			
	}
	if (!flag)
	{
		cout<<"La so nguyen to"<<endl;
	}
	return 0;
}