#include <stdio.h>
int main(){
 int L,M,i,a[100000];
 scanf("%d %d",&L,&M);
 for(i=0;i<=L;i++){
  a[i]=1;
 }
 int c,b;
 for(i=0;i<M;i++){
  scanf("%d %d",&b,&c);
 }
 for(i=b;i<=c;i++){
  a[i]=0;
 }
 int sum=0;
 for(i=0;i<=L;i++){
  if(a[i]==1){
   sum++;
  }
 }
 printf("%d",sum);
 return 0;
}
