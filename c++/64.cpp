#include<stdio.h>
int pickup(int x){
	int sum=0;
	sum=x-x/2+x;
	return sum;
}
int main(){
	int a,b,c,x;
	while(scanf("%d %d %d",&a,&b,&c)!=EOF && (a!=0 || b!=0 || c!=0)){
		x=b;
		if(a==1){
			printf("%d\n",x);
		}
		else{
			for(int i=1;i<a;i++){
				if(i==(a-1)){
					printf("%d\n",x);
				}
				else{
					if(pickup(x)<=c){
						x=pickup(x);
					}
				}
			}	
		}
	}
	
	return 0;
} 
