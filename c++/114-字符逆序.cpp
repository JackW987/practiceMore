#include <stdio.h>
#include <stdlib.h>
#include<ctype.h>
#include<string.h>
#include<math.h>
#include<stdbool.h>
void daozhi(int c, int b, char a[])
{
	int i, j;
	char temp;
	for (i = c, j = b; i < j; i++, j--)
	{
		temp = a[i];
		a[i] = a[j];
		a[j] = temp;
	}
}
int main()
{
	int i, j, n;
	char a[100];
	while (gets(a) != NULL)
	{
		for (i = 0, j = 0; i < strlen(a); j++)
		{
			if (!isalpha(a[j]))
			{				
				daozhi(i, j - 1, a);
				i = j + 1;
			}
		}
		puts(a);
	}
	return 0;
}
