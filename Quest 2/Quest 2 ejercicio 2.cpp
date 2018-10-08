#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{
    vector<double>ciudades;
    double entero1;
    int ciudad1;
    int ciudad2;
    double suma=0;
    double sum=0;
    
    while(cin>>entero1 && entero1!=-100)
	{
        ciudades.push_back(entero1);
    }
    
    for(int i=0; i<ciudades.size(); i++)
	{
        suma=suma+ciudades[i];
    }
    
    cout<<" La distacia total es: "<<suma<<endl;
    
    sort(ciudades.begin(),ciudades.end());
    
	cout<<" La distancia menor es "<<ciudades[0]<<endl<<" La distancias mayor es: "<<ciudades[ciudades.size()-1]<<endl;
	
    cout<<" Ingresar ciudad1: "<<endl;
    
    cin>>ciudad1;
    
    cout<<"Ingresar ciudad2:"<<endl;
    
    cin>>ciudad2;
    
    for(int i=ciudad1; i<ciudad2; i++)
	{
        sum=sum+ciudades[i];
    }
    
    cout<<" La media entre las ciudades es: "<<sum/2<<endl;
    return 0;
}
