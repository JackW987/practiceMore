#include<stdio.h>
#include<math.h> 
int main(){
	float sum;
	int n,k;
	k=1;
	while(scanf("%d",&n)!=EOF){
		if(n<=3){
			sum=5;
		}
		else{
			n-=3;
			sum=5+n*1.5;
			sum=ceil(sum); 
		}
		printf("Case #%d: %.0f\n",k,sum);
		k++;
	}
	return 0;
} 
