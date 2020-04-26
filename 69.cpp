#include<stdio.h>
int main(){
	int x;
	scanf("%d",&x);
	if(x<1){
		printf("%d",x);
	}
	else if(x>=1 && x<10){
		printf("%d",x*2-1);
	} 
	else if(x>=10){
		printf("%d",x*3-11);
	}
	return 0;
}
