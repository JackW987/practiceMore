#include<stdio.h>
#include<string.h>
int main(){
	char to[100];
	char tw[100];
	int i=0;
	int toH,toM,toS,twH,twM,twS;
	int finH,finM,finS;
	gets(to);
	gets(tw);
	//��һ������ʱ��� 
	toH=(to[0]-'0')*10+(to[1]-'0');
	toM=(to[3]-'0')*10+(to[4]-'0');
	toS=(to[6]-'0')*10+(to[7]-'0');
	//�ڶ�������ʱ��� 
	twH=(tw[0]-'0')*10+(tw[1]-'0');
	twM=(tw[3]-'0')*10+(tw[4]-'0');
	twS=(tw[6]-'0')*10+(tw[7]-'0');
	//ʱ������
	if(toH>twH){
		//������� 
		if(toS<twS){
			toM-=1;
			finS=toS+60-twS;
		}
		else{
			finS=toS-twS;
		}
		//�������
		if(toM<twM){
			toH-=1;
			finM=toM+60-twM;
		} 
		else{
			finM=toM-twM;
		}
		//ʱλ��� 
		finH=toH-twH;
	}
	else{
		//������� 
		if(twS<toS){
			twM-=1;
			finS=twS+60-toS;
		}
		else{
			finS=twS-toS;
		}
		//�������
		if(twM<toM){
			twH-=1;
			finM=twM+60-toM;
		} 
		else{
			finM=twM-toM;
		}
		//ʱλ��� 
		finH=twH-toH;
	}
	if(finM<10 && finS<10){
		printf("%d:0%d:0%d",finH,finM,finS);
	}
	else if(finS<10){
		printf("%d:%d:0%d",finH,finM,finS);
	}
	else if(finM<10){
		printf("%d:0%d:%d",finH,finM,finS);
	}
	return 0;
} 
