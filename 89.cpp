#include<stdio.h>
#include<string.h> 
int main(){
	char a[100];
	int i=0;
	while(scanf("%c",&a[i])){
		if(a[i]=='Y'){
			break;
		}
		else{
			i++;
		}
	} 
	for(int j=0;j<i;j++){
		if(a[j]=='M'){
			printf("Monday\n");
		}
		else if(a[j]=='T'){
			if(a[j+1]=='u'){
				printf("Tuesday\n");
				j++;
			}
			else if(a[j+1]=='h'){
				printf("Thursday\n");
				j++;
			}
			else{
				printf("Wrong data\n");
			}
			
		}
		else if(a[j]=='W'){
			printf("Wednesday\n");
		}
		else if(a[j]=='F'){
			printf("Friday\n");
		}
		else if(a[j]=='S'){
			if(a[j+1]=='u'){
				printf("Sunday\n");
				j++;
			}
			else if(a[j+1]=='a'){
				printf("Saturday\n");
				j++;
			}
			else{
				printf("Wrong data\n");
			}
			
		}
		else{
			printf("Wrong data\n");
		}
	}
	return 0;
} 
