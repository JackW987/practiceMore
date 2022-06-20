#include<stdio.h>
int main(){
	int n,temp;
	int a[100];
	int min,max;
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	min=0;
	max=0;
	for(int i=0;i<n;i++){
		if(a[i]<=a[min]){
			min=i;
		}
		if(a[i]>=a[max]){
			max=i;
		}
	}
	temp=a[0];
	a[0]=a[min];
	a[min]=temp;
	for(int i=0;i<n;i++){
		if(a[i]<=a[min]){
			min=i;
		}
		if(a[i]>=a[max]){
			max=i;
		}
	}
	temp=a[n-1];
	a[n-1]=a[max];
	a[max]=temp;
	for(int i=0;i<n;i++){
		if(i==n-1){
			printf("%d",a[i]);
		}
		else{
			printf("%d ",a[i]);
		}
	} 
	return 0;
} 
