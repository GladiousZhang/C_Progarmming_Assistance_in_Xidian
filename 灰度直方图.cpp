#include <stdio.h>
int main(){
	int length,width;
	scanf("%d %d",&length,&width);
	int s[width][length],rec[16]={};
	for(int i=0;i<width;i++){
		for(int j=0;j<length;j++){
			scanf("%d",&s[i][j]);
			rec[s[i][j]]++;
		}
	}
	for(int i=0;i<16;i++){
		if(rec[i]!=0){
			printf("%d %d\n",i,rec[i]);
		}
	}
	return 0;
}