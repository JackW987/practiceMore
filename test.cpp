#include <stdio.h>
#include <math.h>
int main(){
	int n;
	while(scanf("%d",&n)!=EOF){
		long long sum1,sum2;
		sum1=pow(2,n)-1;
		sum2=n*100000;
		printf("%lld %lld\n",sum1,sum2);
	}
}
