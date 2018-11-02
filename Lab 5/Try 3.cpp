#include <iostream>
#include <vector>
using namespace std;

int main()
{
    vector<string>palabras;
    palabras.push_back("hola");
    palabras.push_back("ella no te ama");
    palabras.push_back("ella no te ama");
    palabras.push_back("xd");
    palabras.push_back("ella no te ama");
    string moda;
    int a=0;
    int b=0;
    for(int i=0; i<palabras.size();i++){
        for(int j=i; j<palabras.size(); j++){
            if(palabras[i]==palabras[j]){
                a++;
            }
        }
        if(a>b){
            moda=palabras[i];
            b=a;
        }
        a=0;
    }
    cout<<"La moda es: "<<moda<<endl;
    return 0;
}
