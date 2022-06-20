#include<stdio.h>
int main(){
	int h;
	int nowH;
	while(scanf("%d",&h)!=EOF && h!=0){
		nowH=0;
		int mid=(h-1)/2;
		for(int i=0;i<mid;i++){
			for(int j=0;j<=(mid+nowH);j++){
				if(j>=(mid-nowH) && j<=(mid+nowH)){
					printf("*");	
				}
				else{
					printf(" ");
				}
			}
			nowH++;
			printf("\n");
		}
		for(int i=0;i<h;i++){
			printf("*");
		}
		printf("\n");
		nowH=mid-1;
		for(int i=(mid-1);i>=0;i--){
			for(int j=0;j<=(mid+nowH);j++){
				if(j>=(mid-nowH) && j<=(mid+nowH)){
					printf("*");	
				}
				else{
					printf(" ");
				}
			}
			nowH--;
			printf("\n");
		}
	}
	return 0;
}
