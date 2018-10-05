#include <iostream>
using namespace std;

int main()
{
	int entero1, entero2;
	
	do
	{
		cin>>entero1;cin>>entero2;
		cout<<entero1<<" "<<entero2<<"\n";
	}
	
	while(char(entero1)!='#' && char(entero2)!='#');
	return 0;
}

