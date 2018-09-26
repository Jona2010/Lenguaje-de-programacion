#include <iostream>
#include <iomanip>
using namespace std;
int main()
{
	int codigo;
	float cantidad;
	cin>>codigo;
	cin>>cantidad;
	
	if(codigo==1)
	{
		cantidad*=4.0;
	}
	else if(codigo==2)
	{
		cantidad*=4.5;
	}
	else if(codigo==3)
	{
		cantidad*=5.0;
	}
	else if(codigo==4)
	{
		cantidad*=2.0;
	}
	else
	{
		cantidad*=1.5;
	}
	cout<<"Total: R$ "<<setprecision(2)<<fixed<<cantidad<<endl;
	return 0;
}
