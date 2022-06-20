#include<stdio.h>
int main(){
	int n;
	double sum1=2;
	double sum2=1;
	double temp;
	double sum=2;
	scanf("%d",&n);
	for(int i=1;i<n;i++){
		temp=sum2;
		sum2=sum1;
		sum1=sum1+temp;
		sum+=sum1/sum2;
	}
	printf("%.6f",sum);
}
