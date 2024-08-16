#include<iostream>
using namespace std;
int main()
{
	int n,m=0,l=0;cin>>n;
	int*a=new int[n];
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]==100)m++;
		else l++;
	}
	(m>l)?cout<<m:cout<<m+(l-m)/3+((l-m)%3!=0);
}
