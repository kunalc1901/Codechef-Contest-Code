#include <iostream>
#include <math.h>
#define lli long long int
using namespace std;

string dToB(lli n) 
{
	if(n==0)
	return "0";
	lli num[32];
	lli i = 0; 
	string s="";
	while(n > 0)
	{ 
		num[i] = n % 2; 
		n = n / 2; 
		i++; 
	} 
	for (lli j = i - 1; j >= 0; j--) 
	s += to_string(num[j]); 
	return s;
} 

int main()
{
	lli test;
	cin>>test;
	
	while(test--)
	{
		lli n,d;
		string ns,a="",b="";
		cin>>n;
		ns = dToB(n);
		d = ceil(log2(n));
		
				
		for(lli i=0; i<ns.size(); i++)
		{
			a += "x";
			b += "x";
		}
		
		for(lli i=0; i<ns.size(); i++)
		{
			if(ns[i]=='0')
			{
				a[i]='1';
				b[i]='1';
			}
			else
			{
				if(i==0)
				{
					a[i]='1';
					b[i]='0';
				}
				else
				{
					a[i]='0';
					b[i]='1';
				}
			}
		}
		cout<<stoll(a,nullptr,2)*stoll(b,nullptr,2)<<endl;
		
	}
}