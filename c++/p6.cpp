#include<stdio.h>
int main(){
	int a,b,r,l,w,s,k,i,ro,max;
	scanf("%d",&a);
	for(i=0;i<a;i++){
		int p[100]={0};
		w=1;
		max=0;
		scanf("%d",&b);
		for(k=0;k<b;k++){
			scanf("%d %d",&l,&r);
			p[k]=l;
			if((r-l)>max){
				max=r-l;
			}
		}
		for(s=0;s<b-1;s++){
			if((p[s]+max)>p[s+1]){
				w=0;
			}
		}
		if(w==1){
			printf("YES\n");
		}
		else{
			printf("NO\n");
		}
	}
	return 0;
}
