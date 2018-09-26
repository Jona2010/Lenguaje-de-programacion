#include <iostream>
using namespace std;

int main()
{
	int numero,aux;
	cin>>numero;
	
	cout<<numero/365<<" ano(s)"<<endl;
	aux=(numero%365);
	cout<<aux/30<<" mes(es)"<<endl;
	aux=(aux%30);
	cout<<aux<<" dia(s)"<<endl;
	return 0;
}
