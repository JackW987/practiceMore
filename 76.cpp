#include<stdio.h>
int main(){
	int a[10];
	int flag;
	flag=0;
	scanf("%d%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8]);
	int n;
	scanf("%d",&n);
	for(int i=0;i<10;i++){
		if(n<=a[i] && flag==0){
			for(int j=10;j>i;j--){
				a[j]=a[j-1];
			}
			a[i]=n;
			flag=1;
		}	
	}
	for(int i=0;i<10;i++){
		if(i!=9){
			printf("%d\n",a[i]);
		}
		else{
			printf("%d",a[i]);
		}
	}
	return 0; 
}
