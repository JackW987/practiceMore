#include<stdio.h>
int main(){
	int temp[5]={1,2,3,4,5};
	int (*p2)[5]=&temp;
	
	printf("p2:%d\n",p2);
	printf("*p2:%d\n",*p2);
	printf("**p2:%d",**p2);
	return 0;
} 
