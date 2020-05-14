#include<stdio.h>
#include<math.h>
int prime(int x){
	 for(int i=2;i<=sqrt(x);i++){
	 	if(x%i==0){
	 		return 0;
		}
	 }
	 return 1;
}
int main(){
	int n,k;
	k=1;
	while(scanf("%d",&n)!=EOF){
		if(n==1){
			printf("Case #%d: I'm richer than any one\n",k);
		}
		else{
			if(prime(n)){
				printf("Case #%d: I'm richer than any one\n",k);
			}
			else{
				printf("Case #%d: What a fxcking day\n",k);
			}
		} 
		k++;
	}
	return 0;
} 
