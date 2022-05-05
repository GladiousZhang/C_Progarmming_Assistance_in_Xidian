#include <stdio.h>
int main(){
	int m,n,cnt=0,cmp=0;
	scanf("%d %d",&m,&n);
	int s[m][n];
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			scanf("%d",&s[i][j]);
			}
		}
	for(int i=0;i<m;i++){
		for(int j=0;j<n;j++){
			if(s[i][j]==1){
				cnt++;
			}
		}
		if(cnt==0){
			printf("-1 -1\n");
		}
		if(cnt!=0){
			for(int k=0;k<cnt;k++){
				for(int l=0;l<n;l++){
					if(s[i][l]==1){
						cmp++;
					}
					if(s[i][l]==0){
						cmp=0;
					}
					if(cmp==cnt-k){
						printf("%d %d\n",l-cmp+1,l);
						goto out;
					}
				}
				cmp=0;
			}
		}
		out:
		cnt=0;cmp=0;
	}
	return 0;
}