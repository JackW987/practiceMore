#include<stdio.h>
int main(){
	int a[6],sum;
	scanf("%d%d%d%d%d%d",&a[0],&a[1],&a[2],&a[3],&a[4],&a[5]);
	sum+=a[5];
	while(a[4]>0){
		if(a[0]>=11){
			a[4]--;
			a[0]-=11;
			sum++;
		}
		else{
			a[0]=0;
			a[4]--;
			sum++;
		}
	}
	while(a[3]>0){
		if(a[1]>=11){
			a[3]--;
			a[1]-=11;
			sum++;
		}
		else{
			a[3]--;
			int mid=44-a[1]*4;
			if(a[0]<=mid){
				a[0]=0;
			} 
			else{
				a[0]-=mid;
			}
			a[1]=0;
			sum++;
		}
	}
	while(a[2]>0){
		if(a[2]>=4){
			a[2]-=4;
			sum++;
		}
		else{
			if(a[2]==3){
				a[2]=0;
				if(a[1]>0 && a[0]>=5){
					a[1]-=1;
					a[0]-=5;
				}
				else if(a[1]>0 && a[0]<5){
					a[1]-=1;
					a[0]=0;
				}
				sum++;
			}
			else if(a[2]==2){
				a[2]=0;
				if(a[1]>=3 && a[0]>=6){
					a[1]-=3;
					a[0]-=6;
				}
				else if(a[1]>=3 && a[0]<6){
					a[1]-=3;
					a[0]=0;
				}
				else if(a[1]<3){
					a[1]=0;
					int midC=18-a[1]*4;
					if(a[0]>=midC){
						a[0]-=midC;
					}
					else{
						a[0]=0;
					}
				}
				sum++;
			}
			else{
				a[2]=0;
				if(a[1]>=5 && a[0]>=11){
					a[1]-=5;
					a[0]-=11;
				} 
				else if(a[1]>=5 && a[0]<11){
					a[1]-=5;
					a[0]=0;
				}
				else if(a[1]<5){
					a[1]=0;
					int midD=27-a[1]*4;
					if(a[0]>midD){
						a[0]-=midD;
					}
					else{
						a[0]=0;
					}
				}
				sum++;
			}
		}
	}
	while(a[1]>0){
		if(a[1]>=36){
			a[1]-=36;
			sum++;
		}
		else{
			a[1]=0;
			sum++;
		}
	}
	printf("%d",sum);
	return 0;
}
