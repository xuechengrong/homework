#include <stdio.h>
int main()
{
	int a,b,flag=0;
	scanf("%d/%d",&a,&b);
	printf("0.");
	while(a!=0&&flag<200)
	{
		a=a*10;
		printf("%d",a/b);
		a=a%b;
		flag++;
	}
	return 0;
	
}
