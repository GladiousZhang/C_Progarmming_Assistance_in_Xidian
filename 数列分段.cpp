#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int s[n],same=-1,cnt=0;
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
		if(s[i]!=same){
			cnt++;
			same=s[i];
		}
	}
	printf("%d",cnt);
	return 0;
}