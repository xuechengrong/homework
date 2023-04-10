#include <stdio.h>
int main()
{
	unsigned int nian,yue,ri;
	long long int tian=0;
	int d;
     scanf("%d" "%d" "%d",&nian,&yue,&ri);
	tian=tian+366*((nian-1900)/4)+365*(nian-1900-(nian-1900)/4);
	if(yue>2)
	{
			if(yue>8)
			tian=tian+((yue-8)/2)*30+60+(yue-8-(yue-8)/2)*31+31*3+30*2;
			else
			tian=tian+((yue-3)/2)*30+60+(yue-3-(yue-3)/2)*31;
	}
	else
	{
		tian=tian+(yue-1)*31;
	}
	if(nian%4!=0)
			tian=tian-1;
	tian=tian+ri;
	d=tian%7-1;
		if(d==0)
		printf("Monday");
	else if(d==1)
			printf("Tuesday");

		else if(d==2)
					printf("Wednesday");
				else if(d==3)
						printf("Thursday");
						else if(d==4)
							printf("Friday");
else if(d==5)
								printf("Saturday");
				else if(d==6)
									printf("Sunday");
	return 0;
}
