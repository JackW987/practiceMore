#include<stdio.h>
int main(){
	int n,m,min,flag;
	int a[100][100];
	scanf("%d%d",&m,&n);
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	flag=0;
	min=0;
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(a[i][min]>a[i][j]){
				min=j;
			}	
		}
		for(int t=0;t<m;t++){
			if(a[i][min]<a[t][min]){
				flag=1;
			}
		}
		if(flag==0){
			printf("%d %d",i+1,min+1);
		}
		flag=0;
		min=0;
	}
	return 0;
} 
