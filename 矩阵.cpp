#include <stdio.h>
int main(){
	int row,sum_main=0,sum_vice=0,t,change=1;
	scanf("%d",&row);
	int group[row][row],sum_row[row]={},sum_line[row]={},sort[2*row+2];
	for(int i=0;i<row;i++){
		for(int j=0;j<row;j++){
			scanf("%d",&group[i][j]);
			sum_row[i]+=group[i][j];
		}
	}
	for(int j=0;j<row;j++){
		for(int i=0;i<row;i++){
			sum_line[j]+=group[i][j];
		}
	}
	for(int i=0;i<row;i++){
		sum_main+=group[i][i];
		sum_vice+=group[row-i-1][i];
	}
	for(int i=0;i<row;i++){
		sort[i]=sum_row[i];
		sort[i+row]=sum_line[i];
	}
	sort[2*row]=sum_main;
	sort[2*row+1]=sum_vice;
	for(int i=0;i<2*row+2&&change;i++){
		change=0;
		for(int j=0;j<2*row+1-i;j++){
			if(sort[j]<sort[j+1]){
				t=sort[j];sort[j]=sort[j+1];sort[j+1]=t;
				change=1;
			}
		}
	}
	for(int i=0;i<2*row+2;i++){
		if(i!=2*row+1){
			printf("%d ",sort[i]);
		}else{
			printf("%d\n",sort[i]);
		}
	}
	return 0;
}