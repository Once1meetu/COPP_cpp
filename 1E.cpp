#include <iostream>
#include<cmath>
using namespace std;
int main()
{
	int n;cin>>n;
	int *a=new int[n/2];
	for (int i=0;i<n/2;i++) cin>>a[i];
	int sum1,sum2;
	for (int i=0;i<n/2;i++)
	{
		sum1+=abs(2*i+1-a[i]);
		sum2+=abs(2*i+2-a[i]);
	}
	(sum1>sum2)?cout<<sum2 : cout<<sum1;
}
