#include <iostream>
using namespace std;

int main()
{
	cout<<"Hello World\n";
	return 0;
}


/* 6	2	G:\C++ 2018\Lo basico.cpp	[Error] expected initializer before 'cout' ... Elimine una llave, lo cual genera que el programa no se ejecute
/* 4	11	G:\C++ 2018\Lo basico.cpp	[Error] '::main' must return 'int' ... Cambie el int por void, esto genera un error en el main
/* 6	2	G:\C++ 2018\Lo basico.cpp	[Error] 'cout' was not declared in this scope ... Al borrar la libreria std, nos dice que cout no esta declarado
/* 7	2	G:\C++ 2018\Lo basico.cpp	[Error] expected ';' before 'return' ... Borre un ; y no permite ejecutar el programa
/* 6	5	G:\C++ 2018\Lo basico.cpp	[Error] no match for 'operator<<' (operand types are 'std::istream {aka std::basic_istream<char>}' and 'const char [13]') ... Cambie el cout por cin 
/* 5	1	G:\C++ 2018\Lo basico.cpp	[Error] expected unqualified-id before '{' token ... Elimine el int main 
/* 6	8	G:\C++ 2018\Lo basico.cpp	[Error] 'Hello' was not declared in this scope ... Elimine las comillas al Hello World
/* 4	12	G:\C++ 2018\Lo basico.cpp	[Error] '::main' must return 'int' ... Reemplace el int por un float 
/* 6	2	G:\C++ 2018\Lo basico.cpp	[Error] 'cout' was not declared in this scope ... Borre el #include <iostream>
/* 7	2	G:\C++ 2018\Lo basico.cpp	[Error] return-statement with no value, in function returning 'int' [-fpermissive] ... Quite el 0
