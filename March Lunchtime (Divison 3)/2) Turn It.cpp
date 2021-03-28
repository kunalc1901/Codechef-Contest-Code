#include <iostream>
#include <math.h>
#define lli long long int
using namespace std;

int main()
{
	lli test;
	cin>>test;
	
	while(test--)
	{
		lli u,v,a,s,exp;
		cin>>u>>v>>a>>s;
		
		exp = (u*u)-(2*a*s);
		
		if(u==1 && v==1)
		cout<<"Yes"<<endl;
		else
		{
			if(sqrt(exp)>v)
			cout<<"No"<<endl;
			else
			cout<<"Yes"<<endl;		}
	}
}