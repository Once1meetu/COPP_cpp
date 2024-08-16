#include<iostream>
#include<algorithm>
#include<cmath>
using namespace std;
int main()
{
	int x1,x2,x3,x4,c;
	cin>>x1>>x2>>x3>>x4;
	if(x1>x2)
	{
		c=x1;
		x1=x2;
		x2=c;
	}
	if(x3>x4)
	{
		c=x3;
		x3=x4;
		x4=c;
	}
	c=min(x2,x4)-max(x1,x3)+1;
	(c>0)?cout<<c:cout<<0;
}
