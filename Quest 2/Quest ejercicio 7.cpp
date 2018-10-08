#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector <double> medidas;
	double entero1;
	string unidad1,unidad2,unidad3;
	double maximo;
	double minimo;
	int vector[10];
	int contador=0;
	double x=0;
	double menor=0;
	double mayor=0;
	double suma=0;
	double y=0;
	
	while(cin>>entero1>>unidad1)
	{
		if(unidad1=="ft" || unidad1=="cm" || unidad1=="m" || unidad1=="in")
		{
			if(entero1!='#')
			{
				if(unidad1=="ft")
				{
					x=entero1*30.48;
				}
				
				else if(unidad1=="cm")
				{
					x=entero1;
				}
				
				else if(unidad1=="m")
				{
					x=entero1*100;
				}
				
				else if(unidad1=="in")
				{
					x=entero1*2.54;
				}
				
				if(contador==0)
				{
					minimo=entero1;
					maximo=entero1;
					menor=entero1;
					mayor=entero1;
					unidad2=unidad1;
					unidad3=unidad1;
					
					cout<<minimo<<unidad2<<" es el menor hasta ahora "<<endl;
					cout<<maximo<<unidad3<<" es el menor hasta ahora "<<endl;
					contador++;
				}
				
				else
				{
					if(x<menor)
					{
						minimo=entero1;
						menor=x;
						unidad2=unidad1;
						cout<<minimo<<unidad2<<" es el menor hasta ahora "<<endl;
						cout<<maximo<<unidad3<<" es el menor hasta ahora "<<endl;
					}
					
					if(x>mayor)
					{
						maximo=entero1;
						mayor=x;
						unidad3=unidad1;
						cout<<minimo<<unidad2<<" es el menor hasta ahora "<<endl;
						cout<<maximo<<unidad3<<" es el menor hasta ahora "<<endl;	
					}	
				}
			if(unidad1=="ft")
			{
				y=entero1*0.3048;
			}
			
			else if(unidad1=="in")
			{
				y=entero1*0.0254;
			}
			
			else if(unidad1=="m")
			{
				y=entero1;
			}
			
			else if(unidad1=="cm")
			{
				y=entero1*0.01;
			}
			
			medidas.push_back(x);
			sort(medidas.begin(),medidas.end());
			for(int i=0;i<medidas.size();i++)
			{
				cout<<medidas[i]<<'\n';
			}
			
			cout<<" "<<endl;
			suma=+y;
			cout<<" La suma es "<<suma<<" en metros "<<endl;
			}	
		else
		{
			return 0;
		}
		}	
	else
	{
		cout<<" No conozco esa unidad "<<endl;
	}
	}
}
