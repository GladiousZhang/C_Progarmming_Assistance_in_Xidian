#include <stdio.h>
#include <math.h>
int main(){
	int x,y,sum=0;
	scanf("%d %d",&x,&y);
	if(x>=20&&x<=1000&&y>=20&&y<=1000&&abs(y-x)>=10){
		int max=x,min=y;
		if(y>x){
			max=y;
			min=x;
		}
		for(int i=max;i>=min;i--){
			int flag=0;
			for(int n=2;n<=i/2;n++){
				if(i%n==0){
					flag++;
					if(flag!=0){
						break;
					}
				}
			}
			if(flag==0){
				sum=sum+i*i;
			}
		}
		printf("%d",sum);
	}
	return 0;
}