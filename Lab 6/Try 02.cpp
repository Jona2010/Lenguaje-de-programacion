#include<iostream>
#include<vector>
using namespace std;
void pri_intercambio(vector<int>x, vector<int>&y)
{
	for(int i=x.size()-1;i>=0;i--)
	{
		y.push_back(x[i]);
	}
}

void se_intercambio(vector<int>&x)
{
	int j=0;
	int num=0;
	for(int i=x.size()-1;i>=0;i--)
	{
		if(i<=j)
		{
			break;
		}
		num=x[i];
		x[i]=x[j];
		x[j]=num;
    j++;
	}
}

void print(vector<int> v){
	for (int i = 0; i < v.size(); ++i)
	{
		cout<<v[i];
	}
  cout<<endl;
}

int main()
{
	vector<int> numbers;
	numbers.push_back(0);
	numbers.push_back(1);
	numbers.push_back(2);
	numbers.push_back(3);
	numbers.push_back(4);
	
	vector<int> numbers2;
	pri_intercambio(numbers, numbers2);
	
	print(numbers);
	print(numbers2);
  	print(numbers);
	se_intercambio(numbers);
	print(numbers);
	return 0;
}
