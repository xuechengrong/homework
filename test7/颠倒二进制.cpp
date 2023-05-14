#include <stdio.h>
#include <string.h> 
int main()
{
	 char a[50];
	 int i;
	 scanf("%s",a);
	 for(i=0;i<strlen(a);i++)
	 {
	 	printf("%c",a[strlen(a)-1-i]);
	 }
	 return 0;
}
