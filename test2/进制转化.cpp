#include <iostream>
using namespace std;
int main()
{
	int n;
	int jingzhi[10000];
	int c[10000],i3=0;
	unsigned int data[10000];
	cin>>n;
	for(int i=0;i<n;i++)
	{
		cin>>data[i]>>jingzhi[i];
	}
	for(int i1=0;i1<n;i1++)
	{
	   i3=0;
 	while(data[i1]>0)
 	{
 		c[i3]=data[i1]%jingzhi[i1];
 		data[i1]=data[i1]/jingzhi[i1];
 		i3++;
	 }
	 for(int i4=0;i4<i3;i4++)
	 {
	 	cout<<c[i4];
	 }
	 cout<<'\n';}
	return 0;
 } 
 
