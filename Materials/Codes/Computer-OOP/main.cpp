#include "Date.h"
#include "Computer.h"
#include "PersonalComputer.h"
#include "Laptop.h"

int main(int argc, char const *argv[])
{
	Date d1(18,6,2014),d2(1,1,2014);
	cout<<d1<<"; "<<d2<<endl;

	Computer m1(d1,"Dell"),m2(d2,"HP");

	cout<<m1.getManufacturedDate()<<endl;

	PersonalComputer mb1(d2,"Dell",true);
	Laptop mt1(d2,"Sony",2.2);
	cout<<mt1.getManufacturedDate()<<endl;
	cout<<mt1.getExpiryDate(2017)<<endl;
	
	return 0;
}