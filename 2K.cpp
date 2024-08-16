#include<iostream>
using namespace std;
int main()
{
	int n,sum1=0,sum2=0,max=0,m=-10000;cin>>n;
	int*a=new int[n];
	for(int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>0)
		{
			sum2+=a[i];
			if(max+sum1<0)
			{
				sum1=0;
				sum2=0;
			}
		}
		else
		{
			max+=sum2;
			sum2=0;
			sum1+=a[i];
			if(a[i]>m)m=a[i];
		} 
	}
}
