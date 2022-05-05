#include <stdio.h>
int main(){
	int row,line,same=0,flag=1,rec_row,rec_line,rec_time;
	scanf("%d %d",&row,&line);
	int chess[row][line];
	int memory[row]={};
	for(int i=0;i<row;i++){
		for(int j=0;j<line;j++){
			scanf("%d",&chess[i][j]);
			if(same!=chess[i][j]){
				same=chess[i][j];
				flag=1;
			}else if(same==chess[i][j]){
				flag++;
			}
			if(flag>=3){
				rec_line=j;
				rec_time=flag;
			}
			if(j==line-1&&rec_time>=3||rec_time>=3&&flag==1){
				memory[i]=chess[i][rec_line];
				for(int zero=rec_line;zero>rec_line-rec_time;zero--){
					chess[i][zero]=0;
				}
				rec_time=1;
			}
		}
		flag=1;same=0;rec_time=1;
	}
	for(int j=0;j<line;j++){
		for(int i=0;i<row;i++){
			if(same!=chess[i][j]&&chess[i][j]!=0){
				same=chess[i][j];
				flag=1;
			}else if(same==chess[i][j]&&chess[i][j]!=0){
				flag++;
			}else if(chess[i][j]==0){
				if(same!=memory[i]){
					same=chess[i][j];
					flag=1;
				}
				if(same==memory[i]){
					flag++;
				}
			}
			if(flag>=3){
				rec_row=i;
				rec_time=flag;
			}
			if(i==row-1&&rec_time>=3||rec_time>=3&&flag==1){
				for(int zero=rec_row;zero>rec_row-rec_time;zero--){
					chess[zero][j]=0;
				}
				rec_time=0;
			}
		}
		flag=1;same=0;rec_time=1;
	}
	for(int i=0;i<row;i++){
		for(int j=0;j<line;j++){
			if(j!=line-1){
				printf("%d ",chess[i][j]);
			}else{
				printf("%d\n",chess[i][j]);
			}
		}
	}
	return 0;
}