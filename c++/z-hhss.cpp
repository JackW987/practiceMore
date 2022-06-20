#include<stdio.h>
#include<math.h> 
int huiwen(int x){
	int i=0;
	int a[10];
	while(x>0){
		a[i]=x%10;
		x/=10;
		i++;
	}
	int k=i-1;
	for (int j=0;j<i/2;j++){
		if(a[j]!=a[k]){
			return 0;
		}
		k--;
	}
	return 1;
}
int prime(int x){
	for(int i=2;i<=sqrt((double)x);i++){
		if(x%i==0){
			return 0;
		}
	}
	return 1;
}
int main(){
	int m,n;
	int flag=0;
	scanf("%d%d",&m,&n);
	for(int i=m;i<n;i++){
		if(prime(i) && huiwen(i) && flag<=4){
			printf("%6d",i);
			flag++;
		}
		if(flag==5){
			printf("\n");
			flag=0;
		}
	}
	return 0;
} 
