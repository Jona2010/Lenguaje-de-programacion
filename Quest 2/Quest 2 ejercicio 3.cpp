#include <iostream>
#include <string>
using namespace std;

int main()
{
    int minimo=100;
    int maximo=100;

    string respuesta="no";
    
    cout<<"Piensa en un numero del 1 al 100"<<endl;
    
    for(int i=0; i<7; i++)
	{
        if(respuesta=="no")
		{
            if(maximo!=3)
			{
                maximo=maximo/2;
			}
			
            else if(maximo==3)
			{
                maximo=2;
            }
            
            else
			{
                maximo=1;
            }
            
            minimo=minimo-maximo;
            
        }
        
        else
		{
            if(maximo!=3)
			{
                maximo=maximo/2;
            }
            
            else if(maximo==3)
			{
                maximo=2;
            }
            
            else
			{
                maximo=1;
            }
            
            minimo=minimo+maximo;

        }
        
        if(i!=6)
		{
            cout << "El numero que estas pensando es mayor a "<<minimo<<endl;
            cin>>respuesta;
        }
    }
    
    cout<<" El numero que estas pensando es impar"<<endl;
    cin>>respuesta;
    
    if(respuesta!="si")
	{
        minimo=minimo+1;
    }
    
    cout<<" Tu numero es: "<<minimo;
    return 0;
}
