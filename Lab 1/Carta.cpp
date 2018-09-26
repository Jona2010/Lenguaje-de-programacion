#include <iostream>
#include <string>
using namespace std;

int main()
{
	string first_name;
	string answer;
	string name;
	int sexo;
	int edad;
	cout<<"Dear\n";cin>>first_name;
	cout<<"¿How are you?\n";
	cin>>answer;
	cout<<"¿Have you seen ";
	cin>>name;cout<<"latdy?\n";
	
	cout<<"Select 1(Male) or 2(Female):\n";
	cin>>sexo;
	if(sexo==1)
	{
		cout<<"If you see "<<name<<" ,please ask him to call me\n";
	}
	else
	{
		cout<<"If you see "<<name<<" ,please ask her to call me\n";
	}
	
	cout<<"Enter your age:\n";
	cin>>edad;
	if(edad<12)
	{
		cout<<"Next year you be \n"<<edad+1;
	}
	if(13<=edad<=18)
	{
		cout<<"You are able to vote\n";	
	}
	if(edad>18)
	{
		cout<<"I hope you are enjoying retirement\n";
	}
	
	cout<<"Your sincerely\n";
	cout<<first_name;	
}
