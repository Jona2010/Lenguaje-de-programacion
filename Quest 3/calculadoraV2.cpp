#include <iostream>
#include <vector>
#include <string>
#include <cmath>
using namespace std;
int main()
{
	char x;
	float y;
	float z;
	
	string respuesta="si";
	
	while(respuesta!="no")
	{
		cout<<" Ingrese dos numeros con su respectiva operacion: "<<endl;
		cin>>y>>z>>x;
	
	switch (x)
	{
		case '+': cout<<"la suma es:"<<y+z<<endl;
		break;
		
		case '-': cout<<"la resta es:"<<y-z<<endl;
		break;
		
		case '*': cout<<"la multiplicacion es:"<<y*z<<endl;
		break;
		case '^': cout<<"la potenciacion es:"<<pow(y,2)<<endl;
		cout<<"la potenciacion es:"<<pow(z,2)<<endl;
		break;
		case 'r': if (y>=0){
			cout<<"la raiz es:"<<pow(y,0.5)<<endl;
			cout<<"la raiz es:"<<pow(z,0.5)<<endl;
		}
		else
		{
		cout<<"numero no valido";
		break;
		
		}
		
		case '/': if(z==0)
		{
			cout<<"no valido"<<endl;
			break;
		} 
		cout<<"la division es:"<<float(y/z)<<endl;
	}
	cout<<"Desea continuar: "<<endl;
    cin>>respuesta;
	}
	return 0;
}
