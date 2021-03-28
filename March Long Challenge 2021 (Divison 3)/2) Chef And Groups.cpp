#include <iostream>
#define lli long long int
using namespace std;

int main()
{
	lli test;
	cin>>test;
	
	while(test--)
	{
		string s;
		lli count=0;
		cin>>s;
		
		for(lli i=0; i<s.size(); i++)
		{
			if(i==0 && s[i]=='1')
			count++;
			
			else if(i!=0 && i!= s.size()-1 && s[i-1]=='0' && s[i]=='1')
			count++;
			
			else if(i==s.size()-1 && s[i-1]=='0' && s[i]=='1')
			count++;

		}
		cout<<count<<endl;
	}
	return 0;
}
