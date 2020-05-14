#include<stdio.h>
#include<string.h>
int main(){
	int n;
	int a[1000];
	int sum;
	int mid;
	memset(a,0,sizeof(a));
	while(scanf("%d",&n)!=EOF && n!=0){	
		for(int i=0;i<n;i++){
			scanf("%d",&a[i]);
		}
		sum=a[0];
		for(int i=0;i<n;i++){
			mid=0;
			for(int j=i;j<n;j++){
				mid+=a[j];
				if(mid>=sum){
					sum=mid;
				}
			}
		}
		printf("%d\n",sum);
		memset(a,0,sizeof(a));
	}
	return 0;
}
