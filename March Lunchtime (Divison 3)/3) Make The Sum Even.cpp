#include <iostream>
#define lli long long int
using namespace std;

int linearSearch(lli arr[],lli size,lli key)
{
	if(arr[size]==key)
	return 1;
	else if(size<0)
	return 0;
	else
	return linearSearch(arr,size-1,key);
}

int main()
{
	lli test;
	cin>>test;
	
	while(test--)
	{
		lli n,sum=0,arr[100000];
		cin>>n;
		
		for(lli i=0; i<n; i++)
		{
			cin>>arr[i];
			sum += arr[i];
		}
		if(sum%2==0)
		cout<<0<<endl;
		else if(linearSearch(arr,n,2))
				cout<<1<<endl;
		else
		cout<<-1<<endl;		
	}
}