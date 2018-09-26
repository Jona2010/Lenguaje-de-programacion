#include <iostream>
using namespace std;
int main()
{
	int a,b,c;
	int menor;
	cout<<"Ingrese 3 valores:"<<endl;
	cin>>a;
	cin>>b;
	cin>>c;
	
	if(a<b&&a<c)
	{
		menor=a;
		if(b<c)
		{
			menor=b;
		}
		else
		{
			menor=c;
		}
		cout<<a<<b<<c;	
	}
	
}
