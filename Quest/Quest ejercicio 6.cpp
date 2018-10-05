#include <iostream>
using namespace std;

int main()
{
	int entero1,entero2,incremento;
	int maximo=0;
	int minimo=0;
	int vector[20];
	int contador=0;
	
	do
	{
		if(contador%2==0)
		{
			cin>>entero1;
			vector[i]=entero1;
		}
		
		else
		{
			cin>>entero2;
			vector[i]=entero2;
		}
	contador++;
	incremento++;
	
	for(int k=0;k<i;k++)
	{
		if(vector[k]<minimo)
		{
			minimo=vector[k];
		}
		
		if(vector[k]>maximo)
		{
			maximo=vector[k];
		}
	
	cout<<minimo<<" es el menor "<<endl;
	cout<<maximo<<" es el maximo "<<endl;	
	}	
		
	}
	
	while(char(entero1)!='#' && char(entero2)!='#');
	return 0;
}
