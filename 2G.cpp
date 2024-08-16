#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int x,y;
	cin>>x>>y;
	(abs(x-y)<4)? cout<<abs(x-y)<<'\t'<<7-abs(x-y):cout<<7-abs(x-y)<<'\t'<<abs(x-y);
}
