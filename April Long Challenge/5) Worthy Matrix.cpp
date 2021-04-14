#include <iostream>
#define lli long long int
using namespace std;

int main()
{
	lli test;
	cin>>test;
	
	while(test--)
	{
	ios_base::sync_with_stdio(false);
		cin.tie(0);
		cout.tie(0);
		lli n,m,k,count=0,min,sum;
		cin>>n>>m>>k;
		lli arr[n+1][m+1];
		for(lli i=0; i<=n; i++)
		{
			for(lli j=0; j<=m; j++)
			{
				if(i==0 || j==0)
				arr[i][j]=0;
				else
				cin>>arr[i][j];
			}
		}
		
		for(lli i=1; i<=n; i++)
		{
			for(lli j=1; j<=m; j++)
			arr[i][j]+=arr[i][j-1];
			for(lli j=1; j<=m; j++)
			arr[i][j]+=arr[i-1][j];			
		}
		for(lli d=1; d<=n; d++)
		{
		for(lli i=1; i<=(n+1-d); i++)
		{
			lli l=1,h,mid,flag,x=0;
			h=m+1-d;
			
			while(l<=h)
			{
				mid = (l+h)/2;
				sum = arr[i-1+d][mid+d-1]-arr[i+d-1][mid-1]-arr[i-1][mid-1+d]+arr[i-1][mid-1];
				if(sum>=k*d*d)
				{
					h=mid-1;
					flag=mid;
					x=1;
				}
				else
				l=mid+1;
			}
			if(x==1)
			count += (m-flag-d+2);
		}
		}
		cout<<count<<endl;	
	}
}