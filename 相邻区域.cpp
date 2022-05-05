#include <stdio.h>
int main(){
	int n,m,t,k;
	scanf("%d %d %d %d",&n,&m,&t,&k);
	int sta_line=0,sta_row=0,end_line=n-1,end_row=m-1;
	int s[n][m];
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			scanf("%d",&s[i][j]);
		}
	}
		for(int i=0;i<n;i++){
			for(int j=0;j<m;j++){
			if(i>0){
				if(s[i][j]==k&&s[i][j]!=s[i-1][j]){
					sta_line=i;
				}
			}if(j>0){
				if(s[i][j]==k&&s[i][j]!=s[i][j-1]){
					sta_row=j;
				}
			}if(i<n-1){
				if(s[i][j]==k&&s[i][j]!=s[i+1][j]){
					end_line=i;
				}
			}if(j<m-1){
				if(s[i][j]==k&&s[i][j]!=s[i][j+1]){
					end_row=j;
				}
			}
		}
	}
	int flag=0,a=sta_line,b=sta_row,c=end_line,d=end_row;
	if(sta_line!=0){
		flag++;
		for(int same=s[a-1][b];b<=end_row;b++){
			if(s[a-1][b]!=same){
				flag++;
				same=s[a-1][b];
			}
		}
	}
	a=sta_line,b=sta_row,c=end_line,d=end_row;
	if(sta_row!=0){
		flag++;
		for(int same=s[a][b-1];a<=end_line;a++){
			if(s[a][b-1]!=same){
				flag++;
				same=s[a][b-1];
			}
		}
	}
	a=sta_line,b=sta_row,c=end_line,d=end_row;
	if(end_line!=n-1){
		flag++;
		for(int same=s[c+1][d];d>=sta_row;d--){
			if(s[c+1][d]!=same){
				flag++;
				same=s[c+1][b];
			}
		}
	}
	a=sta_line,b=sta_row,c=end_line,d=end_row;
	if(end_row!=m-1){
		flag++;
		for(int same=s[c][d+1];c>=sta_line;c--){
			if(s[c][d+1]!=same){
				flag++;
				same=s[c][b+1];
			}
		}
	}
	printf("%d",flag);
	return 0;
}