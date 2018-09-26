#include <iostream>
using namespace std;
int main()
{
	const double yen=0.0089;
	const double libra=1.31;
	const double euro=1.18;
	const double yuan=0.15;
	const double shekels=0.28;
	int moneda;
	char conversion='_';
	
	cout<<"Coloque en mayuscula Y para convetir a yuan \n";
	cout<<"Por favor ingrese una cantidad seguida de su conversion(y_l_e_d_Y_s): \n";
	cin>>moneda>>conversion;
	
	switch(conversion)
	{
		case 'd':
			cout<<"Por favor ingrese su conversion(y_l_e_yu_s): \n";
			cin>>conversion;
			switch(conversion)
			{
				case 'y':
					cout<<moneda<<" dolar(es) === "<<moneda/yen<<" yen(es)\n";
					break;
				case 'l':
					cout<<moneda<<" dolar(es) === "<<moneda/libra<<" libra(s)\n";
					break;
				case 'e':
					cout<<moneda<<" dolar(es) === "<<moneda/euro<<" euro(s)\n";
					break;
				case 'Y':
					cout<<moneda<<" dolar(es) === "<<moneda/yuan<<" yuan(s)\n";
					break;
				case 's':
					cout<<moneda<<" dolar(es) === "<<moneda/yuan<<" shekel(s)\n";
					break;
				default:
					cout<<"Lo siento no conozco la unidad llamada"<<conversion<<"\n";
					break;
			}
			break;
		case 'y':
			cout<<moneda<<" yen(es) === "<<moneda*yen<<" $\n";
			break;
		case 'l':
			cout<<moneda<<" libra(s) === "<<moneda*libra<<" $\n";
			break;
		case 'e':
			cout<<moneda<<" euro(s) === "<<moneda*euro<<" $\n";
			break;
		case 'yu':
			cout<<moneda<<" yun(s) === "<<moneda*yuan<<" $\n";
			break;
		case 's':
			cout<<moneda<<" shekel(s) === "<<moneda*shekels<<" $\n";
			break;
		default:
			cout<<"Lo siento no conozco la unidad llamada"<<conversion<<"\n";
			break;			
	}
}	
