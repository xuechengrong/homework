#include <iostream>
using namespace std; 
int main()
{
	int n;
	cin>>n;
	int a[100][100]={0};
	for(int i=0;i<n;i++)
	{
		a[i][0]=1;
		a[i][1]=1;
	}
	for(int i1=2;i1<n;i1++)
	{
		for(int i2=1;i2<=i1;i2++)
		{
			a[i1][i2]=a[i1-1][i2-1]+a[i1-1][i2];
		}
	}
	for(int i3=0;i3<n;i3++)
	{
		for(int i4=0;i4<=i3;i4++)
		cout<<a[i3][i4]<<' ';
		cout<<'\n'; 
	}
	return 0;
}
