#include<stdio.h>
#include<string.h>
struct people{
	char name[10];
	char b[10];
	int c[5];
};
int main(){
	struct people stu[30];
	int i=0;
	char a[100];
	while(1){
		memset(a,'0',sizeof(a));
		char mid[100];
		scanf("%s",a);
		if(strcmp("add",a)==0){
			scanf("%s",stu[i].name);
			scanf("%s",stu[i].b);
			scanf("%d",&stu[i].c[0]);
			scanf("%d",&stu[i].c[1]);
			scanf("%d",&stu[i].c[2]);
			i++;
		}
		else if(strcmp("name",a)==0){
			memset(mid,'0',sizeof(mid));
			scanf("%s",mid);
			for(int j=0;j<i;j++){
				if(strcmp(stu[j].name,mid)==0){
					printf("%s %s %d-%d-%d\n",stu[j].name,stu[j].b,stu[j].c[0],stu[j].c[1],stu[j].c[2]);
				}
			}
		}
		else if(strcmp("sex",a)==0){
			memset(mid,'0',sizeof(mid));
			scanf("%s",mid);
			for(int j=0;j<i;j++){
				if(strcmp(stu[j].b,mid)==0){
					printf("%s %s %d-%d-%d\n",stu[j].name,stu[j].b,stu[j].c[0],stu[j].c[1],stu[j].c[2]);
				}
			}
		} 
		else if(strcmp("quit",a)==0){
			break;
		}
	}
	return 0;
}
