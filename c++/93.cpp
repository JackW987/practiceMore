#include<stdio.h>
int main(){
	int m,n;
	int sum=0;
	int sumT=0;
	scanf("%d%d",&m,&n);
	for(int i=m;i<=n;i++){
		for(int j=1;j<=i/2;j++){
			if(i%j==0){
				sum+=j;	
			}
		}
		if(sum>=m && sum<=n){
			for(int k=1;k<=sum/2;k++){
				if(sum%k==0){
					sumT+=k;
				}
			}
		}	
		if(sum!=i && sumT==i && sum>sumT){
			printf("%d %d\n",i,sum);
		}
		sum=0;
		sumT=0;
	}
	return 0; 
} 
