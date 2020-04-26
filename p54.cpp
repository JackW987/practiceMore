#include<stdio.h>
int main(){
	long a,temp;
	int p=0;
	int arr[100];
	scanf("%ld",&a);
	while(a>0){
		arr[p]=a%10;
		a/=10;
		p++;
	}
	for(int i=p-1;i>=0;i--){
		if(i!=0){
			printf("%d ",arr[i]);
		}
		else{
			printf("%d",arr[i]);
		}
	}
	return 0;
}
