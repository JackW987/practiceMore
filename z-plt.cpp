#include<stdio.h>
int count (int n)
{
 	int f;
	if(n==1){
	 	f=1;	
	}
	else if(n==2){
		f=2;
	}
	else{
		f=count(n-1)+count(n-2);
	}
	return f;
}
int main()
{
	int n,m;
	printf("������¥�ݵĽ���:");
	scanf("%d",&n);
	m=count(n);
	printf("��%d ����¥�ݵķ���\n",m);
	return 0;
}
