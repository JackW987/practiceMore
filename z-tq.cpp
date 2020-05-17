#include<stdio.h>
int main(){
	float m;
	int n;
	float sumHe;
	sumHe=0;
	scanf("%f%d",&m,&n);
	for(int i=0;i<n;i++){
		sumHe+=m+m/2;
		m=m/2;
	}
	printf("%.2f %.2f",m,sumHe-m);
	return 0;
}
