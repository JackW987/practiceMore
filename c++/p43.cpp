#include<stdio.h>
#include<string.h>
int main(){
	int sum=0;
	char c;
	char str[90];
	char out[90];
	scanf("%s",str);
	for(int i=0;i<strlen(str);i++){
		if((str[i]>='a' && str[i]<='z')||(str[i]>='A' && str[i]<='Z')){
			out[sum]=str[i];
			sum++;
		}
	}
	printf("%s\n",out);
}
