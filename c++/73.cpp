#include<stdio.h>
int qtz(int n){
	int sum;
	sum=1;
	for(int i=0;i<n-1;i++){
		sum=(sum+1)*2; 
	}
	return sum;
}
int main(){
	int n;
	scanf("%d",&n);
	printf("%d",qtz(n));
	return 0;
} 
