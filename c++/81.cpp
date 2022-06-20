#include<stdio.h>
struct dating{
	int y,m,d;
}; 
int main(){
	struct dating test;
	int dayN[12]={31,28,31,30,31,30,31,31,30,31,30,31};
	int dayR[12]={31,29,31,30,31,30,31,31,30,31,30,31};
	int a,b,c,sum;
	sum=0;
	scanf("%d%d%d",&test.y,&test.m,&test.d);
	if((test.y%4==0 && test.y%100!=0) || test.y%400==0){
		for(int i=0;i<test.m-1;i++){
			sum=dayR[i]+sum;
		}
	}
	else{
		for(int i=0;i<test.m-1;i++){
			sum=dayN[i]+sum;
		}
	}
	printf("%d",sum+test.d);
}
