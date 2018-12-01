#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

int main()
{
	vector<double> temps;
	double temp;
	
	while(cin>>temp)
	{
		temps.push_back(temp);
	}
	
	if(temps.size()%2!=0)
	{
		sort(temps.begin(),temps.end());	
		cout<<"Median temperature: "<<temps[temps.size()/2]<<endl;	
	}
	
	else
	{
		sort(temps.begin(),temps.end());	
		cout<<"Median temperature: "<<((temps[temps.size()/2]-1)+(temps[temps.size()/2]))/2<<endl;	
	}

}
