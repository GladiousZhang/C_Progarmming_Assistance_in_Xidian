#include <stdio.h>
int main(){
	int n,a,b,c,d,area=0;
	int s[101][101]={};
	scanf("%d",&n);
	for(int i=0;i<n;i++){
		scanf("%d %d %d %d",&a,&b,&c,&d);
		for(int j=a;j<c;j++){
			for(int k=b;k<d;k++){
				s[j][k]=1;
			}
		}
	}
	for(int i=0;i<101;i++){
		for(int j=0;j<101;j++){
			if(s[i][j]==1){
				area+=1;
			}
		}
	}
	printf("%d",area);
	return 0;
}