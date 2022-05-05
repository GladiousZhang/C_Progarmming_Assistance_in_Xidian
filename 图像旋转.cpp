#include <stdio.h>
int main(){
	int m,n,flag=1;
	scanf("%d %d",&m,&n);
	int s[n][m];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&s[j][i]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=m-1;j>=0;j--){
			if(flag%m==0){
				printf("%d\n",s[i][j]);
			}else{
				printf("%d ",s[i][j]);
			}
			flag++;
		}
	}
	return 0;
}