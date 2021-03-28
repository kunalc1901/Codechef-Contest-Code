#include <iostream>
#include <string>
using namespace std;

int main()
{
	int test;
	cin>>test;
	
	while(test--)
	{
		string str;
		cin>>str;
		
		for(long int i=0; i<str.size(); i++)
		{
			if(str.substr(i,5)=="party")
			{
				str[i]='p';
				str[i+1]='a';
				str[i+2]='w';
				str[i+3]='r';
				str[i+4]='i';
			}
		}
		cout<<str<<endl;
	}
}