#include <stdio.h>
#include <stdlib.h>
#include<string.h>
int main()
{
    char n[101];
    int i,s,len;
    while(scanf("%s%d",n,&s)!=EOF)
    {
        while(s--)
        {
            i=0;
            len=strlen(n);
            while(n[i]<=n[i+1]&&i<len)i++;
            while(i<len)
            {
                n[i]=n[i+1];
                i++;
            }
        }
        len=strlen(n);
        i=0;
        while(n[i]=='0')//最后要将前面的0排除
            i++;
        if(i<len)
        {
            while(i<len)
            {
                printf("%c",n[i]);
                i++;
            }
        }
        else printf("0");
        printf("\n");
    }
    return 0;
}
