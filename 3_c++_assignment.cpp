#include<iostream>
#include<string>

using namespace std;
	int maximum(int [],int );
	string swap(string ,int,int);
	int countStr(string);

string swap(string s,int a,int b)
{
	string temp;
	temp[0]=s[a];
	s[a]=s[b];
	s[b]=temp[0];
	return s;
}

int countStr(string c)
{
	int len;
	int count=0;
	len=c.length();
	for(int i=1;i<len;i++)
	{
	if(c[i-1]=='0' && c[i]=='1')
		{
			count=count+1;
		}
	}
	return count;
}

int maximum(int a[],int len)
{
	int x=0;
	for(int i=0;i<len;i++)
	{
		if(a[i]>x)
		{
			x=a[i];
		}
	}
	return x;
}

int main()
{
	string str;
	cout<<"Enter Binary String: \n";
	cin>>str;
	int len=str.length();
	int a,b,count=0;
	string sw;
	int res[300];
	for(int i=0;i<len;i++)
	{
		for(int j=i;j<len;j=j+2)
		{
			sw=swap(str,i,j);
			res[count]=countStr(sw); 
			count++;
		}
	}

	cout<<"Answer: "<<maximum(res,count)<<endl;
	return 0;
}
