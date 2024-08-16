#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int a;
	cin>>a;
	a/=100*1000;
	cout<<a-(a/1000)*1000;
}
