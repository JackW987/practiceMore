#include<stdio.h>
#include<string.h> 
int main(){
	int n,sum,b;
	while(scanf("%d",&n)!=EOF && n!=0){
		sum=0;
		for(int i=0;i<n;i++){
			scanf("%d",&b);
			sum+=b;
		}
		printf("%d\n",sum);
	}
	return 0;
}
