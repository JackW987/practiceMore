#include<stdio.h>
int main(){
	int a[4];
	int n;
	scanf("%d",&n);
	for(int i=3;i>=0;i--){
		a[i]=n%10;
		n=n/10;
	}
	for(int i=0;i<4;i++){
		if(i==3){
			printf("%d",a[3]);
		}
		else{
			printf("%d ",a[i]);
		}
	}
	return 0;
}
