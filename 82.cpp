#include<stdio.h>
struct student{
	char num[100];
	char name[100];
	int scOne;
	int scTwo;
	int scThr;
	int all;
	int flag;
}; 
int main(){
	int n;
	int sumOne=0;
	int sumTwo=0;
	int sumThr=0;
	int top=0;
	struct student stu[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%s%s%d%d%d",stu[i].num,stu[i].name,&stu[i].scOne,&stu[i].scTwo,&stu[i].scThr);
		stu[i].all=stu[i].scOne+stu[i].scTwo+stu[i].scThr;
		stu[i].flag=0;
		if(top<stu[i].all){
			for(int j=0;j<n;j++){
				stu[j].flag=0;
			}
			top=stu[i].all;
			stu[i].flag=1;
		} 
	}
	for(int i=0;i<n;i++){
		sumOne=stu[i].scOne+sumOne;
		sumTwo=stu[i].scTwo+sumTwo;
		sumThr=stu[i].scThr+sumThr;
	}
	printf("%d %d %d\n",sumOne/n,sumTwo/n,sumThr/n);
	for(int i=0;i<n;i++){
		if(stu[i].flag==1){
			printf("%s %s %d %d %d",stu[i].num,stu[i].name,stu[i].scOne,stu[i].scTwo,stu[i].scThr);
		}
	}
	return 0;
}
