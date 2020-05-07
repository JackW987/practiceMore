#include<stdio.h>
#include<math.h>
int main(){
	int a,n,lsum,nsum;
	scanf("%d%d",&a,&n);
	lsum=0;
	nsum=0;
	for(int i=0;i<n;i++){
		lsum=lsum+pow(10,i)*a;
		nsum=nsum+lsum;
	}
	printf("%d",nsum);
}
