#include <stdio.h>
int main(){
	int n,sum;
	scanf("%d %d",&n,&sum);
	int k[n];
	for(int i=1;i<=n;i++){
		scanf("%d",&k[i-1]);
	}
	int flag=0;
	for(int j=0;j<n;j++){
		for(int l=0;l<n;l++){
			for(int m=0;m<n;m++){
				for(int p=0;p<n;p++){
					if(k[j]+k[l]+k[m]+k[p]==sum){
						flag++;
						goto out;
					}else{
						continue;
					}
				}
			}
		}
	}
	out:
	if(flag){
		printf("Yes");
	}else{
		printf("No");
	}
	return 0;
}