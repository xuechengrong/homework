#include <iostream>
using namespace std; 
int huiwen(int n)
{
	int m=0,a,d;
	d=n;
	while(n!=0)
	{
	a=n%10;
    m=m*10+a;
    n=n/10;
		}
		if(m==d)
			return 1;
			else return 0;
}
int main()
{
	int n,m,k,d=0,f,c,b[1000],j=0;
	cin>>n;
	for(int i=0;i<n;i++)
	{		cin>>m>>k;
	}
	f=m+1;
	while(d!=k)
	{
		c=0;
		c=huiwen(f);
		if(c==1)
		{
			b[j]=f;
			j++;
			d++;
		}
		f++;
	}
	for(int i2=0;i2<j;i2++)
	{
		cout<<b[i2];
		cout<<' ';
	}
	return 0;
	
}
