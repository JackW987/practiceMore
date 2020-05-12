#include<stdio.h>
#include<string.h> 
int main(){
	int m,n;
	int a[10]={0};
	int k,b;
	while(scanf("%d %d",&m,&n)!=EOF){
		memset(a,0,sizeof(a));
		for(int i=m;i<=n;i++){
			b=i;
			while(b>0){
				k=b%10;
				b=b/10;
				switch (k){
					case 0:a[0]+=1;
					break;
					case 1:a[1]+=1;
					break;
					case 2:a[2]+=1;
					break; 
					case 3:a[3]+=1;
					break;
					case 4:a[4]+=1;
					break;
					case 5:a[5]+=1;
					break;
					case 6:a[6]+=1;
					break;
					case 7:a[7]+=1;
					break;
					case 8:a[8]+=1;
					break; 
					case 9:a[9]+=1;
					break;
				}
			}
		}
		for(int i=0;i<10;i++){
			if(i==9){
				printf("%d",a[i]);
			}
			else{
				printf("%d ",a[i]);
			}
		}
		printf("\n");
	}
	return 0;
}
