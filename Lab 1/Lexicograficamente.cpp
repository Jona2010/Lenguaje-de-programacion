#include <iostream>
#include <string>
using namespace std ;
int main ()

{
	cout<<"Ingrese dos nombres"<<endl;
	string first;
	string second;
	cin>>first>>second;
	if(first==second) cout<<"Ambos son iguales"<<endl;
	if(first<second) 
	cout<<first<<"Esta lexicograficamente antes"<<endl;
	if(first>second) 
	cout<<first<<"Esta lexicograficamente despues"<<endl;
}
