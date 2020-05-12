#include<stdio.h>
#include<string.h>
int main(){
	char a[100];
	char b[100];
	int j,flag,wei;
	while(scanf("%s",a)!=EOF){
		j=0;
		wei=0;
		for(int i=0;i<strlen(a);i++){
			if(a[i]>='0' && a[i]<='9'){
				b[j]=a[i];
				j++;
			}
		}
		wei=strlen(b)%3;
		if(wei==0){
			flag=0;
		}
		else{
			flag=3;
		}
		for(int i=0;i<strlen(b);i++){
			if(i<wei){
				printf("%c",b[i]);
			}
			else{
				if(flag<=2){
					printf("%c",b[i]);
					flag++;
				}
				else{
					printf(",%c",b[i]);
					flag=1;
				}
			}
		}
		printf("\n");
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
	}
	return 0;
} 
