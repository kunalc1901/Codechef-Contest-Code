#include <iostream>
using namespace std;

int main()
{
	int n,h,x,k,arr[1000];
	cin>>n>>h>>x;
	
	for(int i=0; i<n; i++)
	cin>>arr[i];
	
	for(k=0; k<n; k++)
	{
		if((arr[k]+x)>=h)
		{
			cout<<"YES"<<endl;
			break;
		}
	}
	if(!((arr[k]+x)>=h))
	cout<<"NO"<<endl;
	return 0;
}