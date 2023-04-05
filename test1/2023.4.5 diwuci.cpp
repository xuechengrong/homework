#include  <stdio.h>
#include <string.h>
int main()
{
 int b[25];
 for(int i4=0;i4<25;i4++)
 b[i4]=1;
 int i2=0;
 int c=0;
 int m=0;
 int n=26;
 char a[10000];
 int t;
 scanf("%s",&a);
 for(int i1=0;i1<strlen(a);i1++)
 {
  if(a[i1]=='0')
  {
   continue;
  }
 else {
 for(int i=1;i<strlen(a)-i1;i++)
 {
  if(a[i1]==a[i1+i])
  {
  b[i2]=b[i2]+1;
  a[i1+i]='0';}
  }
 i2++;}
    }
    for(int i5=0;i5<strlen(a);i5++)
    {
     if(a[i5]!='0')
     {
      c++;
  }
 }
    for(int i6=0;i6<c-1;i6++)
    {
     for(int j=0;j<c-i6-1;j++)
     {
      if(b[j]>b[j+1])
      {
       t=b[j+1];
       b[j+1]=b[j];
       b[j]=t;
   }
  }
 }
 for(int i9=c-1;i9>=0;i9--)
 {
  m=n*b[i9]+m;
  n--;
 }
 printf("%d",m);
 return 0;
 }
