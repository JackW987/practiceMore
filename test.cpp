#include<stdio.h>
#include<string.h>
int main() {
	char a[10];

	scanf("%s",a);
	memset(a,'0',sizeof(a));
	printf("%s",a);
	scanf("%s",a);
	printf("%d",sizeof(a));
}
