#include <iostream>
#define lli long long int
using namespace std;

int main()
{
	int test;
	cin>>test;
	
	while(test--)
	{
	lli n,k,count=0,flag=0;
	string str;
	cin>>n>>k;
	cin>>str;
	
	for(lli i=0; i<n; i++)
	{
		if(str[i]=='*')
		{
			count++;
		}
		else
		count=0;
		if(count==k)
		{
			cout<<"YES"<<endl;
			flag=1;
			break;
		}
	}
	if(flag==0)
	cout<<"NO"<<endl;
	}
	
}