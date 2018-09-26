#include <iostream>
using namespace std;

char letra(char x)
{
	return x;
}

int main()
{
	int i=97;
	while (i<123)
	{
		cout<<letra(i)<<'\t'<<i<<'\n';
		i++;
	}
}
