#include<string.h>
#include<stdio.h>
#include<math.h>

int main()
{
    int a,b,c,d,e,f,x,y;
    //x��1*1�Ŀ�λ��Ŀ
	//y��2*2�Ŀ�λ��Ŀ
	//n��������Ŀ 
    int n = 0,q[4] = {0,5,3,1};
    scanf("%d %d %d %d %d %d",&a,&b,&c,&d,&e,&f);
    n = f+e+d+(c+3)/4;
    x = 5*d+q[c%4];
    if(b > x)
        n += (b-x+8)/9;
    y = 36*n-36*f-25*e-16*d-9*c-4*b;
    if(a > y)
        n += (a-y+35)/36;
    printf("%d",n);
}


