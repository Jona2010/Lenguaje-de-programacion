#include <iostream>
using namespace std;
int main()
{
	const double cm_per_inch=2.54;
	int length=1;
	char unit='_';
	
	cout<<"Por favor ingrese una longitud seguida de su unidad(c_o_i): \n";
	cin>>length>>unit;
	
	switch(unit)
	{
		case 'i':
			cout<<length<<" in === "<<cm_per_inch*length<<" cm\n";
			break;
		case 'c':
			cout<<length<<" cm === "<<length/cm_per_inch<<" in\n";
			break;
		default:
			cout<<"Lo siento no conozco la unidad llamada"<<unit<<" \n";
			break;
	}
}	
	
