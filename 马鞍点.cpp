#include <stdio.h>
int main(){
	int row,line,flag=0;
	scanf("%d %d",&row,&line);
	int group[row][line],max[line]={},rec_line[line],rec_row[line];
	for(int i=0;i<row;i++){
		for(int j=0;j<line;j++){
			scanf("%d",&group[i][j]);
		}
	}
		for(int j=0;j<line;j++){
			for(int i=0;i<row;i++){
			if(group[i][j]>max[j]){
				max[j]=group[i][j];
				rec_line[j]=j;rec_row[j]=i;
			}
		}
	}
		for(int j=0;j<line;j++){
			for(int i=0;i<line;i++){
			if(max[j]>group[rec_row[j]][i]){
				flag++;
				max[j]=0;
				break;
			}
			flag=0;
		}
	}
		for(int j=0;j<line;j++){
			if(max[j]!=0){
				printf("%d %d %d\n",rec_row[j],rec_line[j],max[j]);
			}else if(flag==line){
				printf("no\n");
				break;
		}
	}
	return 0;
}