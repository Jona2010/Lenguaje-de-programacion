#include <iostream>
using namespace std;

class Date
{
	public:
		enum Month
		{
			jan=1,feb,mar,apr,may,jun,jul,aug,sep,oct,nov,dcm
		};
		
		Date(int yy,Month mm,int dd) : y(yy),m(mm),d(dd)
		{
		}	
		
		friend ostream& operator<<(ostream& os,const Date& d)
		{
			return os<<'('<<d.y<<','<<d.m<<','<<d.d<<')';
		}
	
	private:
		int y;
		Month m;
		int d;
};

int main()
{
	Date holiday(1978,Date::jul,4);
	Date d2=holiday;
	Date d3=Date(1978,Date::jul,4);
	
	holiday=Date(1978,Date::dcm,24);
	d3=holiday;
	
	cout<<Date(1978,Date::dcm,24);
	return 0;
}

