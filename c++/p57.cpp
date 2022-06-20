#include<stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int sumPr=0;
	int row=2*n-1;
	int nowR=1;
	int nowRt=1;
	for(int i=0;i<n-1;i++){
		for(int j=0;j<row;j++){
			if(j>(n-nowR-1) && j<(n+nowR-1)){
				if(j<=n-1){
					sumPr+=1;
					printf("%d",sumPr);
				}
				else{
					sumPr-=1;
					printf("%d",sumPr);
				}
			}
			else if(j<(n+nowR-1)){
				printf(" ");
			}
		}
		sumPr=0;
		printf("\n");
		nowR++;
	}
	sumPr=0;
	for(int i=0;i<row;i++){
		if(i<=n-1){
			sumPr+=1;
			printf("%d",sumPr);
		}
		else{
			sumPr-=1;
			printf("%d",sumPr);
		}
	}
	sumPr=0;
	printf("\n");
	for(int i=0;i<n-1;i++){
		for(int j=0;j<row;j++){
			if(j>=nowRt && j<(row-nowRt)){
				if(j<=n-1){
					sumPr+=1;
					printf("%d",sumPr);
				}
				else{
					sumPr-=1;
					printf("%d",sumPr);
				}
			}
			else if(j<(row-nowRt)){
				printf(" ");
			}
		}
		sumPr=0;
		if(i!=n-2){
			printf("\n");
		}
		nowRt++;
	}
	return 0;
}
