#include<stdio.h>
#include<string.h>
int main(){
	int m,x,y,p,q;
	char a[1];
	int b[1];
	memset(a,0,sizeof(a));
	memset(b,0,sizeof(b));
	while(scanf("%d",&m)!=EOF){
		x=0;
		y=0;
		for(int i=0;i<m;i++){
			fflush(stdin);
			scanf("%c",&a[0]);
			scanf("%d",&b[0]);
			switch(a[0]){
				case 'L':x=x-b[0];
				break;
				case 'F':y=y+b[0];
				break;
				case'R':x=x+b[0];
				break;
				case'B':y=y-b[0];
				break;
				default:break; 
			}
		}
		scanf("%d %d",&p,&q);
		if(p==x && q==y){
			printf("MEME IS SO LUCKY\n");
		}
		else{
			printf("GPS ERROR\n");
		}
	}
	return 0;
}
