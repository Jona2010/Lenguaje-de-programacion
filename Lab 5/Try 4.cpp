#include <iostream>
#include <math.h>
using namespace std;

int main()
try
{
    double a;
    double b;
    double c;
    double respuesta;
    double x;
    double y;
    cout<<"Ingrese los coeficientes:"<<endl;
    cout<<"Ingrese a: "<<endl;
    cin>>a;
    cout<<"Ingrese b:"<<endl;
    cin>>b;
    cout<<"Ingrese c:"<<endl;
    cin>>c;
    respuesta=(b*b)-(4*a*c);
    if(respuesta<0){
        throw runtime_error("Respuesta imaginaria");
    }
    x=(-b+sqrt(diferencial))/(2*a);
    y=(-b-sqrt(diferencial))/(2*a);
    cout<<"Tus respuestas son: "<<x<<" y "<<y;
    return 0;
}
catch(exception & e){
    cerr<<"error: "<<e.what()<<endl;
    return 1;
}
