#include <stdio.h>
int main(){
 int a[10];
 int n,i,min=0,max=0;
 scanf("%d",&n);
 for(i=0;i<n;i++){
  	scanf("%d ",&a[i]);
 }
 
 for(i=0;i<n;i++){
  if(a[i]<a[min]){
   min=i;
  }
 }
 int temp;
 temp=a[0];
 a[0]=a[min];
 a[min]=temp;
 
 for(i=0;i<n;i++){
  if(a[i]>a[max]){
   max=i;
  }
 }
 temp=a[n-1];
 a[n-1]=a[max];
 a[max]=temp;
 
 for(i=0;i<n;i++){
  printf("%d ",a[i]); 
 }
 return 0;
} 
