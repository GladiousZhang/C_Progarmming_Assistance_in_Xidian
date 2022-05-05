#include <stdio.h>
int main(){
	int a,b,c,d=0,time=0,flag=0;
	scanf("%d %d %d",&a,&b,&c);
	c-=1;
	int rec[a][b]={};
	char map[a][b]={};
	for(int i=0;i<a;i++){
		scanf("%s",&map[i]);
	}
	while(c>=0&&c<b&&d>=0&&d<a){
		if(map[d][c]=='N'){
			rec[d][c]++;d--;time++;
		}else if(map[d][c]=='E'){
			rec[d][c]++;c++;time++;
		}else if(map[d][c]=='S'){
			rec[d][c]++;d++;time++;
		}else if(map[d][c]=='W'){
			rec[d][c]++;c--;time++;
		}
		for(int i=0;i<a;i++){
			for(int j=0;j<b;j++){
				if(rec[i][j]==2){
					goto out;
				}	
			}
		}
	}
	flag=1;
	out:
		if(flag){
			printf("out %d",time);
		}else{
			printf("loop %d",time-1);
		}
	return 0;
}