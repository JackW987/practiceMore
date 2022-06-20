#include<stdio.h>
int main(){
	float a=2;
	float b=3;
	int n;
	float x=1;
	float y=2;
	float son;
	float mom;
	float sum;
	sum=3.5;
	scanf("%d",&n);
	if(n==1){
		printf("2.00");
	}
	else if(n==2){
		printf("1.50");
	}
	else{
		for(int i=2;i<n;i++){
			son=a+b;
			a=b;
			b=son;
			mom=x+y;
			x=y;
			y=mom;
			sum+=son/mom;
		}
		printf("%.2f",sum); 
	}
	return 0;
}
