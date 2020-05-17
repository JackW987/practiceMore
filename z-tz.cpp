#include<stdio.h>
#include<string.h>
int main(){
	long long a[1000],b[1000],m;
	while(scanf("%lld",&m) && m!=0){
		a[0]=1;
		b[0]=0;
		for(int i=1;i<m;i++){
			b[i]=a[i-1];
		 	a[i]=a[i-1]+b[i-1];
		}	
		printf("%lld\n",a[m-1]+b[m-1]);
		memset(a,0,sizeof(a));
	}
	return 0;
} 
