#include <stdio.h>
double pingshu(int a[6])
{
	int n=0;
	double m;
	for(int i=0;i<6;i++)
	{
		n=a[i]+n;
	}
	m=n/6.00;
	return m;
}
int main()
{
	int a[100][10];
	int n,i5=0;
	double c[100],d[100],s=0;
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		for(int i1=0;i1<6;i1++)
		scanf("%d",&a[i][i1]);
	}
	for(int i2=0;i2<n;i2++)
	{
		s=0;
		c[i2]=pingshu(a[i2]);
		for(int i3=0;i3<6;i3++)
		{
			s=s+(a[i2][i3]-c[i2])*(a[i2][i3]-c[i2]);
		}
		d[i5]=s/6.00;
		i5++;
	}
	for(int i4=0;i4<n;i4++)
	{
		printf("%.2f %.2f",c[i4],d[i4]);
		printf("\n");
	}
	return 0;
	
}

