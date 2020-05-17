#include<stdio.h>
#include<math.h>
int prime(int a){
	for(int i=2;i<=sqrt((double)a);i++){
		if(a%i==0){
			return 0;
		}	
	}
	return 1;
}
int main(){
	int n,flag=0;
	int i=2;
	scanf("%d",&n);
	if(n==1){
		printf("1=1");
	}
	else{
		printf("%d=",n);
		while(n!=1){
			if(prime(i) && n%i==0 && flag==0){
				printf("%d",i);
				n=n/i; 
				flag=1;
			}
			else if(prime(i) && n%i==0 && flag==1){
				n=n/i;
				printf("*%d",i);
			}
			if(n%i!=0){
				i++;	
			}
		}	
	}
	return 0;
}
