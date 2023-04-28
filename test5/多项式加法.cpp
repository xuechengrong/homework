#include <iostream>
using namespace std;
struct note{
	int x;
	int y;
};
int main()
{
	int n,i3;
 struct note a[101];
 struct  note c[10];
	cin>>n;
	for(int i5=0;i5<10;i5++)
	{
	c[i5].y=0;
	c[i5].x=0;}
	for(int i=0;i<n;i++)
	{
	cin>>a[i].y>>a[i].x;
}
	for(int i1=0;i1<n;i1++)
	{
		c[a[i1].y].x++;
		c[a[i1].y].y=c[a[i1].y].y+a[i1].x;
	}
	for(i3=9;i3>=0;i3--)
	{
		if(c[i3].x!=0&&c[i3].y!=0)
		{
			break;
		}
	}
	printf("%dx%d",c[i3].y,i3);
	for(int i4=i3-1;i4>0;i4--)
	{
		if(c[i4].x!=0&&c[i4].y>0)
		{
		printf("+%dx%d",c[i4].y,i4);
		}
		if(c[i4].x!=0&&c[i4].y<0)
		{
		printf("-%dx%d",c[i4].y,i4);
		}
	}
	if(c[0].x!=0)
	{
		if(c[0].y>0)
		printf("+%d",c[0].y);
		else if(c[0].y<0)
	printf("-%d",c[0].y);
	}
	return 0;
}
