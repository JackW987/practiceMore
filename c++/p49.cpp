#include<stdio.h>
int main(){
	int n;
	int temp;
	int min=0,max=0;
	scanf("%d",&n);
	int arr[n];
	for(int i=0;i<n;i++){
		scanf("%d",&arr[i]);
	}
	for(int i=0;i<n;i++){
		if(arr[min]>arr[i]){
			min=i;
		}
		if(arr[max]<arr[i]){
			max=i;
		}
	}
	//½»»»
	temp=arr[0];
	arr[0]=arr[min];
	arr[min]=temp;
	temp=arr[n-1];
	arr[n-1]=arr[max];
	arr[max]=temp; 
	for(int i=0;i<n;i++){
		if(i!=(n-1)){
			printf("%d ",arr[i]);
		}
		else{
			printf("%d",arr[i]);
		}
	}
	return 0;
}
