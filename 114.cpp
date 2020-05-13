#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	int j;
	char b[100];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	j=0;
	while(gets(a)!=NULL){
		for(int i=0;i<strlen(a);i++){
	 		if((a[i]>='a' && a[i]<='z') || (a[i]>='A' && a[i]<='Z')){
				b[j]=a[i];
				j++;
			}
			else{
				for(int k=(strlen(b)-1);k>=0;k--){
					printf("%c",b[k]);
				}
				printf("%c",a[i]);
				memset(b,0,sizeof(b));
				j=0;
			}	
		}
		for(int k=(strlen(b)-1);k>=0;k--){
			printf("%c",b[k]);
		}
		printf("\n");
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(a));
		j=0;
	}
}
