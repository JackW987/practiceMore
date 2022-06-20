#include <stdio.h>
#include <stdlib.h>
 
int main()
{
    int a,b;
    scanf("%d,%d",&a,&b);
    for(int i = a;i<= b;i++){
        for(int j = i;j <= b;j++){
            for(int k = b;k > j;k--){
                if(i*i+j*j == k*k){
                    printf("%d^2+%d^2=%d^2\n",i,j,k);
                }
            }
        }
    }
    return 0;
  }
