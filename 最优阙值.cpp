#include <stdio.h>
int main(){
	int m,time=0,max=0,maxy=0;
	scanf("%d",&m);
	int y[m],res[m];
	for(int i=0;i<m;i++){
		scanf("%d %d",&y[i],&res[i]);
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			if((y[i]>y[j]&&res[j]==0)||(y[i]<=y[j]&&res[j]==1)){
				time++;
			}
		}
		if(time>max){
			max=time;
		}
		time=0;
	}
	for(int i=0;i<m;i++){
		for(int j=0;j<m;j++){
			if((y[i]>y[j]&&res[j]==0)||(y[i]<=y[j]&&res[j]==1)){
				time++;
			}
		}
		if(time==max&&y[i]>=maxy){
			maxy=y[i];
		}
		time=0;
	}
	printf("%d",maxy);
	return 0;
}