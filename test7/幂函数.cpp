#include <stdio.h>
int main()
{
	int a[32],d=0,c[32];
	for(int i=0;i<32;i++)
	{
	scanf("%d",&a[i]);
	d=d+a[i]*pow(2,31-i);
}
printf("%d",d);
return 0;
 } 
