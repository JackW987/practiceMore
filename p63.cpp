#include<stdio.h>
#include<string.h>
#include<math.h>
int main(){
	int n,j,h,m,me,he,ne,nep;
	char money[1000][50];
	char height[1000][50];
	char name[1000][50];
	char arr[1000][50];
	scanf("%d",&n);
	//输入数据 
	for(int i=0;i<n;i++){
		fflush(stdin);
		gets(arr[i]);
	} 
	for(int i=0;i<n;i++){
		j=0;
		h=0;
		m=0;
		nep=0;
		he=0;
		me=0;
		ne=0;
		while(arr[i][j]!='\0'){
			if(arr[i][j]==' '){
				ne=1;
			}
			if(ne==0){
				name[i][nep]=arr[i][j];
				nep++;
			}
			//判断身高还是钱 
			if(arr[i][j]==' ' && he==0){
				he=1;		
			}
			else if(arr[i][j]==' ' && he==1 && h>0){
				me=1;
			}
			if(he==1 && me==0 && arr[i][j]!=' '){
				height[i][h]=arr[i][j];
				h++;
			}
			else if(he==1 && me==1 && arr[i][j]!=' '){
				money[i][m]=arr[i][j];
				m++;
			}
			j++;
		}
	}
	//求Suxiao的钱和身高 
	int tik=0;
	for(int i=0;i<n;i++){		
		if(strcmp(name[i],"Suxiao")==0){
			tik=i;	
		}	
	}
	int suHeight,sumHe,sumMe,suMoney;
	suHeight=0;
	suMoney=0;
	sumHe=strlen(height[tik]);
	sumMe=strlen(money[tik]);
	for(int i=0;i<strlen(height[tik]);i++){
		suHeight+=(height[tik][i]-'0')*pow(10,sumHe-1);
		sumHe--;
	}
	for(int i=0;i<strlen(money[tik]);i++){
		suMoney+=(money[tik][i]-'0')*pow(10,sumMe-1);
		sumMe--;
	}
	int pmHe=1;
	int pmMo=1;
	//每一组身高比较 
	for(int i=0;i<n;i++){
		int thHe=0;
		int sumThHe=0;
		thHe=strlen(height[i]);
		for(int j=0;j<strlen(height[i]);j++){
			sumThHe+=(height[i][j]-'0')*pow(10,thHe-1);
			thHe--;
		}
		if(sumThHe>suHeight){
			pmHe++;
		}
	} 
	//每一组钱比较 
	for(int i=0;i<n;i++){
		int thMe=0;
		int sumThMe=0;
		thMe=strlen(money[i]);
		for(int j=0;j<strlen(money[i]);j++){
			sumThMe+=(money[i][j]-'0')*pow(10,thMe-1);
			thMe--;
		}
		if(sumThMe>suMoney){
			pmMo++;
		}
	}
	if(pmHe<pmMo){
		printf("HEIGHT");
	}
	else if(pmMo<pmHe){
		printf("MONEY");
	}
	else{
		printf("EQ");
	}
	return 0;
}
