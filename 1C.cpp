# include <iostream>
using namespace std;
int main()
{
	int n;cin>>n;
	int * a=new int[n];
	int k=0,sum=0,min,p;
	for (int i=0;i<n;i++)
	{
		cin>>a[i];
		sum+=a[i];
	}
	while(sum<4.5*n)
	{
		min=5;
		for(int i=0;i<n;i++)
		{
			if(a[i]<min)
			{
				min=a[i];p=i;
			}
		}
		switch (a[p])
		{
			case 1:
				sum+=4;
				k++;
				break;
			case 2:	
				sum+=3;
				k++;
				break;
			case 3:
				sum+=2;
				k++;
				break;
			case 4:
				sum+=1;
				k++;
				break;
		}		
	}
	cout<<k;
}
