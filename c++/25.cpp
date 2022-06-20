#include<stdio.h>
int main(){
	int n;
	char a[100];
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		getchar();
//		fflush(stdin);
		scanf("%c",&a[i]);
		printf("%c\n",a[i]+32);
	}
	return 0;
}
