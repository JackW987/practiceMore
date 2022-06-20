#include<stdio.h>
int main(){
	int a[10],max,min;
	float sum;
	while(scanf("%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5])!=EOF){
		max=0;
		min=0;
		sum=0;
		for(int i=0;i<6;i++){
			if(a[i]>=a[max]){
				max=i;
			}
			if(a[i]<=a[min]){
				min=i;
			}
		}
		if(max==min){
			max=max-1;
		}
		a[max]=0;
		a[min]=0;
		for(int i=0;i<6;i++){
			sum+=a[i];
		}
		printf("%g\n",sum/4);
	}
	return 0;
} 
