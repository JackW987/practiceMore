#include<stdio.h>
#include<string.h>
int main(){
	int t,n;
	int a[100][100];
	memset(a,0,sizeof(a));
	scanf("%d",&t);
	while(t--){
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			for(int j=0;j<=i;j++){
				scanf("%d",&a[i][j]);
			}
		}
		for(int i=n-1;i>=0;i--){
			for(int j=0;j<i;j++){
				if(a[i][j]>a[i][j+1]){
					a[i-1][j]+=a[i][j];
				}
				else{
					a[i-1][j]+=a[i][j+1];
				}
			}
		}
		printf("%d\n",a[0][0]);
		memset(a,0,sizeof(a)); 
	}
	return 0;
}
