#include<stdio.h>
int main(){
	int a[100][1000];
	int x;
	int num=0;
	int b[1000];
	//输入数据 
	while(1){
		scanf("%d",&x);
		if(x==0){
			break;
		}
		else{
			for(int i=0;i<x;i++){
				a[num][i]=i+1;
			}
			b[num]=x;
			num++;
		}
	}
	//判断数据 
	int temp=0;
	while(temp!=num){
		int three=0;
		int count=0;
		int flag=0;
		int zeroNum=0;
		while(flag==0){
			if(count==b[temp]){
				zeroNum=0;
				count=0;
			}
			if(a[temp][count]!=0){
				three++;
			}
			else{
				zeroNum++;
			}
			if(three==3){
				a[temp][count]=0;
				three=0;
			}
			if(zeroNum==(b[temp]-1)){
				flag=1;
			}
			count++;
		}
		for(int i=0;i<b[temp];i++){
			if(a[temp][i]!=0){
				printf("%d",a[temp][i]);
			}
		}
		temp++;
		if(temp!=num){
			printf("\n");
		}
	}
	return 0;
}
