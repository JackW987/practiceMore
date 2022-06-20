#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	while(gets(a)!=NULL){
		for(int i=0;i<strlen(a);i++){
			if((a[i]=='s' || a[i]=='S')&&(a[i+1]=='a' || a[i+1]=='A')&&(a[i+2]=='l' || a[i+2]=='L')&&(a[i+3]=='t' || a[i+3]=='T')){
				puts(a);
			}
		}
	}
}
