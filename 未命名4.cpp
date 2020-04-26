#include<stdio.h>
int main()
{
    int n,k = 0;
    while(scanf("%d",&n))
    {
        if(n == 0)
            break;
        for(int i = 1;i <= n;i++){
        	k = (k + 3) % i;
		}
        printf("%d\n",k+1);
    }
    return 0;
}
