#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	double s,p;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF){
		p=(double)(a+b+c)/2;
		s=sqrt(p*(p-a)*(p-b)*(p-c));
		printf("%.2lf\n",s);
	}
	return 0;
}
