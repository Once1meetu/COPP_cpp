#include<iostream>
using namespace std;
int main()
{
	int n,max=0;cin>>n;
	int*a=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max)max=a[i];
	}
	cout<<2*(n+max);
}
