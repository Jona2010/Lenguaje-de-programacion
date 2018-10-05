#include <iostream>
using namespace std;

int main()
{
	double entero1,entero2;
	string unidad1,unidad2,unidad3;
	double maximo=0;
	double minimo;
	int vector[20];
	int contador=0;
	
	cin>>entero1>>unidad1;
	minimo=entero1;
	unidad3=unidad1;
	
	do
	{
		if(contador%2==0)
		{
			cin>>entero1>>unidad1;
			minimo=entero1;
			
			if(unidad1=="ft")
			{
				entero2=entero1*30.48;
				if(entero2<minimo)
				{
					unidad3=unidad1;
					minimo=entero1;
				}
				
				if(entero2>maximo)
				{
					maximo=entero1;
					unidad2=unidad1;
				}
				
			}
			
			else if(unidad1=="cm")
			{
				entero2=entero1;
				if(entero2<minimo)
				{
					unidad3=unidad1;
					minimo=entero1;
				}
				
				if(entero2>maximo)
				{
					unidad2=unidad1;
					maximo=entero1;
				}
			}
			
			else
			{
				entero2=entero1*100;
				if(entero2<minimo)
				{
					unidad3=unidad1;
					minimo=entero1;
				}
				
				if(entero2>maximo)
				{
					unidad2=unidad1;
					maximo=entero1;
				}
				
			}	
		}
		
		else
		{
			cin>>entero1>>unidad1;
			if(unidad1=="ft")
			{
				entero2=entero1*30.48;
				if(entero2<minimo)
				{
					unidad3=unidad1;
					minimo=entero1;
				}
				
				if(entero2>maximo)
				{
					maximo=entero1;
					unidad2=unidad1;
				}
				
			}
			
			else if(unidad1=="cm")
			{
				entero2=entero1;
				if(entero2<minimo)
				{
					unidad3=unidad1;
					minimo=entero1;
				}
				
				if(entero2>maximo)
				{
					unidad2=unidad1;
					maximo=entero1;
				}
			}
			
			else
			{
				entero2=entero1*100;
				if(entero2<minimo)
				{
					unidad3=unidad1;
					minimo=entero1;
				}
				
				if(entero2>maximo)
				{
					unidad2=unidad1;
					maximo=entero1;
				}
				
			}		
		}
		contador++;	
		
		cout<<minimo<<" "<<unidad3<<" es el menor "<<endl;
		cout<<maximo<<" "<<unidad1<<" es el maximo "<<endl;	
		cin>>entero1>>unidad1;
	}	
		
	while(char(entero1)!='#');
	return 0;
}
