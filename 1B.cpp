#include<iostream>
using namespace std;

long long Nod(long long a,long long b)
{
    while (a && b)
        if (a >= b)
           a %= b;
        else
           b %= a;
    return a | b;
}
 
int main()
{
   long long a,b,x,y;
   cin>>a>>b>>x>>y;
   long long z=Nod(x,y);
   x/=z;y/=z;//��������� �����
   a/=x;b/=y;//������� ��� ���������� �� �����, ������� �� ������
   (a>b)?cout<<b:cout<<a;
}
