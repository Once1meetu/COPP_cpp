#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int a,b;
	cin>>a>>b;
	while(a!=b)
	{
		if(a>b)
		{
			if(a%2==0)a/=2;
			else 
			{
			a-=1;
			a/=2;
			}
		}
		if(b>a)
		{
			if(b%2==0)b/=2;
			else 
			{
				b-=1;
				b/=2;
			}
		}
	}
	cout<<a;
}
