#include<stdio.h>
int main(){
	int a,b;
	while(scanf("%d %d",&a,&b)!=EOF){
		if(a==b){
			printf("1\n");
		}
		else{
			if(b%a==0){
				printf("1/%d\n",b/a);
			} 
			else{
				for(int i=1;i<=a;i++){
					if(b%i==0 && a%i==0){
						a/=i; 
						b/=i;
					}
				}
				printf("%d/%d\n",a,b);
			}
		}
	}
	return 0;
}
