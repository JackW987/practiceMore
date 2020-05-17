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
	int sum=0;
	for(int i=100;i<=200;i++){
		if(prime(i)){
			sum++;
		}
	}
	printf("%d\n",sum);
	sum=0;
	for(int i=100;i<=200;i++){
		if(sum==0 && prime(i)){
			printf("%d",i);
			sum++;
		}
		else if(sum!=0 && prime(i)){
			printf(" %d",i);
			sum++;
		}
	} 
	return 0;
} 
