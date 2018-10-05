#include <iostream>
using namespace std;

int main()
{
	double entero1, entero2;
	
	do
	{
		cin>>entero1;cin>>entero2;
		cout<<entero1<<" "<<entero2<<"\n";
		
		if(entero1<entero2)
		{
			cout<<"el menor valor es: "<<entero1<<" "<<endl<<" el mayor valor es: "<<entero2<<endl;
		}
		
		else if(entero2<entero1)
		{
			cout<<"el menor valor es: "<<entero2<<" "<<endl<<" el mayor valor es: "<<entero1<<endl;
		}
		
		else if(entero1-entero2<=0.01)
		{
			cout<<" los numeros son casi iguales: "<<entero1<<" "<<entero2<<endl;
		}
		
		else
		{
			cout<<" los numeros son iguales: "<<entero1<<" "<<entero2<<endl;
		}
	}
	
	while(char(entero1)!='#' && char(entero2)!='#');
	return 0;
}
