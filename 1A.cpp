#include<iostream>

using namespace std;
int main()
{
	int n;cin>>n;
	int *a=new int [n],max=0,min=1000000001;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
		if(a[i]>max) max=a[i];
		if(a[i]<min) min=a[i];	
	}
	cout<<max-min+1-n;
}
