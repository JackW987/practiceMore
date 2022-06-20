#include<stdio.h>
#include<string.h>
int main(){
	char str[100];
	char strl[100];
	char c;
	int k=0;
	int p=0;
	gets(str);
	scanf("%c",&c);
	while(str[k]!='\0'){
		if(str[k]!=c){
			strl[p]=str[k];
			p++;
		}
		k++;
	}
	printf("%s",strl);
	return 0;
}
