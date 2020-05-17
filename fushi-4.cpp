#include<stdio.h>
#include<string.h>
int main(){
	char a[1000];
	scanf("%s",a);
	for(int i=0;i<strlen(a);i++){
		if(a[i]>='a' && a[i]<='z'){
			a[i]-=32;
		}
		else if(a[i]>='A' && a[i]<='Z'){
			a[i]+=32;
		}
	}
	printf("%s",a);
	return 0;
}
