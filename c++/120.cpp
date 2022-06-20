#include<stdio.h>
#include<math.h>
int prime(int x){
	if(x==1){
		return 1;
	}
	else{
		for(int i=2;i<=sqrt(x);i++){
			if(x%i==0){
				return 0;
			}
		}	
		return 1;
	}
}
int main(){
	int a,b,x,y,sum,mid,point;
	while(scanf("%d:%d",&a,&b)!=EOF){
		scanf("%d:%d",&x,&y);
		sum=0;
		point=x*2500+y;
		if(prime(point)){
			sum++;
		}
		while(a!=x || b!=y){
			mid=a*2500+b;
			if(prime(mid)){
				sum++;
			}
			if(b<60){
				b++;
			}
			else{
				a++;
				b=0;
			}
		}
		printf("%d\n",sum);
	}
	return 0;
}
