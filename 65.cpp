#include<stdio.h>
int main(){
	int n,all,j,k,t;
	int a[100];
	int b[100][100];
	j=0;
	t=0;
	scanf("%d",&n);
	all=0;
	for(int i=1;i<=n;i++){
		all+=i;
		a[j]=all;
		j++;
	}
	j=0;
	k=0;
	for(int i=0;i<all;i++){
		scanf("%d",&b[k][t]);
		t++;
		if((i+1)==a[j]){
			k++;
			j++;
			t=0;
		}
	}
	while()
	return 0;
}
