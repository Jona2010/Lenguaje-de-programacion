#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;

int main()
{
	vector<string> numero;
	numero.push_back("cero");
	numero.push_back("uno");
	numero.push_back("dos");
	numero.push_back("tres");
	numero.push_back("cuatro");
	numero.push_back("cinco");
	numero.push_back("seis");
	numero.push_back("siete");
	numero.push_back("ocho");
	numero.push_back("nueve");
	
	vector<string> numero2;
	numero2.push_back("0");
	numero2.push_back("1");
	numero2.push_back("2");
	numero2.push_back("3");
	numero2.push_back("4");
	numero2.push_back("5");
	numero2.push_back("6");
	numero2.push_back("7");
	numero2.push_back("8");
	numero2.push_back("9");
	
	string x;
	string y;
	double a;
	double b;
	char z;
	string respuesta="si";
	
	while(respuesta!="no")
	{
		cout<<" Ingrese un numero en letras y en digito del 0 al 9: "<<endl;
		cin>>x>>y>>z;
	
		for(int i=0;i<10;i++)
		{
			if(numero[i]==x)
			{
				a=i;
			}
			
			else if(numero2[i]==x)
			{
				a=i;
			}
		}
		
		for(int j=0;j<10;j++)
		{
			if(numero[j]==y)
			{
				b=j;
			}
			
			else if(numero2[j]==y)
			{
				b=j;
			}
		}
	
	switch (z)
	{
		case '+': cout<<"la suma es:"<<a+b<<endl;
		break;
			
		case '-': cout<<"la resta es:"<<a-b<<endl;
		break;
			
		case '*': cout<<"la multiplicacion es:"<<a*b<<endl;
		break;
		
		case '^': cout<<"la potenciacion es:"<<pow(a,2)<<endl;
		cout<<"la potenciacion es:"<<pow(b,2)<<endl;
		break;
		
		case 'r': if (a>=0)
		{
			cout<<"la raiz es:"<<pow(a,0.5)<<endl;
			cout<<"la raiz es:"<<pow(b,0.5)<<endl;
		}
		
		else 
		{
			cout<<"numero no valido";
		}
		break;
			
		case '/': if(a==0)
			{
				cout<<"no valido"<<endl;
				break;
			}
			 
			else
			{
				cout<<"la division es:"<<float(a/b)<<endl;
			}
		break;
			
		default: 
			cout<<" No conozco ese operador "<<z<<endl;
			break;
		}
	cout<<"Desea continuar: "<<endl;
    cin>>respuesta;
	}
	return 0;
}
