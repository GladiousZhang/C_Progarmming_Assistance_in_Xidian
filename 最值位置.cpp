#include <stdio.h>
int main(){
	int n;
	scanf("%d",&n);
	int s[n],max=0;
	for(int i=0;i<n;i++){
		scanf("%d",&s[i]);
		if(s[i]>max){
			max=s[i];
		}
	}
	for(int i=0;i<n;i++){
		if(s[i]==max){
			printf("%d %d %d",n,max,i);
			break;
		}
	}
	return 0;
}