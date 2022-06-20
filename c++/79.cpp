#include<stdio.h>
void push(int arr[],int x,int n){
	int t=n-x;
	int p=0;
	int num[t];
	for(int i=0;i<n-x;i++){
		num[i]=arr[i];
	}
	for(int i=n-x;i<n;i++){		
		arr[p]=arr[i];
		p++;
	}
	p=0;
	for(int i=x;i<n;i++){
		arr[i]=num[p];
		p++;
	}
}
int main(){
	int n;
	int x;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	scanf("%d",&x);
	push(arr,x,n);
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
} 
