#include<stdio.h>
int main(){
	int a;
	int b;
	int flag;
	scanf("%d",&a);
	int re[a][a];
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			scanf("%d",&b);
			re[i][j]=b;
		}
	}
	for(int i=0;i<a;i++){
		for(int j=0;j<a;j++){
			if(j!=(a-1)){
				printf("%d ",re[j][i]);
				if(j==(a-1)){
					printf("\n");	
				}
			}
			else{
				printf("%d",re[j][i]);
				if(j==(a-1)){
					printf("\n");	
				}
			}
		}
	}
}
