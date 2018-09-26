#include <iostream>
using namespace std;
int main()
{
	int a,b;
	cout<<"ingrese dos valores:"<<endl;
	cin>>a;
	cin>>b;
	cout<<"la suma es:"<<a+b<<endl;
	cout<<"la divison es:"<<a/b<<endl;
	cout<<"la resta es:"<<a-b<<endl;
	cout<<"la muiltiplicacion es:"<<a*b<<endl;
	
	if(a>b)
	{
		cout<<a<<" es mayor que "<<b<<endl;
	}
	else
	{
		cout<<b<<" es mayor que "<<a<<endl;
	}
}
