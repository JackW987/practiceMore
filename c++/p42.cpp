#include<stdio.h>
#include<math.h>
int main(){
	int a,b,c;
	float x,y;
	float delt;
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	delt=sqrt(pow(b,2)-4*a*c);
	x=(-1*b+delt)/(2*a);
	y=(-1*b-delt)/(2*a);
	printf("%.2f %.2f",x,y);
}
