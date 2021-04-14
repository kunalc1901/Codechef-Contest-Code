#include <iostream>
#define lli long long int
using namespace std;

int main()
{
	lli test;
	cin>>test;
	
	while(test--)
	{
		lli n,res[5],ans,q,rem,flag;
		cin>>n;		
		if(n==1)
		cout<<20<<endl;
		else if(n==2)
		cout<<36<<endl;
		else if(n==3)
		cout<<51<<endl;
		else if(n==4)
		cout<<60<<endl;
		else
		{
			res[0]=44;
			res[1]=16;
			res[2]=28;
			res[3]=39;	
			rem=n%4;
			q=n/4;
			ans = 60+(q-1)*44;
			if(rem!=0)
			ans = ans+res[rem];
			cout<<ans<<endl;
		}
	}
}