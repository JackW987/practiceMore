#include<stdio.h>
#include<string.h>
int main(){
	char a[3][100];
	char b[100];
	scanf("%s",a[0]);
	scanf("%s",a[1]);
	scanf("%s",a[2]);
	for(int i=0;i<3;i++){
		for(int j=i;j<3;j++){
			if(strcmp(a[i],a[j])>0){
				strcpy(b,a[i]);
				strcpy(a[i],a[j]);
				strcpy(a[j],b);
			}
		}
	}
	for(int i=0;i<3;i++){
		if(i==2){
			printf("%s",a[i]);
		}
		else{
			printf("%s\n",a[i]);
		}	
	}
	return 0;
}
