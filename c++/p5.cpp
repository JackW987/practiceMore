#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--){
		int n,m;	
		scanf("%d %d",&n,&m);
		int a[1000][2]={0};
		// 水果放入篮子; 
		for(int i=0;i<n;i++){
			scanf("%d %d",&a[i][0],&a[i][1]);
		}
		// 挑选水果; 
		for(int i=0;i<m;i++){
			int co=0;
			for(int i=0;i<n;i++){
				//苹果多 
				if(a[i][0]>a[co][0]){
					co=i;
				}	
				//苹果一样比梨 
				else if(a[i][0]==a[co][0]){
					//梨多 
					if(a[i][1]>a[co][1]){
						co=i;
					}
					//苹果和梨一样多 
					else if(a[i][1]==a[co][1]){
						//比序号 
						if(i<co){
							co=i;
						}
					}
				}
			}
			printf("%d",co+1);
			if(i<m-1){
				printf(" ");
			}
			a[co][0]=0;
			a[co][1]=0;
		}
		printf("\n");
	}
} 
