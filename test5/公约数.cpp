#include <stdio.h>
#define min(a,b)(a>b?b:a);
#define max(a,b)(a>b?a:b);
int gong(int a,int b)
{
	int i=min(a,b); 
	for(i;i>0;i--)
	{
		if(a%i==0&&b%i==0)
		return i;
		else continue;
	}

 } 
 int bie(int a,int b)
 {
 	int i=max(a,b)
 	for(i;;i++)
	{
		if(i%a==0&&i%b==0)
		return i;
		else continue;
	}
 }
 int main()
 {
 	int a,b;
 	scanf("%d %d",&a,&b);
 	printf("%d %d",gong(a,b),bie(a,b));
 	return 0;
 }
