#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main(){
	int n;
	char str[100];
	int sum;
	int val;
	int day[12]={31,28,31,30,31,30,31,31,30,31,30,31} ;
	scanf("%d",&n);
	while(n--){
		sum=0;
		scanf("%s",str); 
		val=str[strlen(str)-1]-'0';
		for(int j=0;j<12;j++){
			for(int i=1;i<=day[j];i++){
				if(val==(i-1)%10 || val==(i+1)%10){
					sum++;
				} 
			}
		}
		printf("%d\n",365-sum);
	}
	return 0;
}

