#include<stdio.h>
int main(){
	int a[10];
	int temp;
	scanf("%d%d%d%d%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5],&a[6],&a[7],&a[8],&a[9]);
	for(int i=0;i<10;i++){
		for(int j=i;j<10;j++){
			if(a[i]>a[j]){
				temp=a[i];
				a[i]=a[j];
				a[j]=temp;
			}	
		}
	}
	for(int i=0;i<10;i++){
		if(i==9){
			printf("%d",a[i]);
		}
		else{ 
			printf("%d\n",a[i]);	
		}	
	}
	return 0; 
}-
