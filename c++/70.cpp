#include<stdio.h>
int main(){
	int x;
	int sum;
	scanf("%d",&x);
	if(x<=100000){
		sum=x*0.1;
		printf("%d",sum);
	}
	else if(x>100000 && x<=200000){
		sum=10000+(x-100000)*0.075;
		printf("%d",sum);
	}
	else if(x>200000 && x<=400000){
		sum=17500+(x-200000)*0.05;
		printf("%d",sum);
	}
	else if(x>400000 && x<=600000){
		sum=27500+(x-400000)*0.03;
		printf("%d",sum);
	}
	else if (x>600000 && x<1000000){
		sum=33500+(x-600000)*0.015;
	}
	else{
		sum=(x-1000000)*0.01;
	}
	return 0;
}
