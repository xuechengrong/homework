#include <stdio.h>
int even(int n)
{
	if(n%2!=0)
	return 0;
	else 
	return 1;
}
int main()
{
	  int a[1000],i,c=0;
	 for(i=0;;i++)
	  {
			scanf("%d",&a[i]);
	  	if(a[i]==0)
	  	break;
		  	  }
	  for(int i2=0;i2<i;i2++)
	  {
	  	if(even(a[i2])==0)
	  	c=c+a[i2];
	  }
	  printf("%d",c);
	  return 0;
 } 
