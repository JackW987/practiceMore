#include<stdio.h>
#include<string.h>
int main(){
	int a[10000];
	memset(a,0,sizeof(a));
	int l,m,sum;
	sum=0;
	scanf("%d %d",&l,&m);
	for(int i=0;i<=l;i++){
		a[i]=1;
	}
	while(m--){
		int x,y;
		scanf("%d %d",&x,&y);
		for(int i=x;i<=y;i++){
			a[i]=0;
		}
	}
	for(int i=0;i<=l;i++){
		if(a[i]==1){
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
}
