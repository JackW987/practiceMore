#include<stdio.h>
#include<string.h>
#include<math.h>
#include<ctype.h>
int main()
{
	char a[10][4]={"B","KB","MB","GB","TB"},temp[4];
	double b,n;
	int i,t;
	while(scanf("%lf",&n)!=EOF)
	{
		if(n==0) return 0;
		int t=0;
		scanf("%s",temp);
		for(i=0;i<5;i++)
		{
			if(strcmp(temp,a[i])==0)
			{
				t=i;
				break;
			}
		}
		switch(t)
		{
			case 0:b=0;break;
			case 1:b=n*(1024-1000);break;
			case 2:b=n*(1024*1024-1000*1000);break;
			case 3:b=n*(1024*1024*1024-1000*1000*1000);break;
			case 4:b=n*(pow(1024,4)-pow(1000,4));break;
			default:break;
		}
		printf("%.0f\n",b);
	}
	return 0;
 } 
