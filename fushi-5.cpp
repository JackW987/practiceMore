#include<stdio.h>
int main(){
	int n;
	int a[100][100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&a[i][j]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
			if(j!=n-1){
				printf("%d ",a[j][i]);
			}
			else{
				printf("%d",a[j][i]);
			}
		}
		printf("\n");
	}
	return 0;
}
