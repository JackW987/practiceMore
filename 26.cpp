#include<stdio.h>
int main(){
	int f;
	double c;
	while(scanf("%d",&f)!=EOF){
		c=(double)(5*(f-32))/9;
		printf("%.2lf\n",c);
	}
} 
