#include <iostream>
using namespace std;

int main() {
	// your code goes here
	int a,b,c;
	cin>>a>>b>>c;
	
	if(a==b)
	cout<<"YES"<<endl;
	else if(b==c)
	cout<<"YES"<<endl;
	else if(a==c)
	cout<<"YES";
	else
	cout<<"NO";
	return 0;
}
