#include <iostream>
using namespace std;
int main()
{
	int a[101][101],n,i,min1,min3,min4,min2,i2,i1,i3,i4,flag=0;
	cin>>n;
	for(i=0;i<n;i++)
{
 	for(i1=0;i1<n;i1++)
	cin>>a[i][i1];
 }
for(i3=0;i3<n;i3++)
{
	min2=99999999;min1=0;
	for(i2=0;i2<n;i2++)
	{
	if(a[i3][i2]>min1)
	{
	min1=a[i3][i2];
	min3=i2;}
	else continue;}
	for(i4=0;i4<n;i4++)
	{
		if(a[i4][min3]<min2)
		{
		min2=a[i4][min3];
		min4=i4;}
	}
	if(min4==i3)
	{
		flag++;
		cout<<i3<<' '<<min3;
	}}
if(flag==0)
cout<<'NO';
	return 0;
	
 } 
