#include <stdio.h>
int main()
{
	int n;
	scanf("%d",&n);
	int a[20],d[10];
	int c=0,m=0,i4=0;
	for(int i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(int i1=0;i1<n;i1++)
	{
		for(int i2=1;i2<n-i1;i2++)
		{
			if(a[i1]==a[i1+i2])
			{
				c=c+1;
			}
		}
		if(c==1)
		{
		d[i4]=a[i1];
		m=m+1;
		i4++;}
		c=0;
	}
	if(m==0)
	printf("none");
	else{
		for(int i6=0;i6<i4;i6++)
		{
			printf("%d ",d[i6]);
		}
	}
	return 0;
}
