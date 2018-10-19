#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	unsigned long long grano;
	
	for(int i=1;i<=64;i++)
	{
		grano=pow(2,i-1);	
		
		if(grano<=1000)
		{
			cout<<i<<endl;
		}
		
		else if(grano<=1000000)
		{
			cout<<i<<endl;
		}
		
		else if(grano<=1000000000)
		{
			cout<<i<<endl;
		}
		
	}
	return 0;
}
