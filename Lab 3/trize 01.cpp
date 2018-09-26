#include <iostream>
using namespace std;
int main()
{
	const double yen=0.0089;
	const double libra=1.31;
	const double euro=1.18;
	int moneda;
	char conversion='_';
	
	cout<<"Por favor ingrese una cantidad seguida de su conversion(y_l_e_d): \n";
	cin>>moneda>>conversion;
	if(conversion=='d')
	{
		cout<<"Por favor ingrese su conversion(y_l_e): \n";
		cin>>conversion;
		if(conversion=='y')
		{
			cout<<moneda<<" dolar(es) === "<<moneda/yen<<" yen(es)\n";
		}
		else if(conversion=='l')
		{
			cout<<moneda<<" dolar(es) === "<<moneda/libra<<" libra(s)\n";
		}
		else if(conversion=='e')
		{
			cout<<moneda<<" dolar(es) === "<<moneda/euro<<" euro(s)\n";
		}
		else
		{
			cout<<"Lo siento no conozco la unidad llamada"<<conversion<<"\n";
		}	
	}
	else if(conversion=='y')
	{
		cout<<moneda<<" yen(es) === "<<moneda*yen<<" $\n";
	}
	else if(conversion=='l')
	{
		cout<<moneda<<" libra(s) === "<<moneda*libra<<" $\n";
	}
	else if(conversion=='e')
	{
		cout<<moneda<<" euro(s) === "<<moneda*euro<<" $\n";
	}
	else
	{
		cout<<"Lo siento no conozco la unidad llamada"<<conversion<<"\n";
	}
}
