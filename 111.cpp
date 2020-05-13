#include<stdio.h>
int main(){
	int m,n;
	while(1){
		scanf("%d %d",&m,&n);
		if(m==0 && n==0){
			break;
		}
		else{
			printf("%d\n",m+n);
		}
	}
	return 0;
} 
