#include <iostream>
#include <stdio.h>
using namespace std;
int main()
{
	int a[4];
	int i=0,n;
	cin>>n;
	while(n>0)
	{
		a[i]=n%10;
		n=n/10;
		i++;
	}
	 if(i-1==1)
	 {
	 	printf("16%d%d",a[1],a[0]);
	 }
	 else if(i-1==0)
	 {
	 	printf("16%d",a[0]);
	 }
	 else if(i-1==3)
	 {
	 		printf("%d%d%d",a[3]*10+a[2]-8,a[1],a[0]);
	 }
	 else {
	 	if(a[2]>8)
	 	{
	 		printf("%d%d%d",a[2]-8,a[1],a[0]);
		 }
		 else if(a[2]==8)
		 {
		 	if(a[1]==0)
		 	printf("%d",a[0]);
		 	else printf("%d%d",a[1],a[0]);
		 }
		 else {
		 	printf("%d%d%d",16+a[2],a[1],a[0]);
		 }
	 }
	 return 0;
	 
}
