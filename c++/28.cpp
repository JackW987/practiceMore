#include<stdio.h>
int main(){
	int y;
	while(scanf("%d",&y)!=EOF){
		if((y%4==0 && y%100!=0) || (y%400==0)){
			printf("Leap Year\n");
		}
		else{
			printf("Not Leap Year\n");
		}
	}
	return 0;
}
