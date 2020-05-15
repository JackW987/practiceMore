#include<stdio.h>
int main(){
	int N,k,L,i;
	while(scanf("%d %d %d",&N,&k,&L)!=EOF){
		if(N==0&&k==0&&L==0){
			break;
		}
		for(i=2;i<N;i++){
			if((k-k/2+k)>L){
				break;
			}
			else{
				k=k-k/2+k;
			}
		}
		printf("%d\n",k);
	}
	return 0;
}


