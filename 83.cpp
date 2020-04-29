#include<stdio.h>
#include<stdlib.h>
struct Node{
	int number;
	int data;
	int flag;
	struct Node *next;
};
int main(){
	int n,m;
	scanf("%d%d",&n,&m);
	struct Node *a=(struct Node *)malloc(sizeof(struct Node));
	a->next=NULL;
	struct Node *b=(struct Node *)malloc(sizeof(struct Node));
	b->next=NULL;
	struct Node *c=(struct Node *)malloc(sizeof(struct Node));
	struct Node *t=(struct Node *)malloc(sizeof(struct Node));
	c=a;
	t=b;
	int x,y;
	for(int i=0;i<n;i++){
		if(i==0){
			scanf("%d%d",&x,&y);
			a->number=x;
			a->data=y;	
			a->flag=1;
		}
		else{
			struct Node *p=(struct Node *)malloc(sizeof(struct Node));
			scanf("%d%d",&x,&y);
			p->number=x;
			p->data=y;
			p->flag=1;
			c->next=p;
			c=p;
		}
	}
	for(int i=0;i<m;i++){
		if(i==0){
			scanf("%d%d",&x,&y);
			b->number=x;
			b->data=y;	
			b->flag=1;
		}
		else{
			struct Node *p=(struct Node *)malloc(sizeof(struct Node));
			scanf("%d%d",&x,&y);
			p->number=x;
			p->data=y;
			p->flag=1;
			t->next=p;
			t=p;
		}
	}
	c=a;
	t=b;
	struct Node *q=(struct Node *)malloc(sizeof(struct Node));
	q=a;
	for(int i=0;i<(n+m);i++){
		while(c!=NULL){
			if(q->number>c->number && c->flag!=0){
				q=c;
				c=c->next;
			}		
			else{
				c=c->next;
			}
		}
		while(t!=NULL){
			if(q->number>t->number && t->flag!=0){
				q=t;
				t=t->next;
			}
			else{
				t=t->next;
			}
		}
		q->flag=0;
		printf("%d %d\n",q->number,q->data);
		int pd=0;
		c=a;
		t=b;
		q=a;
		while(q!=NULL){
			if(q->flag==0){
				q=q->next;
			}
			else{
				pd=1;
				break;
			}
		}
		while(pd==0){
			q=b;
			if(q->flag==0){
				q=q->next;
			}
			else{
				break;
			}
		}
	}
	return 0;
}
