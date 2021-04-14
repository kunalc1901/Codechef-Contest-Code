#include <iostream>
#define lli long long int
#include <string>
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

bool isSubSeq(string str1,string str2, lli m, lli n)
{
	lli j=0;
	for (lli i=0; i<n && j<m; i++)
	{
	     if (str1[j] == str2[i])
         j++;
	}
    return (j == m);
}

int main()
{
	ios_base::sync_with_stdio(false);
	cin.tie(NULL);
	cout.tie(NULL);
	lli test;
	cin>>test;
	
	while(test--)
	{
		string str;
		cin>>str;
		lli i=0,m,n;
		m=str.size();
		while(i<=stoll(str,nullptr,2))
		{
			 string num = dToB(i);
			 n=num.size();
			 if(!(isSubSeq(num,str,n,m)))
			 {
			 	cout<<dToB(i)<<endl;
			 	break;
			 }
			 else
		 	i++;			 
		}
	}
}