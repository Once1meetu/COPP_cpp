#include<iostream>
#include<string>
using namespace std;
int main()
{
	int n; cin>>n;
	string a; cin>>a;
	int j=n/11,k=0;
	for (int i=0;i<n;i++)
	{
		if(a[i]=='8')k++;
	}
	(j>k)?cout<<k : cout<<j;
}
