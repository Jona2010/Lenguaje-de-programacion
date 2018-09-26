#include <iostream>
using namespace std;
int main()
{
	const double cm_per_inch=2.54;
	int length=1;
	char unit='_';
	
	cout<<"Por favor ingrese una longitud seguida de su unidad(c_o_i): \n";
	cin>>length>>unit;
	
	if(unit=='i')
	{
		cout<<length<<"in=== "<<cm_per_inch*length<<"cm\n";
	}
	else if(unit=='c')
	{
		cout<<length<<"in=== "<<length/cm_per_inch<<"cm\n";
	}
	else
	{
		cout<<"Lo siento no conozco la unidad llamada"<<unit<<"\n";
	}
}
