#include<stdio.h>
int main(){
	char arr[100];
	int flag=0;
	int i=0;
	int sum=0;
	gets(arr);
	while(arr[i]!='\0'){
		if(arr[i]!=' ' && flag==0){
			sum+=1;
			flag=1;
		}
		else if(arr[i]==' '){
			flag=0;
		}
		i++;
	}
	printf("%d",sum);
	return 0;
}
