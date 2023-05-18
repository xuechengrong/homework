#include <stdio.h>
#include <string.h>
int mystrstr(char a[],char b[])
{
	int c=0;
	for(int i=0;i<strlen(a);i++)
	{
		c=0;
		for(int i1=0;i1<strlen(b);i1++)
		{
			if(a[i+i1]!=b[i1])
			c++;
		}
		if(c==0)
		{
			printf("%d",i);
			return 0;
		}
	}
	printf("-1");
	return 0;
}
int main()
{
	char a[20],b[20];
	scanf("%s",&a);
	scanf("%s",&b); 
	mystrstr(a,b);
}
