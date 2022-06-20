#include<stdio.h>
#include<string.h>
int main(){
	int a;
	char str[100];
	int b=0;
	while(scanf("%d",&a)!=EOF){
		//几组数据 
		int t=0;
		int flag=0;
		int sum=0;
		for(int i=0;i<a;i++){
			scanf("%s",str);
			//判断 
			if(strcmp(str,"Pleasant")==0){
				t+=5;
			}
			else if(strcmp(str,"Pretty")==0){
				t+=8;
			}
			else if(strcmp(str,"Athletic")==0){
				t+=10;
				flag=1;
			}
			else if(strcmp(str,"Lazy")==0){
				t+=15;
			}
			else if(strcmp(str,"Slow")==0){
				t+=20;
			}
			sum++;
			scanf("%s",str);
		}
		if(sum>=10 && flag==1){
			t+=50;
		}
		b++;
		printf("Case #%d: %d\n",b,t);
	}
	return 0;
}
