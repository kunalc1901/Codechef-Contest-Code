#include <iostream>
#include <math.h>
using namespace std;

int main()
{
	long long int test;
	cin>>test;
	while(test--)
	{
	float k1,k2,k3,v,res,cons=9.58;
	cin>>k1>>k2>>k3>>v;
	res = k1*k2*k3*v;
	res = 100/res;
	float value = (int)(res * 100 + .5); 
    value = (float)value / 100;
	if(value<cons)
	cout<<"YES"<<endl;
	else
	cout<<"NO"<<endl;
	}
}