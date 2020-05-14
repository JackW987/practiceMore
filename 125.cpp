#include<stdio.h>
void hline(int n){
	printf(" ");
	for(int k=0;k<n;k++){
		printf("-");
	}
	printf(" ");
}
void sline(int n){
	printf("|");
	for(int w=0;w<n;w++){
		printf(" ");
	}
	printf("|");
}
int main(){
	int n,a;
	scanf("%d",&n);
	a=n*2+3;
	for(int i=0;i<a;i++){
		if(i==0 || i==(1+n) || i==(a-1)){
			hline(n);
			printf("\n");
		}
		else{
			sline(n);
			printf("\n");
		}
	}
	return 0;
} 
