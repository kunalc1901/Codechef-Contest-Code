#include <iostream>
#define lli long long int
using namespace std;

int main()
{
	lli test;
	cin>>test;
	
	while(test--)
	{
		lli n,x,s,k,max=0;
		cin>>n>>x;
		
		for(int i=0; i<n; i++)
		{
			cin>>s>>k;
			if(s<=x)
			{
				if(max<k)
				max=k;
			}
		}
		cout<<max<<endl;
	}
}