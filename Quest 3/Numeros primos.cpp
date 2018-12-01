#include <iostream>
using namespace std;
int main()
{
   int a=0,i,n;
   cout<<"Ingrese el numero: "<<endl;
   cin>>n;
   
   for(i=1;i<=n;i++)
   {
   		for(int j=1;j<=i;j++)
   		{
   			if(i%j==0)
			{
				a++;
        	}
		}
		if(a==2)
		{	
			cout<<" "<<i;
		}
		a=0;
	}
}


