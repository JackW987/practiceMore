#include <stdio.h>
#include <math.h>
int main(){
	int a,b,c;
	double S,p;
	scanf("%d %d %d",&a,&b,&c);
	p=(a+b+c)/2.0;
	S=sqrt(p*(p-a)*(p-b)*(p-c));
	printf("%.2lf",S);
	return 0;
}
