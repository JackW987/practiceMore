#include<stdio.h>
int main(){
	int n,m,max,min,rab,chi;
	scanf("%d",&n);
	rab=0;
	chi=0;
	m=n;
	if(n%2==0){
		while(n>0){
			if(n%2!=0){
				n=n-4;
				rab++;
			}
			else{
				max=n/2;
				break;
			}
		}
		while(m>0){
			if(m%4!=0){
				n=n-2;
				chi++;
			}	
			else{
				min=n/4;
				break;
			}
		}	
		printf("%d %d",min,max );
	}
	else{
		printf("0 0");
	}
	return 0;
} 
