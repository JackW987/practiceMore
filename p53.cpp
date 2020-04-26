#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int row=2*n-1;
	int nowR=1;
	int nowRt=1;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<row;j++){
			if(j>(n-nowR-1) && j<(n+nowR-1)){
				printf("*");
			}
			else if(j<(n+nowR-1)){
				printf(" ");
			}
		}
		printf("\n");
		nowR++;
	}
	for(int i=0;i<row;i++){
		printf("*");
	}
	printf("\n");
	for(int i=0;i<n-1;i++){
		for(int j=0;j<row;j++){
			if(j>=nowRt && j<(row-nowRt)){
				printf("*");
			}
			else if(j<(row-nowRt)){
				printf(" ");
			}
		}
		if(i!=n-2){
			printf("\n");
		}
		nowRt++;
	}
	return 0;
}
