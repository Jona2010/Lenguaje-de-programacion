#include <iostream>
using namespace std;

void f()
{
	
}

void g()
{
	f();
}

void h()
{
	int x=0;
	int y=x;
	g();
}

int main()
{
	h();
	cout<<h;
}
