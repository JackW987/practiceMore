#include<stdio.h>
#include<string.h>
int main(){
	int i=0;
	int sum=0;
	char str[100];
	char strl[100];
	gets(str);
	while(str[i]!='\0'){
		//ÅĞ¶ÏÕûÊı 
		if(str[i]>='0' && str[i]<='9'){
			strl[sum]=str[i];
			sum++;
		}
		else if(i!=(strlen(str)-1) && str[i+1]>='0' && str[i+1]<='9'){
			strl[sum]='*';
			sum++;
		}
		else if((str[i]<'0' || str[i]>'9') && str[i+1]=='\0'){
			strl[sum]='*';
			sum++;
		}
		i++;
	}
	printf("%s",strl);
	return 0;
} 
