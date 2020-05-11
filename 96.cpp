#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	char a[100];
	char b[10];
	char c[100];
	int len,j,k,w;
	double sum;
	while(1){
		len=0;
		j=0;
		k=0;
		sum=0;
		memset(a,0,sizeof(a));
		memset(b,0,sizeof(b));
		memset(c,0,sizeof(c));
		scanf("%s",a);
		len=strlen(a);
		for(int i=0;i<len;i++){
			if(a[i]>='A' && a[i]<='Z'){
				b[j]=a[i];
				j++;
			}
			else{
				c[k]=a[i];
				k++;
			}
		}
		w=strlen(c)-1;
		for(int i=0;i<strlen(c);i++){
			sum+=(c[i]-'0')*pow(10,w);
			w--;
		}
		if(sum==0){
			return 0;
		}
		if(strcmp(b,"KB")==0){
			printf("%.0lf\n",sum*pow(1024,1)-sum*pow(1000,1));
		}
		else if(strcmp(b,"MB")==0){
			printf("%.0lf\n",sum*pow(1024,2)-sum*pow(1000,2));
		}
		else if(strcmp(b,"GB")==0){
			printf("%.0lf\n",sum*pow(1024,3)-sum*pow(1000,3));
		}
		else if(strcmp(b,"TB")==0){
			printf("%.0lf\n",sum*pow(1024,4)-sum*pow(1000,4));
		}
		else{
			printf("0\n");
		}
	} 
	return 0;
}
