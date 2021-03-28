#include <iostream>
#include <algorithm>
#define lli long long int
using namespace std;

int main()
{
	lli test;
	cin>>test;
	
	while(test--)
	{
		lli n,k,sum=0,flag=0;
		cin>>n;
		lli arr[200000];
		
		for(lli i=0; i<n; i++)
		cin>>arr[i];
		
		sort(arr,arr+n);
		for(k=0; k<n; k++)
		{
			if(arr[k]>(k+1))
			{
				flag=1;
				break;	
			}
			sum += k-arr[k]+1;
		}
		if(flag=0)
		cout<<"Second"<<endl;
		else
		{
		if(sum%2)
		cout<<"First"<<endl;
    	else
		cout<<"Second"<<endl;
		}
	}
	return 0;
}