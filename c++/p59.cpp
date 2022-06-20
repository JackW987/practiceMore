#include<stdio.h>
int main(){
	int a;
	int b;
	scanf("%d%d",&a,&b);
	int max;
	int min;
	int sum; 
	int sumM;
	if(a>b){
		max=a;
		min=b;
	}
	else{
		max=b;
		min=a;
	}
	for(int i=max;i<=a*b;i++){
		if(i%a==0 && i%b==0){
			sumM=i;
			break;
		}
	}
	sum=(a*b)/sumM;
	printf("%d %d",sumM,sum);
}
