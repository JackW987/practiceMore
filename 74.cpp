#include<stdio.h>
#include<math.h>
int main(){
	float n;
	float a;
	float b;
	float sum;
	scanf("%f",&n);
	a=n/2;
	sum=1;
	while(sum>0.00001){
		b=(a+n/a)/2;
		sum=fabs(b-a);
		a=b;
	}
	printf("%.3f",a);
}
