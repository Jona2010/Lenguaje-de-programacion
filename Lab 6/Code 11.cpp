#include <iostream>
#include <cmath>
#include <vector>
using namespace std;

int g(int& x);
int f(int& x);
void h(int x,int y)
{
	int i=7;
	int&r=i;
	r=9;
	i=10;
	
	cout<<r<<" "<<i<<'\n';
	
	vector<vector<double> > v;
	
	double val=v[f(x)][g(y)];
	double& var=v[f(x)][g(y)];
	var=var/2+sqrt(var);
	
	cout<<var<<endl;
}

int main()
{
	int xx=0;
	cout<<g(xx)<<endl;
}

