#include <iostream>
#include <vector>
using namespace std;

int main()
try
{
    vector<string>nombres;
    string nombre;
    int x;
    while(cin>>nombre>>x){
        if(name!="SinNombre" && n!=0){
            if(nombres.size()==0){
                nombres.push_back(nombre);
            }
            else{
                for(int i=0; i<nombres.size();i++){
                    if(nombre==nombres[i]){
                        throw runtime_error("nombre repetido");
                    }
                }
                nombres.push_back(nombre);
            }
        }
        else{
            return 0;
        }
    }
}
catch(exception & e){
    cerr<<"error: "<<e.what()<<endl;
    return 1;
}
