#include <stdio.h>
#include <string.h>
int main()
{
 char a[100],ch;
 int i=0,s=0;
  while(1)
  {
  	ch=getchar();
  	if(ch!='\n')
  	{
	  a[i]=ch;
  	i++;}
  	else break;
  }
  for(int i1=0;i1<i;i1++)
  {
  	if(a[i1]==' '||a[i1]=='.')
  	{
  		printf("%d ",s);
  		s=0;
	  }
  	else s++;
  }
 return 0;
}
