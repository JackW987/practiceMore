#include<stdio.h>
#include<stdlib.h>
struct Node{
	int number;
	int score;
	int flag;
	struct Node *next;
}; 
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	struct Node *a=(struct Node *)malloc(sizeof(struct Node));
	struct Node *c=(struct Node *)malloc(sizeof(struct Node));
	c=a;
	for(int i=0;i<(n+m);i++){
		if(i==0){
			scanf("%d%d",&a->number,&a->score);
			a->flag=0;
		}
		else{
			struct Node *p=(struct Node*)malloc(sizeof(struct Node));
			scanf("%d%d",&p->number,&p->score);
			p->flag=0;
			c->next=p;
			c=p;
		}
	}
	struct Node *q=(struct Node *)malloc(sizeof(struct Node));
	c=a;
	q=c;
	for(int i=0;i<(n+m);i++){
		while(c!=NULL){
			if(q->number>c->number && c->flag==0){
				q=c;
				c=c->next;
			}
			else{
				c=c->next;
			}
		}
		printf("%d %d\n",q->number,q->score);
		q->flag=1;
		c=a;
		q=a;
		while(c!=NULL){
			if(c->flag!=1){
				q=c;
			}
			c=c->next;
		}
		c=a;
	}
	return 0;
} 
