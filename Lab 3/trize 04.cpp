#include <iostream>
using namespace std;

char letra(char x)
{
	return x;
}

int main()
{
	for(int i=97;i<123;i++)
	{
		cout<<i<<'\t'<<letra(i)<<'\n';
	}
	for(int i=65;i<91;i++)
	{
		cout<<i<<'\t'<<letra(i)<<'\n';
	}
	for(int i=48;i<58;i++)
	{
		cout<<i<<'\t'<<letra(i)<<'\n';
	}
}
