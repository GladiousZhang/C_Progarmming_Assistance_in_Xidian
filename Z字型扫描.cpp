#include <stdio.h>
int main(){
	int row,time,sum;
	scanf("%d",&row);
	int group[row][row],z[row*row];
	for(int i=0;i<row;i++){
		for(int j=0;j<row;j++){
			scanf("%d",&group[i][j]);
		}
	}
	int i=0;
	for(int j=0;j<row;j++){
		if(j<row){
		if(j%2==0){
			for(int k=0;k<j+1;k++){
				printf("%d ",group[j-k][k]);
			}
		}else{
			for(int k=0;k<j+1;k++){
				printf("%d ",group[k][j-k]);
			}
		}
		}else{
			goto bottom;
		}
	}
	bottom:for(i=row+1;i<2*row;i++){
		if(i%2==0){
			for(int k=0;k<2*row-i;k++){
				printf("%d ",group[i+k-row][row-1-k]);
			}
		}else{
			for(int k=0;k<2*row-i;k++){
				printf("%d ",group[row-1-k][i+k-row]);
			}
		}
	}
	return 0;
}