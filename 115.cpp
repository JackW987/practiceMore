#include<stdio.h>
#include<math.h>
int main(){
	long sum=0;
	int n;
	while(scanf("%d",&n)!=EOF){
		for(int i=0;i<n;i++){
			sum+=pow(2,i);
		}
		printf("%ld %d\n",sum,n*100000);
		sum=0;
	}
	return 0;
} 
