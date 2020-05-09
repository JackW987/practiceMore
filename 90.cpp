#include<stdio.h>
#include<math.h>
#include<string.h>
#include<stdlib.h>
int main(){
	double c,d,k,h;
	double w=0,o=0;
	char a[100];
	char b[100]={'0'};
	char q[100]={'0'};
	int t=0;
	int x=0;
	int y=0;
	int flag=0;
	int p=0;
	scanf("%s",a);
	while(a[t]!='\0'){
		if(a[t]==','){
			flag=1;
			t++; 
		}
		else if(a[t]!=',' && flag==0){
			b[x]=a[t];
			x++;
			t++;
		}
		else if(a[t]!=',' && flag==1){
			q[y]=a[t];
			y++;
			t++;
		}
		else{
			t++;
		}
	}
	for(int i=0;i<x;i++){
		w+=(b[i]-'0')*(pow(10,x-i-1));
	}
	for(int j=0;j<y;j++){
		o+=(q[j]-'0')*(pow(10,y-j-1));
	}
	
    c=(w+o)/2;
	for(double i=w;i<o;i++){
		for (double j=i;j<o;j++){
			d=sqrt(pow(i,2)+pow(j,2));
			k=(int)d;
			h=d-k;
			if(d>=w && d<=o && h==0 &&p==0){
				printf("%d^2+%d^2=%d^2",(int)i,(int)j,(int)d);
				p=1;
			}
			else if(d>=w && d<=o && h==0 && p==1){
				printf("\n%d^2+%d^2=%d^2",(int)i,(int)j,(int)d);
			}
			
		}
	}
	return 0;
}
