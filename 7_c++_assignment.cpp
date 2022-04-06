#include<iostream>
using namespace std;
int gcd(int ,int);

int gcd(int l,int b)
{
	if(l==0 || b==0){
	return 0;
}

if(l==b)
	{
	return l;
	}
	
	if(l>b)
	{
	return gcd(l-b,b);
	}
	return gcd(l,b-l);
}

int main()
{
	int l,b;
	int min;
	int res;
	cout<<"enter length and breadth\n";
	cin>>l;
	cin>>b;
	min=gcd(l,b);
	res=(l/min) * (b/min);
	cout<<"answer= "<<res<<endl;
	return 0;
}

