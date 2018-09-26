#include <iostream>
#include <string>
using namespace std;
int main()
{
	string a;
	int b,c;
	cout<<"Ingrese el operador y dos valores:\n";
	cin>>a;
	cin>>b>>c;
	
	if(a=="+")
	{
		cout<<"La suma es:"<<b+c<<endl;
	}
	else if(a=="-")
	{
		cout<<"La resta es:"<<b-c<<endl;
	}
	else if(a=="*")
	{
		cout<<"La multiplicacion es:"<<b*c<<endl;
	}
	else if(a=="/")
	{
		cout<<"La division es:"<<b/c<<endl;
	}
	else
	{
		cout<<"operador no valido\n";
	}
	
}
