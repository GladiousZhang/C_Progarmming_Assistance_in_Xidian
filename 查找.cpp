#include <stdio.h>
int main(){
	int n,search;
	scanf("%d %d",&n,&search);
	int a[n];
	for(int i=0;i<n;i++){
		scanf("%d",&a[i]);
	}
	int k,flag=0;
	for(k=0;k<n;k++){
		if(a[k]==search){
			printf("%d ",k);
			flag++;
		}
	}
	if(flag==0){
		printf("-1");
	}
	return 0;
}