#include <iostream>
using namespace std;
int main()
{
	int t;cin>>t;
	int *answer=new int[t];
	for (int j=0;j<t;j++)
	{
		int n,k;cin>>n>>k;
		int *a=new int[k];
		for (int i=0;i<k;i++)
		{
			cin>>a[i];
		}
		int max=0;
		for (int i=1;i<k;i++)
		{
			if(a[i]-a[i-1]>max)max=a[i]-a[i-1];
		}
		if(a[0]-1>max) max=a[0]-1;
		if(n-a[k]>max) max=n-a[k];
		answer[j]=max+1;
	}
	for (int j=0;j<t;j++)
	{
		cout<<answer[j]<<'\t';
	}
	return 0;
}
