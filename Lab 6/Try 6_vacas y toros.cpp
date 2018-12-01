#include <iostream>
#include <random>
#include <vector>
#include <string>
using namespace std;

int randint(int min, int max)
{
    static default_random_engine ran;
    return uniform_int_distribution<>{min, max}(ran);
}

int main()
{
    vector<int>numeros;
    int numero;
    int x=0;
    int si=0;
    int a; int b; int c; int d; int toros=0; int vacas=0;
    string continuar="si";
    while(continuar!="no"){
    while(x<4){
        numero=randint(0,9);
        for(int i=0; i<numeros.size();i++){
            if(numero==numeros[i]){
                si=1;
            }
        }
        if(si!=1){
            numeros.push_back(numero);
            n++;
        }
        si=0;
    }
    x=0;
    while(toros!=4){
        cout<<"Ingrese los numeros: "<<endl;
        cin>>a>>b>>c>>d;
        toros=0;
        vacas=0;
        if(a==numeros[0]){
        toros++;
        }
        if(a==numeros[1]||a==numeros[2]||a==numeros[3]){
        vacas++;
        }
        if(b==numeros[1]){
        toros++;
        }
        if(b==numeros[0]||b==numeros[2]||b==numeros[3]){
        vacas++;
        }
        if(c==numeros[2]){
        toros++;
        }
        if(c==numeros[0]||c==numeros[1]||c==numeros[3]){
        vacas++;
        }
        if(d==numeros[3]){
        toros++;
        }
        if(d==numeros[0]||d==numeros[1]||d==numeros[2]){
        vacas++;
        }
        cout<<"Toros: "<<toros<<endl<<"Vacas: "<<vacas<<endl;
    }
    toros=0;
    cout<<"Gano, desea continuar:"<<endl;
    cin>>continuar;
    numeros.clear();
    }
    return 0;
}
